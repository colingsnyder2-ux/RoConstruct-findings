// roc 2009-12 008a88c0  unit: UXTP_DOCKINGPANE_INFO::?$CList  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a88c0
//
// 008a88c0  6aff                 push -1
// 008a88c2  683e289600           push 0x96283e
// 008a88c7  64a100000000         mov eax, dword ptr fs:[0]
// 008a88cd  50                   push eax
// 008a88ce  51                   push ecx
// 008a88cf  56                   push esi
// 008a88d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a88d5  33c4                 xor eax, esp
// 008a88d7  50                   push eax
// 008a88d8  8d44240c             lea eax, [esp + 0xc]
// 008a88dc  64a300000000         mov dword ptr fs:[0], eax
// 008a88e2  8bf1                 mov esi, ecx
// 008a88e4  89742408             mov dword ptr [esp + 8], esi
// 008a88e8  c7064463a000         mov dword ptr [esi], 0xa06344
// 008a88ee  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008a88f6  e865fcffff           call 0x8a8560
// 008a88fb  8d4e44               lea ecx, [esi + 0x44]
// 008a88fe  c644241401           mov byte ptr [esp + 0x14], 1
// 008a8903  e8e80df9ff           call 0x8396f0
// 008a8908  8d4e28               lea ecx, [esi + 0x28]
// 008a890b  c644241400           mov byte ptr [esp + 0x14], 0
// 008a8910  e82bfaffff           call 0x8a8340
// 008a8915  8bce                 mov ecx, esi
// 008a8917  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a891f  e8bebaf4ff           call 0x7f43e2
// 008a8924  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a8928  64890d00000000       mov dword ptr fs:[0], ecx
// 008a892f  59                   pop ecx
// 008a8930  5e                   pop esi
// 008a8931  83c410               add esp, 0x10
// 008a8934  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneLayout@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp