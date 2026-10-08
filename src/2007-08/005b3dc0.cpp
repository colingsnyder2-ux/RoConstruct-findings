// from server: 82% by colin
// roc 2007-08 005b3dc0  unit: RBX::Assembly  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3dc0
//
// 005b3dc0  8b442404             mov eax, dword ptr [esp + 4]
// 005b3dc4  56                   push esi
// 005b3dc5  8bf1                 mov esi, ecx
// 005b3dc7  33c9                 xor ecx, ecx
// 005b3dc9  3b4608               cmp eax, dword ptr [esi + 8]
// 005b3dcc  7503                 jne 0x5b3dd1
// 005b3dce  894e08               mov dword ptr [esi + 8], ecx
// 005b3dd1  894820               mov dword ptr [eax + 0x20], ecx
// 005b3dd4  8b4024               mov eax, dword ptr [eax + 0x24]
// 005b3dd7  51                   push ecx
// 005b3dd8  8b4864               mov ecx, dword ptr [eax + 0x64]
// 005b3ddb  e8d0e60200           call 0x5e24b0
// 005b3de0  8d4c2408             lea ecx, [esp + 8]
// 005b3de4  51                   push ecx
// 005b3de5  8d4e0c               lea ecx, [esi + 0xc]
// 005b3de8  e8431d0500           call 0x605b30
// 005b3ded  5e                   pop esi
// 005b3dee  c20400               ret 4

struct Assembly {
    char pad[8];
    int field_8;
    char pad2[4];
    int field_10;
    void removePrimitive(int* p);
};

extern "C" void __stdcall sub_5e24b0(int);
extern "C" void __stdcall sub_605b30(void*);

void Assembly::removePrimitive(int* p) {
    if (p == (int*)field_8) {
        field_8 = 0;
    }
    p[8] = 0;
    int* q = (int*)p[9];
    sub_5e24b0(*(int*)((char*)q + 0x64));
    sub_605b30(&field_10);
}
