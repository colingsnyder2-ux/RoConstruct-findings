// roc 2009-12 0085a6c0  unit: CXTThemeManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a6c0
//
// 0085a6c0  6aff                 push -1
// 0085a6c2  687a6a9600           push 0x966a7a
// 0085a6c7  64a100000000         mov eax, dword ptr fs:[0]
// 0085a6cd  50                   push eax
// 0085a6ce  51                   push ecx
// 0085a6cf  a10052b600           mov eax, dword ptr [0xb65200]
// 0085a6d4  33c4                 xor eax, esp
// 0085a6d6  50                   push eax
// 0085a6d7  8d442408             lea eax, [esp + 8]
// 0085a6db  64a300000000         mov dword ptr fs:[0], eax
// 0085a6e1  6a14                 push 0x14
// 0085a6e3  e87891f9ff           call 0x7f3860
// 0085a6e8  83c404               add esp, 4
// 0085a6eb  89442404             mov dword ptr [esp + 4], eax
// 0085a6ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0085a6f7  85c0                 test eax, eax
// 0085a6f9  7417                 je 0x85a712
// 0085a6fb  8bc8                 mov ecx, eax
// 0085a6fd  e89efeffff           call 0x85a5a0
// 0085a702  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085a706  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a70d  59                   pop ecx
// 0085a70e  83c410               add esp, 0x10
// 0085a711  c3                   ret 
// 0085a712  33c0                 xor eax, eax
// 0085a714  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085a718  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a71f  59                   pop ecx
// 0085a720  83c410               add esp, 0x10
// 0085a723  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTThemeManagerStyleFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp