// roc 2009-12 006a0d40  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0d40
//
// 006a0d40  56                   push esi
// 006a0d41  8b742408             mov esi, dword ptr [esp + 8]
// 006a0d45  57                   push edi
// 006a0d46  6a00                 push 0
// 006a0d48  6a02                 push 2
// 006a0d4a  56                   push esi
// 006a0d4b  e8209a0e00           call 0x78a770
// 006a0d50  8bf8                 mov edi, eax
// 006a0d52  a14c2bb600           mov eax, dword ptr [0xb62b4c]
// 006a0d57  50                   push eax
// 006a0d58  6a01                 push 1
// 006a0d5a  56                   push esi
// 006a0d5b  e800990e00           call 0x78a660
// 006a0d60  56                   push esi
// 006a0d61  57                   push edi
// 006a0d62  50                   push eax
// 006a0d63  e888fa0e00           call 0x7907f0
// 006a0d68  83c424               add esp, 0x24
// 006a0d6b  5f                   pop edi
// 006a0d6c  33c0                 xor eax, eax
// 006a0d6e  5e                   pop esi
// 006a0d6f  c3                   ret 
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
