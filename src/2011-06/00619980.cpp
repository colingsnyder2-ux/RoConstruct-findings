// roc 2011-06 00619980  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619980
//
// 00619980  56                   push esi
// 00619981  8b742408             mov esi, dword ptr [esp + 8]
// 00619985  57                   push edi
// 00619986  6a00                 push 0
// 00619988  6a02                 push 2
// 0061998a  56                   push esi
// 0061998b  e800a81400           call 0x764190
// 00619990  8bf8                 mov edi, eax
// 00619992  a1c0efc800           mov eax, dword ptr [0xc8efc0]
// 00619997  50                   push eax
// 00619998  6a01                 push 1
// 0061999a  56                   push esi
// 0061999b  e8e0a61400           call 0x764080
// 006199a0  56                   push esi
// 006199a1  57                   push edi
// 006199a2  50                   push eax
// 006199a3  e878120100           call 0x62ac20
// 006199a8  83c424               add esp, 0x24
// 006199ab  5f                   pop edi
// 006199ac  33c0                 xor eax, eax
// 006199ae  5e                   pop esi
// 006199af  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000008@@YAHH@Z)

namespace ns_ROCX000008 {
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
