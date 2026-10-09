// roc 2012-06 006a2620  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2620
//
// 006a2620  56                   push esi
// 006a2621  8b742408             mov esi, dword ptr [esp + 8]
// 006a2625  57                   push edi
// 006a2626  6a00                 push 0
// 006a2628  6a02                 push 2
// 006a262a  56                   push esi
// 006a262b  e8f0121900           call 0x833920
// 006a2630  8bf8                 mov edi, eax
// 006a2632  a1fc13de00           mov eax, dword ptr [0xde13fc]
// 006a2637  50                   push eax
// 006a2638  6a01                 push 1
// 006a263a  56                   push esi
// 006a263b  e8d0111900           call 0x833810
// 006a2640  56                   push esi
// 006a2641  57                   push edi
// 006a2642  50                   push eax
// 006a2643  e8b8ee1900           call 0x841500
// 006a2648  83c424               add esp, 0x24
// 006a264b  5f                   pop edi
// 006a264c  33c0                 xor eax, eax
// 006a264e  5e                   pop esi
// 006a264f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000005@@YAHH@Z)

namespace ns_ROCX000005 {
extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE80;

int __cdecl sub_535140(int a)
{
    int v1 = sub_5BF350(a, 2, 0);
    int v2 = sub_5BF240(a, 1, dword_8ABE80);
    sub_56C740(v2, v1, a);
    return 0;
}
}
