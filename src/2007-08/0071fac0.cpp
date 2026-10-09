// from server: 28% by colin
// roc 2007-08 0071fac0  unit: CXTPDockingPaneAutoHidePanel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fac0
//
// 0071fac0  6aff                 push -1
// 0071fac2  6808b47600           push 0x76b408
// 0071fac7  64a100000000         mov eax, dword ptr fs:[0]
// 0071facd  50                   push eax
// 0071face  51                   push ecx
// 0071facf  56                   push esi
// 0071fad0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0071fad5  33c4                 xor eax, esp
// 0071fad7  50                   push eax
// 0071fad8  8d44240c             lea eax, [esp + 0xc]
// 0071fadc  64a300000000         mov dword ptr fs:[0], eax
// 0071fae2  8bf1                 mov esi, ecx
// 0071fae4  89742408             mov dword ptr [esp + 8], esi
// 0071fae8  c7061c217e00         mov dword ptr [esi], 0x7e211c
// 0071faee  8d4e38               lea ecx, [esi + 0x38]
// 0071faf1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0071faf9  e842f6f4ff           call 0x66f140
// 0071fafe  8bce                 mov ecx, esi
// 0071fb00  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0071fb08  e8d30afcff           call 0x6e05e0
// 0071fb0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071fb11  64890d00000000       mov dword ptr fs:[0], ecx
// 0071fb18  59                   pop ecx
// 0071fb19  5e                   pop esi
// 0071fb1a  83c410               add esp, 0x10
// 0071fb1d  c3                   ret 

struct CXTPDockingPaneAutoHidePanel {
    void dtor();
};

extern "C" void __stdcall sub_66f140(void*);
extern "C" void __stdcall sub_6e05e0(void*);

void CXTPDockingPaneAutoHidePanel::dtor()
{
    *(void**)this = (void*)0x7e211c;
    sub_66f140((char*)this + 0x38);
    sub_6e05e0(this);
}
