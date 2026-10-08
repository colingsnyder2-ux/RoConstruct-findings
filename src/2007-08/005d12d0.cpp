// from server: 49% by colin
// roc 2007-08 005d12d0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d12d0
//
// 005d12d0  56                   push esi
// 005d12d1  8b742408             mov esi, dword ptr [esp + 8]
// 005d12d5  85f6                 test esi, esi
// 005d12d7  742c                 je 0x5d1305
// 005d12d9  8da42400000000       lea esp, [esp]
// 005d12e0  6a00                 push 0
// 005d12e2  68044e8800           push 0x884e04
// 005d12e7  684c1f8800           push 0x881f4c
// 005d12ec  6a00                 push 0
// 005d12ee  56                   push esi
// 005d12ef  e842fa0500           call 0x630d36
// 005d12f4  83c414               add esp, 0x14
// 005d12f7  85c0                 test eax, eax
// 005d12f9  750e                 jne 0x5d1309
// 005d12fb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005d1301  85f6                 test esi, esi
// 005d1303  75db                 jne 0x5d12e0
// 005d1305  33c0                 xor eax, eax
// 005d1307  5e                   pop esi
// 005d1308  c3                   ret 
// 005d1309  8bc8                 mov ecx, eax
// 005d130b  5e                   pop esi
// 005d130c  e93fd4e3ff           jmp 0x40e750

struct S {
    int f(int);
};

extern "C" int __cdecl sub_00630d36(int, int, int, int, int);
extern "C" int __cdecl sub_0040e750();

int S::f(int v)
{
    if (v == 0)
        return 0;
    for (;;)
    {
        int r = sub_00630d36(v, 0, 0x881f4c, 0x884e04, 0);
        if (r != 0)
        {
            return sub_0040e750();
        }
        v = *(int*)((char*)v + 0xbc);
        if (v == 0)
            return 0;
    }
}
