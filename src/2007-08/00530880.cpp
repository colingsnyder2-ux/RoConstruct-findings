// from server: 90% by colin
// roc 2007-08 00530880  unit: RBX::VModelInstance::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530880
//
// 00530880  56                   push esi
// 00530881  6a00                 push 0
// 00530883  68c08f8900           push 0x898fc0
// 00530888  8bf1                 mov esi, ecx
// 0053088a  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00530890  684c1f8800           push 0x881f4c
// 00530895  6a00                 push 0
// 00530897  50                   push eax
// 00530898  e899041000           call 0x630d36
// 0053089d  83c414               add esp, 0x14
// 005308a0  85c0                 test eax, eax
// 005308a2  7417                 je 0x5308bb
// 005308a4  57                   push edi
// 005308a5  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 005308ab  8bce                 mov ecx, esi
// 005308ad  e87ef6ffff           call 0x52ff30
// 005308b2  3bc7                 cmp eax, edi
// 005308b4  5f                   pop edi
// 005308b5  7404                 je 0x5308bb
// 005308b7  33c0                 xor eax, eax
// 005308b9  5e                   pop esi
// 005308ba  c3                   ret 
// 005308bb  b801000000           mov eax, 1
// 005308c0  5e                   pop esi
// 005308c1  c3                   ret 

struct S {
    int f();
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_52FF30();

int S::f() {
    int v = sub_630D36(*(int*)((char*)this + 0xbc), 0, 0x881f4c, 0x898fc0, 0);
    if (v != 0) {
        int t = *(int*)((char*)this + 0xbc);
        int r = sub_52FF30();
        if (r != t) {
            return 0;
        }
    }
    return 1;
}
