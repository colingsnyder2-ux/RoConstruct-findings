// from server: 34% by colin
// roc 2007-08 006a7940  unit: CXTPRibbonBarControlQuickAccessPopup  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7940
//
// 006a7940  6aff                 push -1
// 006a7942  68184b7600           push 0x764b18
// 006a7947  64a100000000         mov eax, dword ptr fs:[0]
// 006a794d  50                   push eax
// 006a794e  51                   push ecx
// 006a794f  56                   push esi
// 006a7950  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a7955  33c4                 xor eax, esp
// 006a7957  50                   push eax
// 006a7958  8d44240c             lea eax, [esp + 0xc]
// 006a795c  64a300000000         mov dword ptr fs:[0], eax
// 006a7962  8bf1                 mov esi, ecx
// 006a7964  89742408             mov dword ptr [esp + 8], esi
// 006a7968  e8938bfcff           call 0x670500
// 006a796d  6a18                 push 0x18
// 006a796f  8bce                 mov ecx, esi
// 006a7971  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a7979  c706644d7d00         mov dword ptr [esi], 0x7d4d64
// 006a797f  c74620044d7d00       mov dword ptr [esi + 0x20], 0x7d4d04
// 006a7986  e89527f9ff           call 0x63a120
// 006a798b  8bc6                 mov eax, esi
// 006a798d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a7991  64890d00000000       mov dword ptr fs:[0], ecx
// 006a7998  59                   pop ecx
// 006a7999  5e                   pop esi
// 006a799a  83c410               add esp, 0x10
// 006a799d  c3                   ret 

struct CXTPRibbonBarControlQuickAccessPopup
{
    void Construct();
};

extern void G1_func_00670500();
extern void G1_func_0063a120();

void CXTPRibbonBarControlQuickAccessPopup::Construct()
{
    G1_func_00670500();
    *(void**)this = (void*)0x7d4d64;
    *(void**)((char*)this + 0x20) = (void*)0x7d4d04;
    G1_func_0063a120();
}
