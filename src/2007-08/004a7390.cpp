// from server: 49% by colin
extern "C" void* __cdecl operator_new(unsigned int size);

struct VClientPhysicsItem
{
    void* field0;
    VClientPhysicsItem* construct(int arg1, int arg2);
};

VClientPhysicsItem* VClientPhysicsItem::construct(int arg1, int arg2)
{
    this->field0 = 0;
    void* mem = operator_new(0x14);
    if (mem != 0)
    {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(int*)mem = 0x79d3e4;
        *(int*)((char*)mem + 0xc) = arg1;
    }
    else
    {
        mem = 0;
    }
    this->field0 = mem;
    return this;
}
