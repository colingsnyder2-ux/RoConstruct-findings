// roc 2012-06 006a3920  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3920
//
// 006a3920  56                   push esi
// 006a3921  8b742408             mov esi, dword ptr [esp + 8]
// 006a3925  57                   push edi
// 006a3926  6a00                 push 0
// 006a3928  6a02                 push 2
// 006a392a  56                   push esi
// 006a392b  e8f0ff1800           call 0x833920
// 006a3930  8bf8                 mov edi, eax
// 006a3932  a1d413de00           mov eax, dword ptr [0xde13d4]
// 006a3937  50                   push eax
// 006a3938  6a01                 push 1
// 006a393a  56                   push esi
// 006a393b  e8d0fe1800           call 0x833810
// 006a3940  56                   push esi
// 006a3941  57                   push edi
// 006a3942  50                   push eax
// 006a3943  e8986d1900           call 0x83a6e0
// 006a3948  83c424               add esp, 0x24
// 006a394b  5f                   pop edi
// 006a394c  33c0                 xor eax, eax
// 006a394e  5e                   pop esi
// 006a394f  c3                   ret 
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
