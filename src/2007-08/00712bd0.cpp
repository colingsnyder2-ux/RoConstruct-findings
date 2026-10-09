// from DeepSeek/server: 100% by colin
// roc 2007-08 00712bd0  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712bd0
//
// 00712bd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00712bd4  53                   push ebx
// 00712bd5  56                   push esi
// 00712bd6  57                   push edi
// 00712bd7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00712bdb  8bf1                 mov esi, ecx
// 00712bdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00712be1  50                   push eax
// 00712be2  51                   push ecx
// 00712be3  57                   push edi
// 00712be4  8bce                 mov ecx, esi
// 00712be6  e8f5d80000           call 0x7204e0
// 00712beb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00712bee  8d542418             lea edx, [esp + 0x18]
// 00712bf2  8bd8                 mov ebx, eax
// 00712bf4  52                   push edx
// 00712bf5  8d442418             lea eax, [esp + 0x18]
// 00712bf9  50                   push eax
// 00712bfa  57                   push edi
// 00712bfb  e830faffff           call 0x712630
// 00712c00  5f                   pop edi
// 00712c01  5e                   pop esi
// 00712c02  8bc3                 mov eax, ebx
// 00712c04  5b                   pop ebx
// 00712c05  c20c00               ret 0xc

struct CXTShadowHook {
    char pad[0x10];
    int field_0x10;
    int method_7204e0(int, int, int);
    int method_712630(int, int*, int*);
    int target(int, int, int);
};

int CXTShadowHook::target(int a, int b, int c) {
    int result = method_7204e0(a, b, c);
    int x;
    int y;
    ((CXTShadowHook*)field_0x10)->method_712630(a, &x, &y);
    return result;
}
