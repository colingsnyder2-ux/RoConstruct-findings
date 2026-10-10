// from server: 49% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);

struct VClientPhysicsItem
{
    void* field0;
    int field4;
    int field8;
    int fieldC;
};

struct VClientPhysics
{
    VClientPhysicsItem* field0;
    VClientPhysics* ctor(int arg, int arg2);
};

VClientPhysics* VClientPhysics::ctor(int arg, int arg2)
{
    VClientPhysicsItem* item;
    this->field0 = 0;
    item = (VClientPhysicsItem*)func_0062fef6(0x14);
    if (item != 0)
    {
        item->field4 = 1;
        item->field8 = 1;
        item->field0 = (void*)0x79d3bc;
        item->fieldC = arg;
    }
    else
    {
        item = 0;
    }
    this->field0 = item;
    return this;
}
