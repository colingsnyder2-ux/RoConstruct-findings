// from server: 86% by colin
// roc 2007-08 00622b60  unit: RBX::HealthHud  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00622b60
//
// 00622b60  56                   push esi
// 00622b61  8b742408             mov esi, dword ptr [esp + 8]
// 00622b65  85f6                 test esi, esi
// 00622b67  742c                 je 0x622b95
// 00622b69  8da42400000000       lea esp, [esp]
// 00622b70  6a00                 push 0
// 00622b72  68044e8800           push 0x884e04
// 00622b77  684c1f8800           push 0x881f4c
// 00622b7c  6a00                 push 0
// 00622b7e  56                   push esi
// 00622b7f  e8b2e10000           call 0x630d36
// 00622b84  83c414               add esp, 0x14
// 00622b87  85c0                 test eax, eax
// 00622b89  750e                 jne 0x622b99
// 00622b8b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00622b91  85f6                 test esi, esi
// 00622b93  75db                 jne 0x622b70
// 00622b95  33c0                 xor eax, eax
// 00622b97  5e                   pop esi
// 00622b98  c3                   ret 
// 00622b99  8bc8                 mov ecx, eax
// 00622b9b  5e                   pop esi
// 00622b9c  e99fdfe2ff           jmp 0x450b40

struct Instance {
    char pad[0xbc];
    Instance* next;
};

extern "C" int __stdcall sub_630d36(Instance*, int, const char*, const char*, int);
extern "C" int __stdcall sub_450b40(Instance*);

Instance* FindInstance(Instance* inst) {
    while (inst != 0) {
        int result = sub_630d36(inst, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0) {
            return (Instance*)sub_450b40((Instance*)result);
        }
        inst = inst->next;
    }
    return 0;
}
