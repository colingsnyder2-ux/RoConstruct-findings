// from server: 100% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Function {
    ~Function();
};

struct Control {
    virtual ~Control();
    long strong;
    long weak;
    Function* object;

    Control(Function* p) : strong(1), weak(1), object(p) {}
};

struct Holder {
    Control* control;
    Holder(Function*);
};

Holder::Holder(Function* p) : control(0)
{
    try {
        control = new Control(p);
    }
    catch (...) {
        delete p;
        throw;
    }
}
