// roc 2009-12 008644e0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008644e0
//
// 008644e0  6aff                 push -1
// 008644e2  684eed9500           push 0x95ed4e
// 008644e7  64a100000000         mov eax, dword ptr fs:[0]
// 008644ed  50                   push eax
// 008644ee  a10052b600           mov eax, dword ptr [0xb65200]
// 008644f3  33c4                 xor eax, esp
// 008644f5  50                   push eax
// 008644f6  8d442404             lea eax, [esp + 4]
// 008644fa  64a300000000         mov dword ptr fs:[0], eax
// 00864500  b801000000           mov eax, 1
// 00864505  8405d4b7b900         test byte ptr [0xb9b7d4], al
// 0086450b  7525                 jne 0x864532
// 0086450d  0905d4b7b900         or dword ptr [0xb9b7d4], eax
// 00864513  b980b6b900           mov ecx, 0xb9b680
// 00864518  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00864520  e8ebfdffff           call 0x864310
// 00864525  68e0a69800           push 0x98a6e0
// 0086452a  e8fa03f9ff           call 0x7f4929
// 0086452f  83c404               add esp, 4
// 00864532  b880b6b900           mov eax, 0xb9b680
// 00864537  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086453b  64890d00000000       mov dword ptr fs:[0], ecx
// 00864542  59                   pop ecx
// 00864543  83c40c               add esp, 0xc
// 00864546  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
