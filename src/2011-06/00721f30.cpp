// from server: 100% by atomic.potato
// roc 2011-06 00721f30  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721f30
//
// 00721f30  56                   push esi
// 00721f31  8b742408             mov esi, dword ptr [esp + 8]
// 00721f35  8d81b0000000         lea eax, [ecx + 0xb0]
// 00721f3b  50                   push eax
// 00721f3c  81c1a8000000         add ecx, 0xa8
// 00721f42  51                   push ecx
// 00721f43  56                   push esi
// 00721f44  e837ffffff           call 0x721e80
// 00721f49  83c40c               add esp, 0xc
// 00721f4c  8bc6                 mov eax, esi
// 00721f4e  5e                   pop esi
// 00721f4f  c20400               ret 4

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
