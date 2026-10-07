// roc 2009-06 00806d00  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00806d00
//
// 00806d00  6aff                 push -1
// 00806d02  68de1a8800           push 0x881ade
// 00806d07  64a100000000         mov eax, dword ptr fs:[0]
// 00806d0d  50                   push eax
// 00806d0e  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00806d13  33c4                 xor eax, esp
// 00806d15  50                   push eax
// 00806d16  8d442404             lea eax, [esp + 4]
// 00806d1a  64a300000000         mov dword ptr fs:[0], eax
// 00806d20  b801000000           mov eax, 1
// 00806d25  8405182ba500         test byte ptr [0xa52b18], al
// 00806d2b  7525                 jne 0x806d52
// 00806d2d  0905182ba500         or dword ptr [0xa52b18], eax
// 00806d33  b9d02aa500           mov ecx, 0xa52ad0
// 00806d38  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00806d40  e89bf7ffff           call 0x8064e0
// 00806d45  68d0d58900           push 0x89d5d0
// 00806d4a  e8ac2df1ff           call 0x719afb
// 00806d4f  83c404               add esp, 4
// 00806d52  b8d02aa500           mov eax, 0xa52ad0
// 00806d57  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00806d5b  64890d00000000       mov dword ptr fs:[0], ecx
// 00806d62  59                   pop ecx
// 00806d63  83c40c               add esp, 0xc
// 00806d66  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
