// roc 2011-06 00619680  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619680
//
// 00619680  56                   push esi
// 00619681  8b742408             mov esi, dword ptr [esp + 8]
// 00619685  57                   push edi
// 00619686  6a00                 push 0
// 00619688  6a02                 push 2
// 0061968a  56                   push esi
// 0061968b  e800ab1400           call 0x764190
// 00619690  8bf8                 mov edi, eax
// 00619692  a160d5c400           mov eax, dword ptr [0xc4d560]
// 00619697  50                   push eax
// 00619698  6a01                 push 1
// 0061969a  56                   push esi
// 0061969b  e8e0a91400           call 0x764080
// 006196a0  56                   push esi
// 006196a1  57                   push edi
// 006196a2  50                   push eax
// 006196a3  e878150100           call 0x62ac20
// 006196a8  83c424               add esp, 0x24
// 006196ab  5f                   pop edi
// 006196ac  33c0                 xor eax, eax
// 006196ae  5e                   pop esi
// 006196af  c3                   ret 
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
