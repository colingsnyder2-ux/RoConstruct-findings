// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const void* control_vtable[];

struct Control {
    const void** vtable;
    long strong;
    long weak;
    void* object;
    unsigned char deleter;
};

struct S {
    Control* control;
    S(void* object, int);
};

S::S(void* object, int) : control(0)
{
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->vtable = control_vtable;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        operator delete(object);
        throw;
    }
}
