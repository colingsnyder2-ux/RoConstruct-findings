// roc 2009-12 0087a340  unit: CXTPControlComboBoxGalleryPopupBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087a340
//
// 0087a340  6aff                 push -1
// 0087a342  687a6a9600           push 0x966a7a
// 0087a347  64a100000000         mov eax, dword ptr fs:[0]
// 0087a34d  50                   push eax
// 0087a34e  51                   push ecx
// 0087a34f  a10052b600           mov eax, dword ptr [0xb65200]
// 0087a354  33c4                 xor eax, esp
// 0087a356  50                   push eax
// 0087a357  8d442408             lea eax, [esp + 8]
// 0087a35b  64a300000000         mov dword ptr fs:[0], eax
// 0087a361  6860020000           push 0x260
// 0087a366  e8f594f7ff           call 0x7f3860
// 0087a36b  83c404               add esp, 4
// 0087a36e  89442404             mov dword ptr [esp + 4], eax
// 0087a372  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0087a37a  85c0                 test eax, eax
// 0087a37c  7417                 je 0x87a395
// 0087a37e  8bc8                 mov ecx, eax
// 0087a380  e89bdbffff           call 0x877f20
// 0087a385  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087a389  64890d00000000       mov dword ptr fs:[0], ecx
// 0087a390  59                   pop ecx
// 0087a391  83c410               add esp, 0x10
// 0087a394  c3                   ret 
// 0087a395  33c0                 xor eax, eax
// 0087a397  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087a39b  64890d00000000       mov dword ptr fs:[0], ecx
// 0087a3a2  59                   pop ecx
// 0087a3a3  83c410               add esp, 0x10
// 0087a3a6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxList@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp