// roc 2009-06 0071baf0  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071baf0
//
// 0071baf0  6aff                 push -1
// 0071baf2  68ce458700           push 0x8745ce
// 0071baf7  64a100000000         mov eax, dword ptr fs:[0]
// 0071bafd  50                   push eax
// 0071bafe  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071bb03  33c4                 xor eax, esp
// 0071bb05  50                   push eax
// 0071bb06  8d442404             lea eax, [esp + 4]
// 0071bb0a  64a300000000         mov dword ptr fs:[0], eax
// 0071bb10  b801000000           mov eax, 1
// 0071bb15  84053c19a500         test byte ptr [0xa5193c], al
// 0071bb1b  7525                 jne 0x71bb42
// 0071bb1d  09053c19a500         or dword ptr [0xa5193c], eax
// 0071bb23  b93019a500           mov ecx, 0xa51930
// 0071bb28  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0071bb30  e80bf1ffff           call 0x71ac40
// 0071bb35  6830d38900           push 0x89d330
// 0071bb3a  e8bcdfffff           call 0x719afb
// 0071bb3f  83c404               add esp, 4
// 0071bb42  b83019a500           mov eax, 0xa51930
// 0071bb47  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071bb4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0071bb52  59                   pop ecx
// 0071bb53  83c40c               add esp, 0xc
// 0071bb56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
