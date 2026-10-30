// roc 2009-12 008aabf0  unit: CXTPDockingPaneAutoHideWnd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aabf0
//
// 008aabf0  6aff                 push -1
// 008aabf2  68c8299600           push 0x9629c8
// 008aabf7  64a100000000         mov eax, dword ptr fs:[0]
// 008aabfd  50                   push eax
// 008aabfe  51                   push ecx
// 008aabff  56                   push esi
// 008aac00  a10052b600           mov eax, dword ptr [0xb65200]
// 008aac05  33c4                 xor eax, esp
// 008aac07  50                   push eax
// 008aac08  8d44240c             lea eax, [esp + 0xc]
// 008aac0c  64a300000000         mov dword ptr fs:[0], eax
// 008aac12  8bf1                 mov esi, ecx
// 008aac14  89742408             mov dword ptr [esp + 8], esi
// 008aac18  e813450200           call 0x8cf130
// 008aac1d  6a00                 push 0
// 008aac1f  8bce                 mov ecx, esi
// 008aac21  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008aac29  c7065c65a000         mov dword ptr [esi], 0xa0655c
// 008aac2f  e88c470200           call 0x8cf3c0
// 008aac34  6a01                 push 1
// 008aac36  8bce                 mov ecx, esi
// 008aac38  c7400800000000       mov dword ptr [eax + 8], 0
// 008aac3f  e87c470200           call 0x8cf3c0
// 008aac44  c7400800000000       mov dword ptr [eax + 8], 0
// 008aac4b  8bc6                 mov eax, esi
// 008aac4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008aac51  64890d00000000       mov dword ptr fs:[0], ecx
// 008aac58  59                   pop ecx
// 008aac59  5e                   pop esi
// 008aac5a  83c410               add esp, 0x10
// 008aac5d  c3                   ret 
// copied from an identical function in another client (function ??0CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp