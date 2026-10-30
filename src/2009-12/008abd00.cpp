// roc 2009-12 008abd00  unit: CXTPDockingPaneAutoHidePanel  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abd00
//
// 008abd00  6aff                 push -1
// 008abd02  6803e49500           push 0x95e403
// 008abd07  64a100000000         mov eax, dword ptr fs:[0]
// 008abd0d  50                   push eax
// 008abd0e  81ec88000000         sub esp, 0x88
// 008abd14  a10052b600           mov eax, dword ptr [0xb65200]
// 008abd19  33c4                 xor eax, esp
// 008abd1b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008abd22  56                   push esi
// 008abd23  a10052b600           mov eax, dword ptr [0xb65200]
// 008abd28  33c4                 xor eax, esp
// 008abd2a  50                   push eax
// 008abd2b  8d842490000000       lea eax, [esp + 0x90]
// 008abd32  64a300000000         mov dword ptr fs:[0], eax
// 008abd38  8bf1                 mov esi, ecx
// 008abd3a  56                   push esi
// 008abd3b  8d4c243c             lea ecx, [esp + 0x3c]
// 008abd3f  e8ac84f4ff           call 0x7f41f0
// 008abd44  8d442438             lea eax, [esp + 0x38]
// 008abd48  50                   push eax
// 008abd49  8d4c240c             lea ecx, [esp + 0xc]
// 008abd4d  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008abd58  e8a3f6f9ff           call 0x84b400
// 008abd5d  8d4c2408             lea ecx, [esp + 8]
// 008abd61  51                   push ecx
// 008abd62  8bce                 mov ecx, esi
// 008abd64  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008abd6c  e8fff0ffff           call 0x8aae70
// 008abd71  8d4c2408             lea ecx, [esp + 8]
// 008abd75  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008abd7d  e8bef7f9ff           call 0x84b540
// 008abd82  8d4c2438             lea ecx, [esp + 0x38]
// 008abd86  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 008abd91  e85484f4ff           call 0x7f41ea
// 008abd96  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008abd9d  64890d00000000       mov dword ptr fs:[0], ecx
// 008abda4  59                   pop ecx
// 008abda5  5e                   pop esi
// 008abda6  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008abdad  33cc                 xor ecx, esp
// 008abdaf  e8e695f4ff           call 0x7f539a
// 008abdb4  81c494000000         add esp, 0x94
// 008abdba  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneAutoHidePanel@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp