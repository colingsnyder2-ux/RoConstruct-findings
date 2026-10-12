// from server: 95% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Pair {
    int first;
    int second;
};

struct Owner {
    int first;
    int second;
    Owner();
    ~Owner();
    void attach(struct Object*);
};

struct Object {
    char storage[40];
    Object();
};

struct Member {
    int f(int, int, int);
    Member(int, int, int);
    ~Member();
};

struct S : Owner {
    Member member;
    S(const Pair&);
    void finish();
};

inline Owner::Owner() : first(0), second(0)
{
}

inline Member::Member(int a, int b, int c)
{
    f(a, b, c);
}

S::S(const Pair& p) : member(p.first, p.second, 0)
{
    attach(new Object);
    finish();
}
