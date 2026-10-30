// roc 2009-12 008c4a50  unit: CXTPCustomizeToolbarsPage  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4a50
//
// 008c4a50  6aff                 push -1
// 008c4a52  6848439600           push 0x964348
// 008c4a57  64a100000000         mov eax, dword ptr fs:[0]
// 008c4a5d  50                   push eax
// 008c4a5e  51                   push ecx
// 008c4a5f  56                   push esi
// 008c4a60  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4a65  33c4                 xor eax, esp
// 008c4a67  50                   push eax
// 008c4a68  8d44240c             lea eax, [esp + 0xc]
// 008c4a6c  64a300000000         mov dword ptr fs:[0], eax
// 008c4a72  8bf1                 mov esi, ecx
// 008c4a74  89742408             mov dword ptr [esp + 8], esi
// 008c4a78  c706bc94a000         mov dword ptr [esi], 0xa094bc
// 008c4a7e  8d4e5c               lea ecx, [esi + 0x5c]
// 008c4a81  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008c4a89  e88276faff           call 0x86c110
// 008c4a8e  8bce                 mov ecx, esi
// 008c4a90  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008c4a98  e8671e0600           call 0x926904
// 008c4a9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c4aa1  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4aa8  59                   pop ecx
// 008c4aa9  5e                   pop esi
// 008c4aaa  83c410               add esp, 0x10
// 008c4aad  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCustomizeToolbarsPageCheckListBox@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp