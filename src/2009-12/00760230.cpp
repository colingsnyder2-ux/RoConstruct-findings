// roc 2009-12 00760230  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00760230
//
// 00760230  56                   push esi
// 00760231  8b742408             mov esi, dword ptr [esp + 8]
// 00760235  8d81b0000000         lea eax, [ecx + 0xb0]
// 0076023b  50                   push eax
// 0076023c  81c1a8000000         add ecx, 0xa8
// 00760242  51                   push ecx
// 00760243  56                   push esi
// 00760244  e837ffffff           call 0x760180
// 00760249  83c40c               add esp, 0xc
// 0076024c  8bc6                 mov eax, esi
// 0076024e  5e                   pop esi
// 0076024f  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S
{
    int f(int);
};

extern "C" void __cdecl sub_721e80(int, void *, void *);

int S::f(int a)
{
    sub_721e80(a, (char *)this + 0xa8, (char *)this + 0xb0);
    return a;
}