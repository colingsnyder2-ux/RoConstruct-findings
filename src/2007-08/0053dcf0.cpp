// from server: 84% by colin
// roc 2007-08 0053dcf0  unit: RBX::VScript::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053dcf0
//
// 0053dcf0  56                   push esi
// 0053dcf1  8b742408             mov esi, dword ptr [esp + 8]
// 0053dcf5  85f6                 test esi, esi
// 0053dcf7  742c                 je 0x53dd25
// 0053dcf9  8da42400000000       lea esp, [esp]
// 0053dd00  6a00                 push 0
// 0053dd02  68044e8800           push 0x884e04
// 0053dd07  684c1f8800           push 0x881f4c
// 0053dd0c  6a00                 push 0
// 0053dd0e  56                   push esi
// 0053dd0f  e822300f00           call 0x630d36
// 0053dd14  83c414               add esp, 0x14
// 0053dd17  85c0                 test eax, eax
// 0053dd19  750e                 jne 0x53dd29
// 0053dd1b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0053dd21  85f6                 test esi, esi
// 0053dd23  75db                 jne 0x53dd00
// 0053dd25  33c0                 xor eax, eax
// 0053dd27  5e                   pop esi
// 0053dd28  c3                   ret 
// 0053dd29  8bc8                 mov ecx, eax
// 0053dd2b  5e                   pop esi
// 0053dd2c  e9df06efff           jmp 0x42e410

struct RBX_Instance;

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* next;
};

extern "C" int __stdcall sub_630D36(RBX_Instance* p, int a, const char* b, const char* c, int d);
extern "C" void __fastcall sub_42E410(RBX_Instance* p);

RBX_Instance* findInstance(RBX_Instance* p) {
    while (p) {
        int r = sub_630D36(p, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (r == 0) {
            sub_42E410((RBX_Instance*)r);
            return (RBX_Instance*)r;
        }
        p = p->next;
    }
    return 0;
}
