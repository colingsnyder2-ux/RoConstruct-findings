// from server: 72% by colin
// roc 2007-08 0067f260  unit: CXTPControlSelector  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f260
//
// 0067f260  83b99801000000       cmp dword ptr [ecx + 0x198], 0
// 0067f267  7528                 jne 0x67f291
// 0067f269  33c0                 xor eax, eax
// 0067f26b  33d2                 xor edx, edx
// 0067f26d  898178010000         mov dword ptr [ecx + 0x178], eax
// 0067f273  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 0067f279  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0067f27f  8b916c010000         mov edx, dword ptr [ecx + 0x16c]
// 0067f285  898190010000         mov dword ptr [ecx + 0x190], eax
// 0067f28b  899194010000         mov dword ptr [ecx + 0x194], edx
// 0067f291  8b817c010000         mov eax, dword ptr [ecx + 0x17c]
// 0067f297  8b9178010000         mov edx, dword ptr [ecx + 0x178]
// 0067f29d  6a01                 push 1
// 0067f29f  50                   push eax
// 0067f2a0  52                   push edx
// 0067f2a1  e86af8ffff           call 0x67eb10
// 0067f2a6  c20400               ret 4

struct CXTPControlSelector {
    char pad[0x168];
    int field_168;
    int field_16c;
    char pad2[0x178 - 0x170];
    int field_178;
    int field_17c;
    char pad3[0x190 - 0x180];
    int field_190;
    int field_194;
    int field_198;
    void func_0067f260(int);
};

extern void __stdcall func_0067eb10(int, int, int);

void CXTPControlSelector::func_0067f260(int arg)
{
    if (field_198 == 0) {
        field_178 = 0;
        field_17c = 0;
        field_190 = field_168;
        field_194 = field_16c;
    }
    func_0067eb10(field_178, field_17c, 1);
}
