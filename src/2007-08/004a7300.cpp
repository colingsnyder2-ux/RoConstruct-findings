// from server: 50% by colin
struct TItem
{
    void* field0;
    TItem(int value, int unused);
};

extern "C" void* __cdecl operator_new(unsigned int size);

TItem::TItem(int value, int unused)
{
    field0 = 0;
    void* p = operator_new(0x14);
    if (p)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x79d3d0;
        *(int*)((char*)p + 0xc) = value;
    }
    field0 = p;
}
