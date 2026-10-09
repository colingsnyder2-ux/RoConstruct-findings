// from server: 80% by colin
// roc 2007-08 00700690  unit: CXTPTabPaintManager  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00700690
//
// 00700690  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00700697  7443                 je 0x7006dc
// 00700699  b803000000           mov eax, 3
// 0070069e  0144240c             add dword ptr [esp + 0xc], eax
// 007006a2  01442410             add dword ptr [esp + 0x10], eax
// 007006a6  29442414             sub dword ptr [esp + 0x14], eax
// 007006aa  29442418             sub dword ptr [esp + 0x18], eax
// 007006ae  56                   push esi
// 007006af  8b742408             mov esi, dword ptr [esp + 8]
// 007006b3  8b06                 mov eax, dword ptr [esi]
// 007006b5  8b5038               mov edx, dword ptr [eax + 0x38]
// 007006b8  6a00                 push 0
// 007006ba  8bce                 mov ecx, esi
// 007006bc  ffd2                 call edx
// 007006be  8b06                 mov eax, dword ptr [esi]
// 007006c0  8b5034               mov edx, dword ptr [eax + 0x34]
// 007006c3  68ffffff00           push 0xffffff
// 007006c8  8bce                 mov ecx, esi
// 007006ca  ffd2                 call edx
// 007006cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007006cf  8d442410             lea eax, [esp + 0x10]
// 007006d3  50                   push eax
// 007006d4  51                   push ecx
// 007006d5  ff1554ee7700         call dword ptr [0x77ee54]
// 007006db  5e                   pop esi
// 007006dc  c21800               ret 0x18

struct CXTPTabPaintManager
{
    char pad[0xac];
    int field_0xac;
    void sub_00700690(int, int, int, int, int, int);
};

extern "C" int (__stdcall *DrawFocusRect)(void*, const void*);

void CXTPTabPaintManager::sub_00700690(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if (field_0xac == 0)
        return;

    int eax = 3;
    a3 += eax;
    a4 += eax;
    a5 -= eax;
    a6 -= eax;

    int* p = (int*)a1;
    int* vtbl = (int*)*p;
    ((void (__thiscall*)(int*, int))vtbl[0x38 / 4])(p, 0);
    vtbl = (int*)*p;
    ((void (__thiscall*)(int*, int))vtbl[0x34 / 4])(p, 0xffffff);

    DrawFocusRect((void*)p[1], &a3);
}
