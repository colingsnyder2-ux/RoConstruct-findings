// from server: 83% by king_originala
struct Target {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void invoke(void*, int);
};

struct Object {
    char padding[0x1cc];
    Target target;
};

struct PartTool {
    char padding[0x18];
    Object* object;
    void invoke(void*);
};

void PartTool::invoke(void* argument)
{
    if (object)
        object->target.invoke(argument, 0);
}
