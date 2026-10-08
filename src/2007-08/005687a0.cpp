// from server: 42% by colin
// roc 2007-08 005687a0  unit: RBX::RootInstance  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005687a0
//
// 005687a0  56                   push esi
// 005687a1  8b742408             mov esi, dword ptr [esp + 8]
// 005687a5  85f6                 test esi, esi
// 005687a7  742c                 je 0x5687d5
// 005687a9  8da42400000000       lea esp, [esp]
// 005687b0  6a00                 push 0
// 005687b2  68044e8800           push 0x884e04
// 005687b7  684c1f8800           push 0x881f4c
// 005687bc  6a00                 push 0
// 005687be  56                   push esi
// 005687bf  e872850c00           call 0x630d36
// 005687c4  83c414               add esp, 0x14
// 005687c7  85c0                 test eax, eax
// 005687c9  750e                 jne 0x5687d9
// 005687cb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005687d1  85f6                 test esi, esi
// 005687d3  75db                 jne 0x5687b0
// 005687d5  33c0                 xor eax, eax
// 005687d7  5e                   pop esi
// 005687d8  c3                   ret 
// 005687d9  8bc8                 mov ecx, eax
// 005687db  5e                   pop esi
// 005687dc  e93f7ff4ff           jmp 0x4b0720

struct RBX_Instance
{
    char pad[0xbc];
    RBX_Instance* parent;
};

extern "C" void* __stdcall sub_00630d36(RBX_Instance* instance, int, const char*, const char*, int);
extern "C" void sub_004b0720();

void* __stdcall func_005687a0(RBX_Instance* inst)
{
    if (inst != 0)
        return 0;
    while (true)
    {
        void* result = sub_00630d36(inst, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0)
        {
            sub_004b0720();
            return result;
        }
        inst = inst->parent;
        if (inst == 0)
            return 0;
    }
}
