// from server: 97% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair {
    int first;
    int second;
};

struct Object {
    char storage[0x28];
    Object();
};

struct Owner {
    int first;
    int second;

    Owner() { first = 0; second = 0; }
    ~Owner();
    void reset(Object*);
};

struct Member {
    char storage[12];

    Member(int a, int b, int c);
    ~Member();
};

struct S : Owner {
    Member member;

    S(const Pair&);
    void finish();
};

S::S(const Pair& value)
    : member(value.first, value.second, 0)
{
    reset(new Object);
    finish();
}
