// roc 2009-12 008f2f90  unit: CXTPDockingPaneAutoHidePanel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2f90
//
// 008f2f90  6aff                 push -1
// 008f2f92  68a86b9600           push 0x966ba8
// 008f2f97  64a100000000         mov eax, dword ptr fs:[0]
// 008f2f9d  50                   push eax
// 008f2f9e  51                   push ecx
// 008f2f9f  56                   push esi
// 008f2fa0  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2fa5  33c4                 xor eax, esp
// 008f2fa7  50                   push eax
// 008f2fa8  8d44240c             lea eax, [esp + 0xc]
// 008f2fac  64a300000000         mov dword ptr fs:[0], eax
// 008f2fb2  8bf1                 mov esi, ecx
// 008f2fb4  89742408             mov dword ptr [esp + 8], esi
// 008f2fb8  c706acf8a000         mov dword ptr [esi], 0xa0f8ac
// 008f2fbe  8d4e38               lea ecx, [esi + 0x38]
// 008f2fc1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f2fc9  e82267f4ff           call 0x8396f0
// 008f2fce  8bce                 mov ecx, esi
// 008f2fd0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008f2fd8  e803d9fbff           call 0x8b08e0
// 008f2fdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f2fe1  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2fe8  59                   pop ecx
// 008f2fe9  5e                   pop esi
// 008f2fea  83c410               add esp, 0x10
// 008f2fed  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneBaseContainer@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBaseContainer.cpp