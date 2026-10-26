// from server: 100% by king_originala
void* __cdecl allocate(unsigned int);
extern const unsigned int controlTable[];

struct Deleter {
    void operator()(void*) const;
};

struct Control {
    const unsigned int* table;
    long strong;
    long weak;
    void* object;
    unsigned char deleter[4];
};

struct S {
    Control* control;
    S(void*, const Deleter&);
};

S::S(void* object, const Deleter& deleter) : control(0)
{
    try {
        Control* p = static_cast<Control*>(allocate(20));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = controlTable;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        deleter(object);
        throw;
    }
}
