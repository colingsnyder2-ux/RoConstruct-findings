// from server: 50% by colin
// roc 2007-08 00568840  unit: RBX::RootInstance  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00568840
//
// 00568840  56                   push esi
// 00568841  8b742408             mov esi, dword ptr [esp + 8]
// 00568845  85f6                 test esi, esi
// 00568847  742c                 je 0x568875
// 00568849  8da42400000000       lea esp, [esp]
// 00568850  6a00                 push 0
// 00568852  68044e8800           push 0x884e04
// 00568857  684c1f8800           push 0x881f4c
// 0056885c  6a00                 push 0
// 0056885e  56                   push esi
// 0056885f  e8d2840c00           call 0x630d36
// 00568864  83c414               add esp, 0x14
// 00568867  85c0                 test eax, eax
// 00568869  750e                 jne 0x568879
// 0056886b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00568871  85f6                 test esi, esi
// 00568873  75db                 jne 0x568850
// 00568875  33c0                 xor eax, eax
// 00568877  5e                   pop esi
// 00568878  c3                   ret 
// 00568879  8bc8                 mov ecx, eax
// 0056887b  5e                   pop esi
// 0056887c  e99f7df4ff           jmp 0x4b0620

struct RBX_Instance;

extern "C" int __cdecl sub_630d36(RBX_Instance*, int, const char*, const char*, int);

struct RBX_Instance
{
    char pad[0xbc];
    RBX_Instance* m_child;
};

struct RBX_RootInstance
{
    RBX_Instance* findChildByName(const char* name);
};

RBX_Instance* RBX_RootInstance::findChildByName(const char* name)
{
    RBX_Instance* inst = *(RBX_Instance**)((char*)this + 8);
    if (inst == 0)
        return 0;
    for (;;)
    {
        RBX_Instance* found = (RBX_Instance*)sub_630d36(inst, 0, ".?AVInstance@RBX@@", ".?AVServiceProvider@RBX@@", 0);
        if (found != 0)
        {
            extern int __cdecl sub_4b0620(RBX_Instance*);
            return (RBX_Instance*)sub_4b0620(found);
        }
        inst = inst->m_child;
        if (inst == 0)
            return 0;
    }
}
