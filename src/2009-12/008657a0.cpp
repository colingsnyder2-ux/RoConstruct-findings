// roc 2009-12 008657a0  unit: CXTPPropertyGridItem  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008657a0
//
// 008657a0  6aff                 push -1
// 008657a2  689eee9500           push 0x95ee9e
// 008657a7  64a100000000         mov eax, dword ptr fs:[0]
// 008657ad  50                   push eax
// 008657ae  a10052b600           mov eax, dword ptr [0xb65200]
// 008657b3  33c4                 xor eax, esp
// 008657b5  50                   push eax
// 008657b6  8d442404             lea eax, [esp + 4]
// 008657ba  64a300000000         mov dword ptr fs:[0], eax
// 008657c0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 008657c6  85c0                 test eax, eax
// 008657c8  741c                 je 0x8657e6
// 008657ca  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 008657d0  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 008657d6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008657da  64890d00000000       mov dword ptr fs:[0], ecx
// 008657e1  59                   pop ecx
// 008657e2  83c40c               add esp, 0xc
// 008657e5  c3                   ret 
// 008657e6  b801000000           mov eax, 1
// 008657eb  8405f0b8b900         test byte ptr [0xb9b8f0], al
// 008657f1  7525                 jne 0x865818
// 008657f3  0905f0b8b900         or dword ptr [0xb9b8f0], eax
// 008657f9  b998b8b900           mov ecx, 0xb9b898
// 008657fe  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00865806  e8157f0600           call 0x8cd720
// 0086580b  6800a79800           push 0x98a700
// 00865810  e814f1f8ff           call 0x7f4929
// 00865815  83c404               add esp, 4
// 00865818  b898b8b900           mov eax, 0xb9b898
// 0086581d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00865821  64890d00000000       mov dword ptr fs:[0], ecx
// 00865828  59                   pop ecx
// 00865829  83c40c               add esp, 0xc
// 0086582c  c3                   ret 
// copied from an identical function in another client (function ?GetInplaceList@CXTPPropertyGridItem@@MAEAAVCXTPPropertyGridInplaceList@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp