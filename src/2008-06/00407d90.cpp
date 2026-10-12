// from server: 94% by king_originala
struct Base {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void destroy(unsigned int);

    unsigned int padding[2];
    unsigned int references;
};

struct Object {
    unsigned int padding[3];
    Base base;
};

extern "C" unsigned int __stdcall release(Object *object)
{
    --object->base.references;
    unsigned int result = object->base.references;
    if (result == 0 && object != 0)
        object->base.destroy(1);
    return result;
}
