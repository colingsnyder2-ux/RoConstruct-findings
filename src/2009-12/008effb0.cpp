// roc 2009-12 008effb0  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008effb0
//
// 008effb0  6aff                 push -1
// 008effb2  687a6a9600           push 0x966a7a
// 008effb7  64a100000000         mov eax, dword ptr fs:[0]
// 008effbd  50                   push eax
// 008effbe  51                   push ecx
// 008effbf  a10052b600           mov eax, dword ptr [0xb65200]
// 008effc4  33c4                 xor eax, esp
// 008effc6  50                   push eax
// 008effc7  8d442408             lea eax, [esp + 8]
// 008effcb  64a300000000         mov dword ptr fs:[0], eax
// 008effd1  6880020000           push 0x280
// 008effd6  e88538f0ff           call 0x7f3860
// 008effdb  83c404               add esp, 4
// 008effde  89442404             mov dword ptr [esp + 4], eax
// 008effe2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008effea  85c0                 test eax, eax
// 008effec  7419                 je 0x8f0007
// 008effee  6a00                 push 0
// 008efff0  8bc8                 mov ecx, eax
// 008efff2  e809f9ffff           call 0x8ef900
// 008efff7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008efffb  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0002  59                   pop ecx
// 008f0003  83c410               add esp, 0x10
// 008f0006  c3                   ret 
// 008f0007  33c0                 xor eax, eax
// 008f0009  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f000d  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0014  59                   pop ecx
// 008f0015  83c410               add esp, 0x10
// 008f0018  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonGroupPopupToolBar@@SGPAVCObject@@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp