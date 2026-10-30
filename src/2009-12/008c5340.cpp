// roc 2009-12 008c5340  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5340
//
// 008c5340  6aff                 push -1
// 008c5342  687a6a9600           push 0x966a7a
// 008c5347  64a100000000         mov eax, dword ptr fs:[0]
// 008c534d  50                   push eax
// 008c534e  51                   push ecx
// 008c534f  a10052b600           mov eax, dword ptr [0xb65200]
// 008c5354  33c4                 xor eax, esp
// 008c5356  50                   push eax
// 008c5357  8d442408             lea eax, [esp + 8]
// 008c535b  64a300000000         mov dword ptr fs:[0], eax
// 008c5361  684c020000           push 0x24c
// 008c5366  e8f5e4f2ff           call 0x7f3860
// 008c536b  83c404               add esp, 4
// 008c536e  89442404             mov dword ptr [esp + 4], eax
// 008c5372  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008c537a  85c0                 test eax, eax
// 008c537c  7419                 je 0x8c5397
// 008c537e  6a00                 push 0
// 008c5380  8bc8                 mov ecx, eax
// 008c5382  e869fbffff           call 0x8c4ef0
// 008c5387  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c538b  64890d00000000       mov dword ptr fs:[0], ecx
// 008c5392  59                   pop ecx
// 008c5393  83c410               add esp, 0x10
// 008c5396  c3                   ret 
// 008c5397  33c0                 xor eax, eax
// 008c5399  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c539d  64890d00000000       mov dword ptr fs:[0], ecx
// 008c53a4  59                   pop ecx
// 008c53a5  83c410               add esp, 0x10
// 008c53a8  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPCustomizeToolbarsPage@@SGPAVCObject@@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp