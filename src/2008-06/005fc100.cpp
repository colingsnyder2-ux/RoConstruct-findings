// from server: 73% by king_originala
struct Signal
{
    char data[0x20];
    void remove(void* slot);
};

struct Object
{
    char padding[0x64];
    Signal first;
    Signal second;
};

struct Handle
{
    Object* pointer;
    void reset();
};

struct S
{
    char padding[0x170];
    void* firstSlot;
    void* secondSlot;
    char padding2[0x20];
    Handle handle;

    void func_005fc100();
};

void S::func_005fc100()
{
    if (handle.pointer)
    {
        Object* object = *(Object* volatile*)&handle.pointer;
        void* slot = &firstSlot;
        if (object)
            object->first.remove(slot);

        object = *(Object* volatile*)&handle.pointer;
        slot = &secondSlot;
        if (object)
            object->second.remove(slot);

        handle.reset();
    }
}
