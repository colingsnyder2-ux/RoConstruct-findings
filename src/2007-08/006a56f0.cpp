// from server: 63% by colin
// roc 2007-08 006a56f0  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a56f0
//
// 006a56f0  51                   push ecx
// 006a56f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a56f5  56                   push esi
// 006a56f6  51                   push ecx
// 006a56f7  8bf1                 mov esi, ecx
// 006a56f9  8bcc                 mov ecx, esp
// 006a56fb  89642408             mov dword ptr [esp + 8], esp
// 006a56ff  50                   push eax
// 006a5700  ff15b8dd7700         call dword ptr [0x77ddb8]
// 006a5706  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a570a  51                   push ecx
// 006a570b  8bce                 mov ecx, esi
// 006a570d  e82efeffff           call 0x6a5540
// 006a5712  5e                   pop esi
// 006a5713  59                   pop ecx
// 006a5714  c20800               ret 8

struct S {
    int f(int, int);
    int g(int);
};

extern "C" void __stdcall helper(void*, void*);

int S::f(int a, int b) {
    helper(&a, &b);
    return this->g(a);
}
