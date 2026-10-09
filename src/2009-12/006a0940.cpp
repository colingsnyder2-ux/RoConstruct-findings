// roc 2009-12 006a0940  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0940
//
// 006a0940  56                   push esi
// 006a0941  8b742408             mov esi, dword ptr [esp + 8]
// 006a0945  57                   push edi
// 006a0946  6a00                 push 0
// 006a0948  6a02                 push 2
// 006a094a  56                   push esi
// 006a094b  e8209e0e00           call 0x78a770
// 006a0950  8bf8                 mov edi, eax
// 006a0952  a1842bb600           mov eax, dword ptr [0xb62b84]
// 006a0957  50                   push eax
// 006a0958  6a01                 push 1
// 006a095a  56                   push esi
// 006a095b  e8009d0e00           call 0x78a660
// 006a0960  56                   push esi
// 006a0961  57                   push edi
// 006a0962  50                   push eax
// 006a0963  e888fe0e00           call 0x7907f0
// 006a0968  83c424               add esp, 0x24
// 006a096b  5f                   pop edi
// 006a096c  33c0                 xor eax, eax
// 006a096e  5e                   pop esi
// 006a096f  c3                   ret 
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
