// from server: 100% by tester
// roc 2011-06 004f1730  unit: RBX::Network::IdSerializer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f1730
//
// 004f1730  56                   push esi
// 004f1731  8b742408             mov esi, dword ptr [esp + 8]
// 004f1735  57                   push edi
// 004f1736  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f173a  57                   push edi
// 004f173b  56                   push esi
// 004f173c  e84fffffff           call 0x4f1690
// 004f1741  83c708               add edi, 8
// 004f1744  57                   push edi
// 004f1745  56                   push esi
// 004f1746  e845ffffff           call 0x4f1690
// 004f174b  83c410               add esp, 0x10
// 004f174e  5f                   pop edi
// 004f174f  8bc6                 mov eax, esi
// 004f1751  5e                   pop esi
// 004f1752  c3                   ret 

typedef char Vec;
extern "C" void __cdecl sub_4e15b0(Vec *, Vec *);

Vec *sub_4e1650(Vec *a, Vec *b)
{
    sub_4e15b0(a, b);
    sub_4e15b0(a, b + 8);
    return a;
}
