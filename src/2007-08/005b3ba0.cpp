// from server: 61% by colin
// roc 2007-08 005b3ba0  unit: RBX::Assembly  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3ba0
//
// 005b3ba0  83ec08               sub esp, 8
// 005b3ba3  53                   push ebx
// 005b3ba4  8b5928               mov ebx, dword ptr [ecx + 0x28]
// 005b3ba7  56                   push esi
// 005b3ba8  57                   push edi
// 005b3ba9  8d7124               lea esi, [ecx + 0x24]
// 005b3bac  8d442418             lea eax, [esp + 0x18]
// 005b3bb0  50                   push eax
// 005b3bb1  8d4c2410             lea ecx, [esp + 0x10]
// 005b3bb5  51                   push ecx
// 005b3bb6  8bce                 mov ecx, esi
// 005b3bb8  e893190500           call 0x605550
// 005b3bbd  8bf8                 mov edi, eax
// 005b3bbf  8b07                 mov eax, dword ptr [edi]
// 005b3bc1  85c0                 test eax, eax
// 005b3bc3  7404                 je 0x5b3bc9
// 005b3bc5  3bc6                 cmp eax, esi
// 005b3bc7  7406                 je 0x5b3bcf
// 005b3bc9  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b3bcf  33c0                 xor eax, eax
// 005b3bd1  395f04               cmp dword ptr [edi + 4], ebx
// 005b3bd4  5f                   pop edi
// 005b3bd5  5e                   pop esi
// 005b3bd6  0f95c0               setne al
// 005b3bd9  5b                   pop ebx
// 005b3bda  83c408               add esp, 8
// 005b3bdd  c20400               ret 4

struct Assembly {
    char pad[0x24];
    int field24;
    int field28;
    bool compare(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __stdcall sub_605550(int*, int*);

bool Assembly::compare(int arg) {
    int local1;
    int local2;
    int* p = &field24;
    int* r = (int*)sub_605550(&local1, &local2);
    int v = *r;
    if (v != 0 && v != (int)p) {
        _invalid_parameter_noinfo();
    }
    return r[1] != field28;
}
