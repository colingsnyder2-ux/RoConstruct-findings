// from server: 93% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Data {
    volatile unsigned int words[6];
    Data(const Data&);
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct Counter {
    unsigned int value;
    Counter();
    ~Counter();
};

struct Base {
    unsigned int first;
    Counter second;

    Base();
    ~Base();
    void set(Object*);
    void finish();
};

struct Member {
    unsigned int value;
    Member(Data);
    ~Member();
    void assign(const Data&);
};

struct S : Base {
    Member member;
    S(const Data&);
};

inline Data::Data(const Data& other)
{
    words[0] = other.words[0];
    words[1] = other.words[1];
    words[2] = other.words[2];
    words[3] = other.words[3];
    words[4] = other.words[4];
    words[5] = other.words[5];
}

inline Counter::Counter() : value(0)
{
}

inline Base::Base() : first(0), second()
{
}

inline Member::Member(Data data) : value(0)
{
    assign(data);
}

S::S(const Data& data) : Base(), member(data)
{
    set(new Object);
    finish();
}
