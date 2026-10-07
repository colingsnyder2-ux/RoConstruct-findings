// roc 2007-08 00507350  unit: G3D::GCamera  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00507350
//
// 00507350  6aff                 push -1
// 00507352  68c8f87400           push 0x74f8c8
// 00507357  64a100000000         mov eax, dword ptr fs:[0]
// 0050735d  50                   push eax
// 0050735e  51                   push ecx
// 0050735f  56                   push esi
// 00507360  a188518b00           mov eax, dword ptr [0x8b5188]
// 00507365  33c4                 xor eax, esp
// 00507367  50                   push eax
// 00507368  8d44240c             lea eax, [esp + 0xc]
// 0050736c  64a300000000         mov dword ptr fs:[0], eax
// 00507372  8bf1                 mov esi, ecx
// 00507374  89742408             mov dword ptr [esp + 8], esi
// 00507378  8d4e0c               lea ecx, [esi + 0xc]
// 0050737b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00507383  e8b8fdffff           call 0x507140
// 00507388  8b06                 mov eax, dword ptr [esi]
// 0050738a  50                   push eax
// 0050738b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00507393  e87884ffff           call 0x4ff810
// 00507398  83c404               add esp, 4
// 0050739b  c70600000000         mov dword ptr [esi], 0
// 005073a1  c7460400000000       mov dword ptr [esi + 4], 0
// 005073a8  c7460800000000       mov dword ptr [esi + 8], 0
// 005073af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005073b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005073ba  59                   pop ecx
// 005073bb  5e                   pop esi
// 005073bc  83c410               add esp, 0x10
// 005073bf  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
