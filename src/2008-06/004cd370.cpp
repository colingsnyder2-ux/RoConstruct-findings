// from server: 73% by king_originala
struct Data {
    unsigned long a, b, c, d;
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    unsigned char storage[40];
    Object();
};

struct Owner {
    unsigned long first;
    unsigned long second;
    Owner();
    ~Owner();
    void reset(Object*);
};

__forceinline Owner::Owner() : first(0), second(0)
{
}

struct Member {
    Member(Data, unsigned long);
    ~Member();
};

struct S : Owner {
    Member member;
    S(const Data&);
    void finish();
};

S::S(const Data& data)
    : Owner(), member(data, 0)
{
    reset(new Object);
    finish();
}
