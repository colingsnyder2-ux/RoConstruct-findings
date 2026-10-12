// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair {
    int first;
    int second;
};

struct Object {
    char storage[40];
    Object();
};

struct Count {
    int value;
    Count();
    ~Count();
};

inline Count::Count() : value(0) {}

struct Member {
    int f(int, int, int);
    Member(int, int, int);
    ~Member();
};

inline Member::Member(int a, int b, int c) {
    f(a, b, c);
}

struct S {
    int first;
    Count second;
    Member member;

    S(const Pair&);
    void set(Object*);
    void finish();
};

S::S(const Pair& value)
    : first(0), second(), member(value.first, value.second, 0)
{
    set(new Object);
    finish();
}
