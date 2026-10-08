// from server: 92% by colin
// roc 2007-08 0041eb40  unit: CSettingsExplorer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041eb40
//
// 0041eb40  56                   push esi
// 0041eb41  8b742408             mov esi, dword ptr [esp + 8]
// 0041eb45  85f6                 test esi, esi
// 0041eb47  742c                 je 0x41eb75
// 0041eb49  8da42400000000       lea esp, [esp]
// 0041eb50  6a00                 push 0
// 0041eb52  68044e8800           push 0x884e04
// 0041eb57  684c1f8800           push 0x881f4c
// 0041eb5c  6a00                 push 0
// 0041eb5e  56                   push esi
// 0041eb5f  e8d2212100           call 0x630d36
// 0041eb64  83c414               add esp, 0x14
// 0041eb67  85c0                 test eax, eax
// 0041eb69  750e                 jne 0x41eb79
// 0041eb6b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0041eb71  85f6                 test esi, esi
// 0041eb73  75db                 jne 0x41eb50
// 0041eb75  33c0                 xor eax, eax
// 0041eb77  5e                   pop esi
// 0041eb78  c3                   ret 
// 0041eb79  8bc8                 mov ecx, eax
// 0041eb7b  5e                   pop esi
// 0041eb7c  e9bf21ffff           jmp 0x410d40

struct Instance {
    char pad[0xbc];
    Instance* field_bc;
};

extern "C" void* __cdecl sub_00630d36(Instance*, int, const char*, const char*, int);
extern "C" void* __cdecl sub_00410d40(void*);

Instance* find(Instance* inst) {
    while (inst != 0) {
        void* result = sub_00630d36(inst, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0) {
            return (Instance*)sub_00410d40(result);
        }
        inst = inst->field_bc;
    }
    return 0;
}
