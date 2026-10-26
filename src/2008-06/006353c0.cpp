// from server: 100% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Control {
    unsigned long table;
    long strong;
    long weak;
    void* object;
    unsigned long unused;
};

struct S {
    Control* control;
    S(void* object, int deleter);
};

S::S(void* object, int deleter)
{
    control = 0;
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = 0x8485d0;
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
