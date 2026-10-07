// roc 2010-06 008184c0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008184c0
//
// 008184c0  6aff                 push -1
// 008184c2  685e4c9b00           push 0x9b4c5e
// 008184c7  64a100000000         mov eax, dword ptr fs:[0]
// 008184cd  50                   push eax
// 008184ce  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008184d3  33c4                 xor eax, esp
// 008184d5  50                   push eax
// 008184d6  8d442404             lea eax, [esp + 4]
// 008184da  64a300000000         mov dword ptr fs:[0], eax
// 008184e0  b801000000           mov eax, 1
// 008184e5  8405045fc200         test byte ptr [0xc25f04], al
// 008184eb  7525                 jne 0x818512
// 008184ed  0905045fc200         or dword ptr [0xc25f04], eax
// 008184f3  b9b05dc200           mov ecx, 0xc25db0
// 008184f8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00818500  e8ebfdffff           call 0x8182f0
// 00818505  68e0909e00           push 0x9e90e0
// 0081850a  e85405f9ff           call 0x7a8a63
// 0081850f  83c404               add esp, 4
// 00818512  b8b05dc200           mov eax, 0xc25db0
// 00818517  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081851b  64890d00000000       mov dword ptr fs:[0], ecx
// 00818522  59                   pop ecx
// 00818523  83c40c               add esp, 0xc
// 00818526  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
