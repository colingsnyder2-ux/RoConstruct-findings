// from server: 48% by colin
// roc 2007-08 006a5540  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5540
//
// 006a5540  6aff                 push -1
// 006a5542  6889477600           push 0x764789
// 006a5547  64a100000000         mov eax, dword ptr fs:[0]
// 006a554d  50                   push eax
// 006a554e  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a5553  33c4                 xor eax, esp
// 006a5555  50                   push eax
// 006a5556  8d442404             lea eax, [esp + 4]
// 006a555a  64a300000000         mov dword ptr fs:[0], eax
// 006a5560  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a5564  8d442418             lea eax, [esp + 0x18]
// 006a5568  50                   push eax
// 006a5569  52                   push edx
// 006a556a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a5572  e859ffffff           call 0x6a54d0
// 006a5577  8bc8                 mov ecx, eax
// 006a5579  ff1534d47700         call dword ptr [0x77d434]
// 006a557f  8d4c2418             lea ecx, [esp + 0x18]
// 006a5583  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006a5589  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a558d  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5594  59                   pop ecx
// 006a5595  83c40c               add esp, 0xc
// 006a5598  c20800               ret 8

extern "C" int __stdcall sub_6A54D0(int, int);

extern "C" int (__stdcall *off_77D434)(int);
extern "C" void (__stdcall *off_77DDBC)(int);

struct S {
    void f(int, int);
};

void S::f(int a, int b)
{
    int local = 0;
    int result = sub_6A54D0(a, (int)&local);
    off_77D434(result);
    off_77DDBC((int)&local);
}
