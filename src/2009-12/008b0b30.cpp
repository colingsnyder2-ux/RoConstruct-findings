// roc 2009-12 008b0b30  unit: CXTPDockingPaneClientContainer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0b30
//
// 008b0b30  6aff                 push -1
// 008b0b32  6838b89500           push 0x95b838
// 008b0b37  64a100000000         mov eax, dword ptr fs:[0]
// 008b0b3d  50                   push eax
// 008b0b3e  51                   push ecx
// 008b0b3f  56                   push esi
// 008b0b40  a10052b600           mov eax, dword ptr [0xb65200]
// 008b0b45  33c4                 xor eax, esp
// 008b0b47  50                   push eax
// 008b0b48  8d44240c             lea eax, [esp + 0xc]
// 008b0b4c  64a300000000         mov dword ptr fs:[0], eax
// 008b0b52  8bf1                 mov esi, ecx
// 008b0b54  89742408             mov dword ptr [esp + 8], esi
// 008b0b58  8d4e20               lea ecx, [esi + 0x20]
// 008b0b5b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008b0b63  e878fdffff           call 0x8b08e0
// 008b0b68  8bce                 mov ecx, esi
// 008b0b6a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008b0b72  e86b38f4ff           call 0x7f43e2
// 008b0b77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b0b7b  64890d00000000       mov dword ptr fs:[0], ecx
// 008b0b82  59                   pop ecx
// 008b0b83  5e                   pop esi
// 008b0b84  83c410               add esp, 0x10
// 008b0b87  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItems@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp