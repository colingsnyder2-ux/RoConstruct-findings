// roc 2009-12 00811770  unit: CXTPToolBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811770
//
// 00811770  6aff                 push -1
// 00811772  687a6a9600           push 0x966a7a
// 00811777  64a100000000         mov eax, dword ptr fs:[0]
// 0081177d  50                   push eax
// 0081177e  51                   push ecx
// 0081177f  a10052b600           mov eax, dword ptr [0xb65200]
// 00811784  33c4                 xor eax, esp
// 00811786  50                   push eax
// 00811787  8d442408             lea eax, [esp + 8]
// 0081178b  64a300000000         mov dword ptr fs:[0], eax
// 00811791  68a8010000           push 0x1a8
// 00811796  e8c520feff           call 0x7f3860
// 0081179b  83c404               add esp, 4
// 0081179e  89442404             mov dword ptr [esp + 4], eax
// 008117a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008117aa  85c0                 test eax, eax
// 008117ac  7417                 je 0x8117c5
// 008117ae  8bc8                 mov ecx, eax
// 008117b0  e81bfcffff           call 0x8113d0
// 008117b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008117b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008117c0  59                   pop ecx
// 008117c1  83c410               add esp, 0x10
// 008117c4  c3                   ret 
// 008117c5  33c0                 xor eax, eax
// 008117c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008117cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008117d2  59                   pop ecx
// 008117d3  83c410               add esp, 0x10
// 008117d6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPToolBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp