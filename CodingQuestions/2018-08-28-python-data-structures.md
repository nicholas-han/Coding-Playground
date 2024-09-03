---
layout: post
category: blog_tech
title: Data Structures in Python
tags: [tech, Python, data structure]
---

This blog aims to give some general background on useful Python containers. Contents are based on [Python 2.7.15 documentaion](https://docs.python.org/2/), including the pages on [data structures](https://docs.python.org/2/tutorial/datastructures.html) and [collections](https://docs.python.org/2/library/collections.html).


## Named Tuple
Container `tuple` is a useful data type in Python where different types of objects can be stored together. As a subclass of `tuple`, it enables reference to elements through names. Elements of `namedtuple` are accessible through name, index and iterator. It can also be viewed as a class with only user-defined fields but no methods. In a sense `namedtuple` is similar to `list` container in R, as both can store different types of objects with names, but the difference is neither `namedtuple` field names nor values are mutable. Still, just like `tuple`, `namedtuple` can contain mutable fields, such as a `list` object.

Field names shall not be keywords such as `def`, `print`, `return` and not start with a digit or underscore. The constructor argument `rename=True` auto-corrects invalid field names.

Below is an example of defining a namedtuple container and creating an instance of it.
```python
from collections import namedtuple
Person = namedtuple('Person', ['name', 'dob', 'gender'])
person1 = Person('Nicholas','02/29/2018', 'M')
```
Since `namedtuple` object is immutable, in order to update field value, one can use the member function `namedtuple._replace()`, which returns by value a new object. The argument can be either of format `<field_name>=<new_field_value>` or the unpacking operator `**` followed by a dictionary.
```python
# directly use a field name
person1 = person1.replace(name='Han')

# use an unpacked dictionary
args = {'name':'Han', 'dob'='01/01/2018'}
person1 = person1._replace(**args)
```


## Counter
A `Counter` is a subclass of `dict`, where the value are integers (can be negative). When a key is not in a `Counter`, it has default value 0. Just like in `dict` a user can create element through `myDict[<new_key>] = <new_value>`, one can assign arbitrary integer value to a given key through `myCounter[<key>] = <any_int>`.

A constructor of `Counter` takes iterable object, dictionary object, or keyword arguments. Notice that string is interpreted as a single iterable.
```python
cnt = Counter('knowledgeispower')
cnt1 = Counter({'fish': 4, 'chips': 20, 'thigh': 2, 'wings': 2})
cnt2 = Counter(fish=12, chips=10, thigh=3, wings=1, drumstick=6)
```
Some useful operations are given below. Notice that `Counter` is unordered, just like a `dict`.
```python
# returns the most common keys
>>> cnt1.most_common(2)
[('chips', 20), ('fish', 4)]

# returns the sum of counts across two counters
>>> cnt1 + cnt12
Counter({'chips': 30, 'drumstick': 6, 'fish': 16, 'thigh': 5, 'wings': 3})

# returns the difference of counts across two counters
# only positive counts are kept, others are zero
>>> cnt1 - cnt12
Counter({'chips': 10, 'wings': 1})

# returns the larger count for each key
>>> cnt1 | cnt12
Counter({'chips': 20, 'drumstick': 6, 'fish': 12, 'thigh': 3, 'wings': 2})
```


## Ordered Dictionary
An `OrderedDict` is a subclass of `dict` which keeps track of insersion order. Below is a direct excerpt from the documentation, which I find to be very concise and clear, so I make a direct quote instead of paraphrasing it.

> Equality tests between OrderedDict objects are order-sensitive and are implemented as list(od1.items())==list(od2.items()). Equality tests between OrderedDict objects and other Mapping objects are order-insensitive like regular dictionaries. This allows OrderedDict objects to be substituted anywhere a regular dictionary is used.

Below is an example of defining a namedtuple container and creating an instance of it.
```python
>>> from collections import OrderedDict
>>> # unsorted dictionary
>>> myDict = {'Math': 146, 'English': 140, 'Chinese': 141, 'Physics': 82, 'Chemistry': 64}

>>> # OrderedDict sorted by key
>>> myDict = OrderedDict(sorted(myDict.items(), key=lambda t: t[0]))
>>> print myDict
OrderedDict([('Chemistry', 64), ('Chinese', 141), ('English', 140), ('Math', 146), ('Physics', 82)])

>>> # OrderedDict sorted by value
>>> myDict = OrderedDict(sorted(myDict.items(), key=lambda t: t[1]))
>>> print myDict
OrderedDict([('Chemistry', 64), ('Physics', 82), ('English', 140), ('Chinese', 141), ('Math', 146)])
```
Member function `OrderedDict.popitem()` deletes the last (or the first if argument `last=False`) element by reference and returns the item deleted.
```python
>>> myDict.popitem()
('Math', 146)

>>> myDict.popitem(last=False)
('Chemistry', 64)
```


## Others
Below are the commonly used data structures that Python users are usually familiar with. To check syntax and usage, please click below to see the documentation.
* [`tuple`](https://docs.python.org/2.7/tutorial/datastructures.html#tuples-and-sequences)
* [`list`](https://docs.python.org/2.7/tutorial/datastructures.html#more-on-lists)
* [`set`](https://docs.python.org/2.7/library/stdtypes.html#set-types-set-frozenset)
* [`dictionary`](https://docs.python.org/2.7/library/stdtypes.html#mapping-types-dict)
* [`deque`](https://docs.python.org/2/library/collections.html#deque-objects)

<form>
<input type="button" value="Return to blogs" onclick="window.location.href='{{site.url}}/blog_indices/index_tech'">
</form>
