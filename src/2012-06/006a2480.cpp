// roc 2012-06 006a2480  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2480
//
// 006a2480  56                   push esi
// 006a2481  8b742408             mov esi, dword ptr [esp + 8]
// 006a2485  57                   push edi
// 006a2486  6a00                 push 0
// 006a2488  6a02                 push 2
// 006a248a  56                   push esi
// 006a248b  e890141900           call 0x833920
// 006a2490  8bf8                 mov edi, eax
// 006a2492  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 006a2497  50                   push eax
// 006a2498  6a01                 push 1
// 006a249a  56                   push esi
// 006a249b  e870131900           call 0x833810
// 006a24a0  56                   push esi
// 006a24a1  57                   push edi
// 006a24a2  50                   push eax
// 006a24a3  e898761900           call 0x839b40
// 006a24a8  83c424               add esp, 0x24
// 006a24ab  5f                   pop edi
// 006a24ac  33c0                 xor eax, eax
// 006a24ae  5e                   pop esi
// 006a24af  c3                   ret 
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
