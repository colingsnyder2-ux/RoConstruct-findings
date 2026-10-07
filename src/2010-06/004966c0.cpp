// roc 2010-06 004966c0  unit: seg_00490000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004966c0
//
// 004966c0  56                   push esi
// 004966c1  57                   push edi
// 004966c2  8bf1                 mov esi, ecx
// 004966c4  33ff                 xor edi, edi
// 004966c6  397e04               cmp dword ptr [esi + 4], edi
// 004966c9  7e1b                 jle 0x4966e6
// 004966cb  53                   push ebx
// 004966cc  33db                 xor ebx, ebx
// 004966ce  8bff                 mov edi, edi
// 004966d0  8b0e                 mov ecx, dword ptr [esi]
// 004966d2  03cb                 add ecx, ebx
// 004966d4  e897dcffff           call 0x494370
// 004966d9  47                   inc edi
// 004966da  81c360070000         add ebx, 0x760
// 004966e0  3b7e04               cmp edi, dword ptr [esi + 4]
// 004966e3  7ceb                 jl 0x4966d0
// 004966e5  5b                   pop ebx
// 004966e6  8b06                 mov eax, dword ptr [esi]
// 004966e8  50                   push eax
// 004966e9  e8d2720b00           call 0x54d9c0
// 004966ee  83c404               add esp, 4
// 004966f1  5f                   pop edi
// 004966f2  c70600000000         mov dword ptr [esi], 0
// 004966f8  c7460400000000       mov dword ptr [esi + 4], 0
// 004966ff  c7460800000000       mov dword ptr [esi + 8], 0
// 00496706  5e                   pop esi
// 00496707  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
