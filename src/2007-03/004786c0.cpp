// roc 2007-03 004786c0  unit: seg_00470000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004786c0
//
// 004786c0  56                   push esi
// 004786c1  57                   push edi
// 004786c2  8bf1                 mov esi, ecx
// 004786c4  33ff                 xor edi, edi
// 004786c6  397e04               cmp dword ptr [esi + 4], edi
// 004786c9  7e1d                 jle 0x4786e8
// 004786cb  53                   push ebx
// 004786cc  33db                 xor ebx, ebx
// 004786ce  8bff                 mov edi, edi
// 004786d0  8b0e                 mov ecx, dword ptr [esi]
// 004786d2  03cb                 add ecx, ebx
// 004786d4  e8e7e2ffff           call 0x4769c0
// 004786d9  83c701               add edi, 1
// 004786dc  81c360070000         add ebx, 0x760
// 004786e2  3b7e04               cmp edi, dword ptr [esi + 4]
// 004786e5  7ce9                 jl 0x4786d0
// 004786e7  5b                   pop ebx
// 004786e8  8b06                 mov eax, dword ptr [esi]
// 004786ea  50                   push eax
// 004786eb  e890ac0700           call 0x4f3380
// 004786f0  83c404               add esp, 4
// 004786f3  5f                   pop edi
// 004786f4  c70600000000         mov dword ptr [esi], 0
// 004786fa  c7460400000000       mov dword ptr [esi + 4], 0
// 00478701  c7460800000000       mov dword ptr [esi + 8], 0
// 00478708  5e                   pop esi
// 00478709  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
