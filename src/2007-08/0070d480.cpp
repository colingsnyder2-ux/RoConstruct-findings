// from server: 33% by colin
// roc 2007-08 0070d480  unit: CXTColorLum  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d480
//
// 0070d480  006a00               add byte ptr [edx], ch
// 0070d483  6a00                 push 0
// 0070d485  52                   push edx
// 0070d486  8b5508               mov edx, dword ptr [ebp + 8]
// 0070d489  53                   push ebx
// 0070d48a  57                   push edi
// 0070d48b  50                   push eax
// 0070d48c  8b4204               mov eax, dword ptr [edx + 4]
// 0070d48f  51                   push ecx
// 0070d490  50                   push eax
// 0070d491  ff153cd17700         call dword ptr [0x77d13c]
// 0070d497  8d4c2430             lea ecx, [esp + 0x30]
// 0070d49b  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0070d4a6  e8d533f7ff           call 0x680880
// 0070d4ab  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0070d4af  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d4b6  59                   pop ecx
// 0070d4b7  5f                   pop edi
// 0070d4b8  5e                   pop esi
// 0070d4b9  5b                   pop ebx
// 0070d4ba  8be5                 mov esp, ebp
// 0070d4bc  5d                   pop ebp
// 0070d4bd  c20400               ret 4

extern "C" int __stdcall BitBlt(int, int, int, int, int, int, int, int, int);
extern "C" void __cdecl sub_680880();

struct CXTColorLum {
    void sub_70D480(int);
};

void CXTColorLum::sub_70D480(int a) {
    int v;
    BitBlt(0, 0, 0, 0, 0, 0, 0, 0, 0);
    v = -1;
    sub_680880();
}
