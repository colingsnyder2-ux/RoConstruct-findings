// roc 2009-12 008388b0  unit: CXTPDockingPaneManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008388b0
//
// 008388b0  6aff                 push -1
// 008388b2  68dac49500           push 0x95c4da
// 008388b7  64a100000000         mov eax, dword ptr fs:[0]
// 008388bd  50                   push eax
// 008388be  51                   push ecx
// 008388bf  a10052b600           mov eax, dword ptr [0xb65200]
// 008388c4  33c4                 xor eax, esp
// 008388c6  50                   push eax
// 008388c7  8d442408             lea eax, [esp + 8]
// 008388cb  64a300000000         mov dword ptr fs:[0], eax
// 008388d1  6a2c                 push 0x2c
// 008388d3  e852db0e00           call 0x92642a
// 008388d8  89442404             mov dword ptr [esp + 4], eax
// 008388dc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008388e4  85c0                 test eax, eax
// 008388e6  7417                 je 0x8388ff
// 008388e8  8bc8                 mov ecx, eax
// 008388ea  e8a1550700           call 0x8ade90
// 008388ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008388f3  64890d00000000       mov dword ptr fs:[0], ecx
// 008388fa  59                   pop ecx
// 008388fb  83c410               add esp, 0x10
// 008388fe  c3                   ret 
// 008388ff  33c0                 xor eax, eax
// 00838901  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00838905  64890d00000000       mov dword ptr fs:[0], ecx
// 0083890c  59                   pop ecx
// 0083890d  83c410               add esp, 0x10
// 00838910  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@?$CProcessLocal@VCXTThemeManager@@@@SGPAVCNoTrackObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp