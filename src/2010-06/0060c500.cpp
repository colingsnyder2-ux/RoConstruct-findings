// roc 2010-06 0060c500  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c500
//
// 0060c500  56                   push esi
// 0060c501  8b742408             mov esi, dword ptr [esp + 8]
// 0060c505  57                   push edi
// 0060c506  6a00                 push 0
// 0060c508  6a02                 push 2
// 0060c50a  56                   push esi
// 0060c50b  e8106a1100           call 0x722f20
// 0060c510  8bf8                 mov edi, eax
// 0060c512  a1b0d8bc00           mov eax, dword ptr [0xbcd8b0]
// 0060c517  50                   push eax
// 0060c518  6a01                 push 1
// 0060c51a  56                   push esi
// 0060c51b  e8f0681100           call 0x722e10
// 0060c520  56                   push esi
// 0060c521  57                   push edi
// 0060c522  50                   push eax
// 0060c523  e878c61100           call 0x728ba0
// 0060c528  83c424               add esp, 0x24
// 0060c52b  5f                   pop edi
// 0060c52c  33c0                 xor eax, eax
// 0060c52e  5e                   pop esi
// 0060c52f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX00000e@@YAHH@Z)

namespace ns_ROCX00000e {
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
