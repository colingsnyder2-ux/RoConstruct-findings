// from server: 46% by colin
// roc 2007-08 005ae220  unit: RBX::VLighting::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ae220
//
// 005ae220  51                   push ecx
// 005ae221  8b9110020000         mov edx, dword ptr [ecx + 0x210]
// 005ae227  56                   push esi
// 005ae228  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ae22c  83ec08               sub esp, 8
// 005ae22f  8bc4                 mov eax, esp
// 005ae231  8910                 mov dword ptr [eax], edx
// 005ae233  8b8914020000         mov ecx, dword ptr [ecx + 0x214]
// 005ae239  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ae241  8964240c             mov dword ptr [esp + 0xc], esp
// 005ae245  56                   push esi
// 005ae246  894804               mov dword ptr [eax + 4], ecx
// 005ae249  e892ffffff           call 0x5ae1e0
// 005ae24e  83c40c               add esp, 0xc
// 005ae251  8bc6                 mov eax, esi
// 005ae253  5e                   pop esi
// 005ae254  59                   pop ecx
// 005ae255  c20400               ret 4

struct VLighting {
    char pad[0x210];
    int field210;
    int field214;
    void sub_5AE1E0(int*, int*, int*);
    VLighting* method(int* arg);
};

VLighting* VLighting::method(int* arg) {
    int local[2];
    local[0] = field210;
    local[1] = field214;
    int zero = 0;
    sub_5AE1E0(local, &zero, arg);
    return (VLighting*)arg;
}
