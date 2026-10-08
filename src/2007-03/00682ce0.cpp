// roc 2007-03 00682ce0  unit: seg_00680000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00682ce0
//
// 00682ce0  6aff                 push -1
// 00682ce2  688e3c7600           push 0x763c8e
// 00682ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00682ced  50                   push eax
// 00682cee  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00682cf3  33c4                 xor eax, esp
// 00682cf5  50                   push eax
// 00682cf6  8d442404             lea eax, [esp + 4]
// 00682cfa  64a300000000         mov dword ptr fs:[0], eax
// 00682d00  b801000000           mov eax, 1
// 00682d05  840500208c00         test byte ptr [0x8c2000], al
// 00682d0b  7525                 jne 0x682d32
// 00682d0d  090500208c00         or dword ptr [0x8c2000], eax
// 00682d13  b9a81e8c00           mov ecx, 0x8c1ea8
// 00682d18  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00682d20  e8ebfdffff           call 0x682b10
// 00682d25  68e0c07700           push 0x77c0e0
// 00682d2a  e884c4f9ff           call 0x61f1b3
// 00682d2f  83c404               add esp, 4
// 00682d32  b8a81e8c00           mov eax, 0x8c1ea8
// 00682d37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00682d3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00682d42  59                   pop ecx
// 00682d43  83c40c               add esp, 0xc
// 00682d46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
