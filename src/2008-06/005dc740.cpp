// from server: 98% by king_originala
extern char instanceType;
extern char modelType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct Model {
    void* get();
};

struct Prim {
    void setCanSleep(bool);
};

struct Part {
    char reserved[0x228];
    Prim primitive;
};

struct Base {
    Part* getPart();
    void reset();
};

extern void __cdecl update(void*, float, void*);

struct S {
    char reserved0[0x10];
    int count;
    int state;
    char reserved1[0x78 - 0x18];
    int enabled;
    char data[1];

    void f(int unused0, int unused1, float value);
};

void S::f(int unused0, int unused1, float value)
{
    if (enabled) {
        Model* model = static_cast<Model*>(__RTDynamicCast(
            *reinterpret_cast<void**>(reinterpret_cast<char*>(this) - 0xa0),
            0, &instanceType, &modelType, 0));

        if (model)
            update(data, value, model->get());

        Base* base = reinterpret_cast<Base*>(
            reinterpret_cast<char*>(this) - 0x1a4);

        Part* part = base->getPart();
        if (part && &part->primitive) {
            part = base->getPart();
            Prim* primitive = part ? &part->primitive : 0;
            primitive->setCanSleep(false);
        }

        base->reset();

        if (count > 0) {
            if (--count == 0)
                state = 3;
        }
    }
}
