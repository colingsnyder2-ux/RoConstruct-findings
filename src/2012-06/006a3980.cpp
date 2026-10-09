// roc 2012-06 006a3980  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3980
//
// 006a3980  56                   push esi
// 006a3981  8b742408             mov esi, dword ptr [esp + 8]
// 006a3985  57                   push edi
// 006a3986  6a00                 push 0
// 006a3988  6a02                 push 2
// 006a398a  56                   push esi
// 006a398b  e890ff1800           call 0x833920
// 006a3990  8bf8                 mov edi, eax
// 006a3992  a1b813de00           mov eax, dword ptr [0xde13b8]
// 006a3997  50                   push eax
// 006a3998  6a01                 push 1
// 006a399a  56                   push esi
// 006a399b  e870fe1800           call 0x833810
// 006a39a0  56                   push esi
// 006a39a1  57                   push edi
// 006a39a2  50                   push eax
// 006a39a3  e8386d1900           call 0x83a6e0
// 006a39a8  83c424               add esp, 0x24
// 006a39ab  5f                   pop edi
// 006a39ac  33c0                 xor eax, eax
// 006a39ae  5e                   pop esi
// 006a39af  c3                   ret 
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
