// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void* controlTable[];

struct Object {
    virtual ~Object();
};

struct Control {
    void** table;
    long strong;
    long weak;
    Object* object;
    Control(Object* p);
};

inline Control::Control(Object* p)
    : table(controlTable), strong(1), weak(1), object(p)
{
}

struct S {
    Control* control;
    S(Object* object);
};

S::S(Object* object) : control(0)
{
    try {
        control = new Control(object);
    }
    catch (...) {
        delete object;
        throw;
    }
}
