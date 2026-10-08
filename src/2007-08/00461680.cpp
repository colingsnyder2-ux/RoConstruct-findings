// from server: 100% by colin
// roc 2007-08 00461680  unit: CScriptEditor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461680
//
// 00461680  56                   push esi
// 00461681  8b742408             mov esi, dword ptr [esp + 8]
// 00461685  85f6                 test esi, esi
// 00461687  742c                 je 0x4616b5
// 00461689  8da42400000000       lea esp, [esp]
// 00461690  6a00                 push 0
// 00461692  68044e8800           push 0x884e04
// 00461697  684c1f8800           push 0x881f4c
// 0046169c  6a00                 push 0
// 0046169e  56                   push esi
// 0046169f  e892f61c00           call 0x630d36
// 004616a4  83c414               add esp, 0x14
// 004616a7  85c0                 test eax, eax
// 004616a9  750e                 jne 0x4616b9
// 004616ab  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 004616b1  85f6                 test esi, esi
// 004616b3  75db                 jne 0x461690
// 004616b5  33c0                 xor eax, eax
// 004616b7  5e                   pop esi
// 004616b8  c3                   ret 
// 004616b9  8bc8                 mov ecx, eax
// 004616bb  5e                   pop esi
// 004616bc  e93ff6feff           jmp 0x450d00

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* m_child;
};

extern "C" void* __cdecl sub_630D36(RBX_Instance* self, int, void*, void*, int);

extern "C" void* __fastcall sub_450D00(void* self);

RBX_Instance* __cdecl sub_461680(RBX_Instance* inst)
{
    while (inst != 0) {
        void* result = sub_630D36(inst, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (result != 0) {
            return (RBX_Instance*)sub_450D00(result);
        }
        inst = inst->m_child;
    }
    return 0;
}
