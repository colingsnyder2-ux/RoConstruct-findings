// roc 2010-06 006e6cf0  unit: RBX::VBillboardGui::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6cf0
//
// 006e6cf0  56                   push esi
// 006e6cf1  8b742408             mov esi, dword ptr [esp + 8]
// 006e6cf5  8d81b0000000         lea eax, [ecx + 0xb0]
// 006e6cfb  50                   push eax
// 006e6cfc  81c1a8000000         add ecx, 0xa8
// 006e6d02  51                   push ecx
// 006e6d03  56                   push esi
// 006e6d04  e837ffffff           call 0x6e6c40
// 006e6d09  83c40c               add esp, 0xc
// 006e6d0c  8bc6                 mov eax, esi
// 006e6d0e  5e                   pop esi
// 006e6d0f  c20400               ret 4
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