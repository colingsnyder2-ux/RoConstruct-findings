// from server: 86% by king_originala
struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual int slot2();
    int value;
};

extern "C" void __cdecl update(int*, bool);

struct S {
    char padding[0x9c];
    Object* object;
    void f();
};

void S::f()
{
    update(&object->value, object->slot2() == 1);
}
