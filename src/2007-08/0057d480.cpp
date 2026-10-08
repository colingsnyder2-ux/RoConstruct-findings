// from server: 74% by colin
// roc 2007-08 0057d480  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d480
//
// 0057d480  56                   push esi
// 0057d481  8b742408             mov esi, dword ptr [esp + 8]
// 0057d485  85f6                 test esi, esi
// 0057d487  742c                 je 0x57d4b5
// 0057d489  8da42400000000       lea esp, [esp]
// 0057d490  6a00                 push 0
// 0057d492  68044e8800           push 0x884e04
// 0057d497  684c1f8800           push 0x881f4c
// 0057d49c  6a00                 push 0
// 0057d49e  56                   push esi
// 0057d49f  e892380b00           call 0x630d36
// 0057d4a4  83c414               add esp, 0x14
// 0057d4a7  85c0                 test eax, eax
// 0057d4a9  750e                 jne 0x57d4b9
// 0057d4ab  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0057d4b1  85f6                 test esi, esi
// 0057d4b3  75db                 jne 0x57d490
// 0057d4b5  33c0                 xor eax, eax
// 0057d4b7  5e                   pop esi
// 0057d4b8  c3                   ret 
// 0057d4b9  8bc8                 mov ecx, eax
// 0057d4bb  5e                   pop esi
// 0057d4bc  e9afcdedff           jmp 0x45a270

struct RBX_Instance;
struct RBX_ServiceProvider;

struct RBX_ICreator {
    virtual void f0();
    virtual void f1();
};

struct RBX_Creator : RBX_ICreator {
    RBX_Instance* findInstance(RBX_ServiceProvider* sp);
};

extern "C" RBX_Instance* __cdecl sub_00630d36(
    RBX_ServiceProvider* a1,
    int a2,
    const char* a3,
    const char* a4,
    int a5);

extern "C" void __cdecl sub_0045a270(RBX_Instance* a1);

RBX_Instance* RBX_Creator::findInstance(RBX_ServiceProvider* sp)
{
    RBX_Instance* result;
    while (sp != 0) {
        result = sub_00630d36(sp, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0) {
            sub_0045a270(result);
            return result;
        }
        sp = *(RBX_ServiceProvider**)((char*)sp + 0xbc);
    }
    return 0;
}
