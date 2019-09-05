#ifndef Problem_h
#define Problem_h

class Problem {
public:
    virtual void load() = 0;
    virtual void solve() = 0;
    virtual void print() = 0;

    void printBorder(char type);
    void run();

};

#endif /* Problem_h */
