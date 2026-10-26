// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

struct ControlBlock {
    void* table;
    long strong;
    long weak;
    Object* object;
    int deleter;
};

struct S {
    ControlBlock* control;
    S(Object* object, int deleter);
};

S::S(Object* object, int deleter)
    : control(0)
{
    try {
        ControlBlock* p =
            static_cast<ControlBlock*>(operator new(sizeof(ControlBlock)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = reinterpret_cast<void*>(0x00821af8);
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        delete object;
        throw;
    }
}
