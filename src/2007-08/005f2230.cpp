// from server: 51% by colin
// roc 2007-08 005f2230  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2230
//
// 005f2230  6aff                 push -1
// 005f2232  68f8b57500           push 0x75b5f8
// 005f2237  64a100000000         mov eax, dword ptr fs:[0]
// 005f223d  50                   push eax
// 005f223e  64892500000000       mov dword ptr fs:[0], esp
// 005f2245  51                   push ecx
// 005f2246  56                   push esi
// 005f2247  8bf1                 mov esi, ecx
// 005f2249  89742404             mov dword ptr [esp + 4], esi
// 005f224d  837e0400             cmp dword ptr [esi + 4], 0
// 005f2251  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f2259  7411                 je 0x5f226c
// 005f225b  8b4608               mov eax, dword ptr [esi + 8]
// 005f225e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f2261  6a01                 push 1
// 005f2263  50                   push eax
// 005f2264  ffd1                 call ecx
// 005f2266  83c408               add esp, 8
// 005f2269  894608               mov dword ptr [esi + 8], eax
// 005f226c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2270  c7460400000000       mov dword ptr [esi + 4], 0
// 005f2277  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005f227e  c706bc707800         mov dword ptr [esi], 0x7870bc
// 005f2284  5e                   pop esi
// 005f2285  64890d00000000       mov dword ptr fs:[0], ecx
// 005f228c  83c410               add esp, 0x10
// 005f228f  c3                   ret 

struct S {
    void f();
};

void S::f()
{
    if (*(int*)((char*)this + 4) == 0) {
        int (*fn)(int, int) = *(int (**)(int, int))((char*)this + 4);
        int arg = *(int*)((char*)this + 8);
        *(int*)((char*)this + 8) = fn(arg, 1);
    }
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 12) = 0;
    *(int*)this = 0x7870bc;
}
