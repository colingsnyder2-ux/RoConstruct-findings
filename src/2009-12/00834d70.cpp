// roc 2009-12 00834d70  unit: CXTTreeViewBase  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834d70
//
// 00834d70  6aff                 push -1
// 00834d72  6838c09500           push 0x95c038
// 00834d77  64a100000000         mov eax, dword ptr fs:[0]
// 00834d7d  50                   push eax
// 00834d7e  51                   push ecx
// 00834d7f  56                   push esi
// 00834d80  a10052b600           mov eax, dword ptr [0xb65200]
// 00834d85  33c4                 xor eax, esp
// 00834d87  50                   push eax
// 00834d88  8d44240c             lea eax, [esp + 0xc]
// 00834d8c  64a300000000         mov dword ptr fs:[0], eax
// 00834d92  8bf1                 mov esi, ecx
// 00834d94  89742408             mov dword ptr [esp + 8], esi
// 00834d98  8d4e60               lea ecx, [esi + 0x60]
// 00834d9b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00834da3  e838e5ffff           call 0x8332e0
// 00834da8  8bce                 mov ecx, esi
// 00834daa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00834db2  e8cd190f00           call 0x926784
// 00834db7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00834dbb  64890d00000000       mov dword ptr fs:[0], ecx
// 00834dc2  59                   pop ecx
// 00834dc3  5e                   pop esi
// 00834dc4  83c410               add esp, 0x10
// 00834dc7  c3                   ret 
// copied from an identical function in another client (function ??1CXTTreeViewBase@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp