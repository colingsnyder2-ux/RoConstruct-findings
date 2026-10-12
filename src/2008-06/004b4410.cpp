// from server: 75% by king_originala
typedef unsigned long DWORD;

struct Data {
    DWORD a, b, c, d;
};

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Object {
    unsigned char storage[40];
    Object();
};

struct Control {
    void *pointer;

    Control();
    ~Control();
};

inline Control::Control() : pointer(0)
{
}

struct Base {
    Object *object;
    Control control;

    Base();
    void reset(Object *);
};

inline Base::Base() : object(0), control()
{
}

struct Function {
    const void *type;
    DWORD unused;
    Data data;

    Function(Data, DWORD);
    ~Function();
};

struct S : Base {
    Function function;

    S(const Data &);
    void finish();
};

S::S(const Data &data)
    : function(data, 0)
{
    reset(new Object);
    finish();
}
