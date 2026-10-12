// from server: 73% by king_originala
typedef unsigned long DWORD;

struct Data
{
    DWORD a, b, c, d;
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object
{
    unsigned char storage[40];

    Object();
};

struct Base
{
    Object* object;
    void* control;

    Base();
    ~Base();
    void reset(Object*);
};

inline Base::Base() : object(0), control(0)
{
}

struct Function
{
    const void* type;
    DWORD unused;
    Data data;

    Function(Data, DWORD);
    ~Function();
};

struct S : Base
{
    Function function;

    S(const Data&);
    void finish();
};

S::S(const Data& data)
    : function(data, 0)
{
    reset(new Object);
    finish();
}
