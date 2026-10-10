// from server: 51% by colin
struct ArrowPanel
{
    void* field0;
    ArrowPanel(int, int);
};

extern "C" void* __cdecl operator_new(unsigned int);

void* __stdcall sub_62FEF6(unsigned int size);

ArrowPanel::ArrowPanel(int a, int b)
{
    field0 = 0;
    void* p = sub_62FEF6(0x14);
    if (p)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7c46f4;
        *(int*)((char*)p + 0xc) = a;
    }
    else
    {
        p = 0;
    }
    field0 = p;
}
