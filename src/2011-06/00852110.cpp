// roc 2011-06 00852110  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852110
//
// 00852110  6aff                 push -1
// 00852112  68ee5da000           push 0xa05dee
// 00852117  64a100000000         mov eax, dword ptr fs:[0]
// 0085211d  50                   push eax
// 0085211e  a12058c900           mov eax, dword ptr [0xc95820]
// 00852123  33c4                 xor eax, esp
// 00852125  50                   push eax
// 00852126  8d442404             lea eax, [esp + 4]
// 0085212a  64a300000000         mov dword ptr fs:[0], eax
// 00852130  b801000000           mov eax, 1
// 00852135  84055c88d100         test byte ptr [0xd1885c], al
// 0085213b  7525                 jne 0x852162
// 0085213d  09055c88d100         or dword ptr [0xd1885c], eax
// 00852143  b92488d100           mov ecx, 0xd18824
// 00852148  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00852150  e8dbfdffff           call 0x851f30
// 00852155  6830fca300           push 0xa3fc30
// 0085215a  e8fe8ffbff           call 0x80b15d
// 0085215f  83c404               add esp, 4
// 00852162  b82488d100           mov eax, 0xd18824
// 00852167  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085216b  64890d00000000       mov dword ptr fs:[0], ecx
// 00852172  59                   pop ecx
// 00852173  83c40c               add esp, 0xc
// 00852176  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
