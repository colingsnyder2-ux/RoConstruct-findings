// roc 2009-12 0083b190  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b190
//
// 0083b190  6aff                 push -1
// 0083b192  687a6a9600           push 0x966a7a
// 0083b197  64a100000000         mov eax, dword ptr fs:[0]
// 0083b19d  50                   push eax
// 0083b19e  51                   push ecx
// 0083b19f  a10052b600           mov eax, dword ptr [0xb65200]
// 0083b1a4  33c4                 xor eax, esp
// 0083b1a6  50                   push eax
// 0083b1a7  8d442408             lea eax, [esp + 8]
// 0083b1ab  64a300000000         mov dword ptr fs:[0], eax
// 0083b1b1  6884010000           push 0x184
// 0083b1b6  e8a586fbff           call 0x7f3860
// 0083b1bb  83c404               add esp, 4
// 0083b1be  89442404             mov dword ptr [esp + 4], eax
// 0083b1c2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083b1ca  85c0                 test eax, eax
// 0083b1cc  7417                 je 0x83b1e5
// 0083b1ce  8bc8                 mov ecx, eax
// 0083b1d0  e8fbf8ffff           call 0x83aad0
// 0083b1d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083b1d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0083b1e0  59                   pop ecx
// 0083b1e1  83c410               add esp, 0x10
// 0083b1e4  c3                   ret 
// 0083b1e5  33c0                 xor eax, eax
// 0083b1e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083b1eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0083b1f2  59                   pop ecx
// 0083b1f3  83c410               add esp, 0x10
// 0083b1f6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp