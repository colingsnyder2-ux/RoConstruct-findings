// from server: 100% by tester
// roc 2007-03 004fc300  unit: seg_004f0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc300
//
// 004fc300  6aff                 push -1
// 004fc302  6898087500           push 0x750898
// 004fc307  64a100000000         mov eax, dword ptr fs:[0]
// 004fc30d  50                   push eax
// 004fc30e  51                   push ecx
// 004fc30f  56                   push esi
// 004fc310  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fc315  33c4                 xor eax, esp
// 004fc317  50                   push eax
// 004fc318  8d44240c             lea eax, [esp + 0xc]
// 004fc31c  64a300000000         mov dword ptr fs:[0], eax
// 004fc322  8bf1                 mov esi, ecx
// 004fc324  89742408             mov dword ptr [esp + 8], esi
// 004fc328  8d4e0c               lea ecx, [esi + 0xc]
// 004fc32b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004fc333  e8b8fdffff           call 0x4fc0f0
// 004fc338  8b06                 mov eax, dword ptr [esi]
// 004fc33a  50                   push eax
// 004fc33b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004fc343  e83870ffff           call 0x4f3380
// 004fc348  83c404               add esp, 4
// 004fc34b  c70600000000         mov dword ptr [esi], 0
// 004fc351  c7460400000000       mov dword ptr [esi + 4], 0
// 004fc358  c7460800000000       mov dword ptr [esi + 8], 0
// 004fc35f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fc363  64890d00000000       mov dword ptr fs:[0], ecx
// 004fc36a  59                   pop ecx
// 004fc36b  5e                   pop esi
// 004fc36c  83c410               add esp, 0x10
// 004fc36f  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
