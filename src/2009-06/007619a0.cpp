// roc 2009-06 007619a0  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007619a0
//
// 007619a0  6aff                 push -1
// 007619a2  687e848700           push 0x87847e
// 007619a7  64a100000000         mov eax, dword ptr fs:[0]
// 007619ad  50                   push eax
// 007619ae  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007619b3  33c4                 xor eax, esp
// 007619b5  50                   push eax
// 007619b6  8d442404             lea eax, [esp + 4]
// 007619ba  64a300000000         mov dword ptr fs:[0], eax
// 007619c0  b801000000           mov eax, 1
// 007619c5  8405ec1fa500         test byte ptr [0xa51fec], al
// 007619cb  7525                 jne 0x7619f2
// 007619cd  0905ec1fa500         or dword ptr [0xa51fec], eax
// 007619d3  b9b41fa500           mov ecx, 0xa51fb4
// 007619d8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007619e0  e8dbfdffff           call 0x7617c0
// 007619e5  68c0d48900           push 0x89d4c0
// 007619ea  e80c81fbff           call 0x719afb
// 007619ef  83c404               add esp, 4
// 007619f2  b8b41fa500           mov eax, 0xa51fb4
// 007619f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007619fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00761a02  59                   pop ecx
// 00761a03  83c40c               add esp, 0xc
// 00761a06  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
