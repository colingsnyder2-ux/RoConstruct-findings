// roc 2010-06 007c4550  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c4550
//
// 007c4550  6aff                 push -1
// 007c4552  682efe9a00           push 0x9afe2e
// 007c4557  64a100000000         mov eax, dword ptr fs:[0]
// 007c455d  50                   push eax
// 007c455e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007c4563  33c4                 xor eax, esp
// 007c4565  50                   push eax
// 007c4566  8d442404             lea eax, [esp + 4]
// 007c456a  64a300000000         mov dword ptr fs:[0], eax
// 007c4570  b801000000           mov eax, 1
// 007c4575  84056455c200         test byte ptr [0xc25564], al
// 007c457b  7525                 jne 0x7c45a2
// 007c457d  09056455c200         or dword ptr [0xc25564], eax
// 007c4583  b9e854c200           mov ecx, 0xc254e8
// 007c4588  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007c4590  e87bc3ffff           call 0x7c0910
// 007c4595  68108f9e00           push 0x9e8f10
// 007c459a  e8c444feff           call 0x7a8a63
// 007c459f  83c404               add esp, 4
// 007c45a2  b8e854c200           mov eax, 0xc254e8
// 007c45a7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007c45ab  64890d00000000       mov dword ptr fs:[0], ecx
// 007c45b2  59                   pop ecx
// 007c45b3  83c40c               add esp, 0xc
// 007c45b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
