// from server: 61% by colin
// roc 2007-08 00530de0  unit: RBX::ModelInstance  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530de0
//
// 00530de0  8b8164ffffff         mov eax, dword ptr [ecx - 0x9c]
// 00530de6  56                   push esi
// 00530de7  6a00                 push 0
// 00530de9  68c08f8900           push 0x898fc0
// 00530dee  8db1a8feffff         lea esi, [ecx - 0x158]
// 00530df4  684c1f8800           push 0x881f4c
// 00530df9  6a00                 push 0
// 00530dfb  50                   push eax
// 00530dfc  e835ff0f00           call 0x630d36
// 00530e01  83c414               add esp, 0x14
// 00530e04  85c0                 test eax, eax
// 00530e06  7413                 je 0x530e1b
// 00530e08  57                   push edi
// 00530e09  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 00530e0f  8bce                 mov ecx, esi
// 00530e11  e81af1ffff           call 0x52ff30
// 00530e16  3bc7                 cmp eax, edi
// 00530e18  5f                   pop edi
// 00530e19  7515                 jne 0x530e30
// 00530e1b  803d090e8c0000       cmp byte ptr [0x8c0e09], 0
// 00530e22  740c                 je 0x530e30
// 00530e24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530e28  51                   push ecx
// 00530e29  8bce                 mov ecx, esi
// 00530e2b  e870a10800           call 0x5bafa0
// 00530e30  5e                   pop esi
// 00530e31  c20400               ret 4

struct ModelInstance {
    char pad[0x9c];
    int field_9c;
    char pad2[0xbc - 0x9c - 4];
    int field_bc;
    int sub_52ff30();
    void sub_5bafa0(int);
    void sub_530de0(int);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int, int);
extern unsigned char byte_8c0e09;

void ModelInstance::sub_530de0(int a1) {
    int v = *(int*)((char*)this - 0x9c);
    int r = sub_630d36(v, 0, 0x898fc0, 0x881f4c, 0, 0);
    if (r != 0) {
        int saved = field_bc;
        if (sub_52ff30() != saved) {
            goto check;
        }
    }
    if (byte_8c0e09 == 0) {
        return;
    }
check:
    sub_5bafa0(a1);
}
