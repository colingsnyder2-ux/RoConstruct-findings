// roc 2009-12 006a1110  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1110
//
// 006a1110  56                   push esi
// 006a1111  8b742408             mov esi, dword ptr [esp + 8]
// 006a1115  57                   push edi
// 006a1116  6a00                 push 0
// 006a1118  6a02                 push 2
// 006a111a  56                   push esi
// 006a111b  e850960e00           call 0x78a770
// 006a1120  8bf8                 mov edi, eax
// 006a1122  a1502bb600           mov eax, dword ptr [0xb62b50]
// 006a1127  50                   push eax
// 006a1128  6a01                 push 1
// 006a112a  56                   push esi
// 006a112b  e830950e00           call 0x78a660
// 006a1130  56                   push esi
// 006a1131  57                   push edi
// 006a1132  50                   push eax
// 006a1133  e8b8f60e00           call 0x7907f0
// 006a1138  83c424               add esp, 0x24
// 006a113b  5f                   pop edi
// 006a113c  33c0                 xor eax, eax
// 006a113e  5e                   pop esi
// 006a113f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000012@@YAHH@Z)

namespace ns_ROCX000012 {
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
