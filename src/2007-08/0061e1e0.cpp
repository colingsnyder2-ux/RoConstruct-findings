// from server: 44% by colin
struct ScoreHud
{
    char pad0[0x10];
    void* field10;
    char pad14[0x0c];
    char field20;
    char field21;
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl sub_429A50(void* dest, void* src);

ScoreHud* __stdcall sub_61E1E0(int a1, int a2, int a3, int a4, char a5)
{
    ScoreHud* p = (ScoreHud*)operator_new(0x24);
    if (p)
    {
        *(int*)((char*)p + 0) = a1;
        *(int*)((char*)p + 4) = a2;
        *(int*)((char*)p + 8) = a3;
        *(int*)((char*)p + 0xc) = *(int*)a4;
        sub_429A50((char*)p + 0x10, (void*)(a4 + 4));
        p->field20 = a5;
        p->field21 = 0;
    }
    return p;
}
