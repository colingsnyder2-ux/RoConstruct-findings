// roc 2007-08 00668f70  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668f70
//
// 00668f70  6aff                 push -1
// 00668f72  68ee0a7600           push 0x760aee
// 00668f77  64a100000000         mov eax, dword ptr fs:[0]
// 00668f7d  50                   push eax
// 00668f7e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00668f83  33c4                 xor eax, esp
// 00668f85  50                   push eax
// 00668f86  8d442404             lea eax, [esp + 4]
// 00668f8a  64a300000000         mov dword ptr fs:[0], eax
// 00668f90  b801000000           mov eax, 1
// 00668f95  8405708c8c00         test byte ptr [0x8c8c70], al
// 00668f9b  7525                 jne 0x668fc2
// 00668f9d  0905708c8c00         or dword ptr [0x8c8c70], eax
// 00668fa3  b908888c00           mov ecx, 0x8c8808
// 00668fa8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00668fb0  e88bf5ffff           call 0x668540
// 00668fb5  68f0cb7700           push 0x77cbf0
// 00668fba  e8647dfcff           call 0x630d23
// 00668fbf  83c404               add esp, 4
// 00668fc2  b808888c00           mov eax, 0x8c8808
// 00668fc7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668fcb  64890d00000000       mov dword ptr fs:[0], ecx
// 00668fd2  59                   pop ecx
// 00668fd3  83c40c               add esp, 0xc
// 00668fd6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
