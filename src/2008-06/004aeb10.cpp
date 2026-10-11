// from server: 37% by colin
struct MarkerItem {
    void* vfptr;
    void* field4;
    char bitstream[0x114];
    int field11c;
    char field120;
    void construct(void* a, void* b);
};

extern "C" void __stdcall sub_4a5090(void* p);
extern "C" void* __stdcall sub_49e890();

void MarkerItem::construct(void* a, void* b)
{
    vfptr = a;
    field4 = b;
    sub_4a5090(&bitstream[0]);
    int* vtable = *(int**)b;
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))*(int*)((char*)vtable + 0xb0);
    int r = fn(b, *(int*)((char*)a + 0x2d54), *(int*)((char*)a + 0x2d58));
    void* g = sub_49e890();
    field11c = r - *(int*)((char*)g + 0x148);
    field120 = 0;
}
