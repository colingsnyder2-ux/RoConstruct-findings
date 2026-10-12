// from server: 93% by king_originala
struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual ~S();

    unsigned char padding[20];
    unsigned long references;
};

unsigned long __stdcall release(S* object)
{
    unsigned long remaining = --object->references;
    if (remaining == 0)
        delete object;
    return remaining;
}
