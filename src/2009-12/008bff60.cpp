// roc 2009-12 008bff60  unit: CXTPDockingPaneContext  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bff60
//
// 008bff60  6aff                 push -1
// 008bff62  68683d9600           push 0x963d68
// 008bff67  64a100000000         mov eax, dword ptr fs:[0]
// 008bff6d  50                   push eax
// 008bff6e  51                   push ecx
// 008bff6f  56                   push esi
// 008bff70  a10052b600           mov eax, dword ptr [0xb65200]
// 008bff75  33c4                 xor eax, esp
// 008bff77  50                   push eax
// 008bff78  8d44240c             lea eax, [esp + 0xc]
// 008bff7c  64a300000000         mov dword ptr fs:[0], eax
// 008bff82  8bf1                 mov esi, ecx
// 008bff84  89742408             mov dword ptr [esp + 8], esi
// 008bff88  8d4e54               lea ecx, [esi + 0x54]
// 008bff8b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008bff93  e81805fbff           call 0x8704b0
// 008bff98  8bce                 mov ecx, esi
// 008bff9a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008bffa2  e86f43f3ff           call 0x7f4316
// 008bffa7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bffab  64890d00000000       mov dword ptr fs:[0], ecx
// 008bffb2  59                   pop ecx
// 008bffb3  5e                   pop esi
// 008bffb4  83c410               add esp, 0x10
// 008bffb7  c3                   ret 
// copied from an identical function in another client (function ??1CXTTreeCtrlBase@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp