// from server: 94% by king_originala
struct Interface
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void destroy(unsigned int);
    unsigned char padding[12];
};

struct Object
{
    unsigned char padding[16];
    Interface interfacePart;
    unsigned long references;
};

unsigned long __stdcall release(Object* object)
{
    unsigned long result = --object->references;
    if (result == 0 && object)
        object->interfacePart.destroy(1);
    return result;
}
