---
layout: post
category: blog_tech
title: Time Objects in Python
tags: [tech, Python]

---

This blog serves as a aggregated cheatsheet on time-related object types in Python. For complete documentations, please see [datetime](https://docs.python.org/2/library/datetime.html), [calendar](https://docs.python.org/2/library/calendar.html) and [time](https://docs.python.org/2/library/time.html).

## Calendar

## Time

## Datetime

All datetime types are _immutable_.

#### datetime.timedelta
A `timedelta` object is the difference between two `date`, `time` or `datetime` instances to microsecond resolution. It takes arguments `microseconds`, `milliseconds`, `seconds`, `minutes`, `hours`, `days` and `weeks`, but only `microseconds`, `seconds` and `days` are stored internally. It can be added or subtracted from a `date`, `time` or `datetime` instance.

Operator `//` works as the `floor` function and can be applied to both a `timedelta` instance or a field of it.
```python
>>> two_weeks = datetime.timedelta(weeks=1, days=7)
>>> two_weeks // 3
datetime.timedelta(4, 57600)
>>> two_weeks.days // 3
4
```

For related usage and instruction on other operators and member functions, please refer to [the original documentation](https://docs.python.org/2/library/datetime.html#timedelta-objects).

`datetime.date`
`datetime.time`
`datetime.datetime`
`datetime.tzinfo`

date, time, second precision, time zone




<form>
<input type="button" value="Return to blogs" onclick="window.location.href='{{site.url}}/blog_indices/index_tech'">
</form>
