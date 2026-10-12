// from server: 92% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Data {
    unsigned int words[6];
    Data(const Data&);
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

struct Object {
    unsigned char storage[40];
    Object();
};

struct Count {
    unsigned int value;
    Count();
    ~Count();
};

inline Count::Count() : value(0)
{
}

struct Base {
    Object* first;
    Count second;

    Base();
    void set(Object*);
};

inline Base::Base() : first(0), second()
{
}

struct Member {
    unsigned int value;

    Member(Data);
    ~Member();
    void initialize(const Data*);
};

inline Member::Member(Data data) : value(0)
{
    initialize(&data);
}

struct S : Base {
    Member member;

    S(const Data&);
    void finish();
};

S::S(const Data& data) : Base(), member(data)
{
    set(new Object);
    finish();
}
