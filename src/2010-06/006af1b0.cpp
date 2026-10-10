// from server: 52% by tester
struct Slot {
    void* vtable;
    int refcount1;
    int refcount2;
    int value;
};

struct Signal {
    Slot* slot;
    Signal* connect(int value);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Signal* Signal::connect(int value)
{
    Slot* s;
    this->slot = 0;
    s = (Slot*)operator_new(0x10);
    if (s != 0)
    {
        s->refcount1 = 1;
        s->refcount2 = 1;
        s->vtable = (void*)0xa4156c;
        s->value = value;
    }
    else
    {
        s = 0;
    }
    this->slot = s;
    return this;
}
