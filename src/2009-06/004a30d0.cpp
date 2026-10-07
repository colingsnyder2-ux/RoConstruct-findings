// roc 2009-06 004a30d0  unit: G3D::PBVTextureFormat::?$Table  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a30d0
//
// 004a30d0  56                   push esi
// 004a30d1  57                   push edi
// 004a30d2  8bf1                 mov esi, ecx
// 004a30d4  33ff                 xor edi, edi
// 004a30d6  397e04               cmp dword ptr [esi + 4], edi
// 004a30d9  7e1b                 jle 0x4a30f6
// 004a30db  53                   push ebx
// 004a30dc  33db                 xor ebx, ebx
// 004a30de  8bff                 mov edi, edi
// 004a30e0  8b0e                 mov ecx, dword ptr [esi]
// 004a30e2  03cb                 add ecx, ebx
// 004a30e4  e897deffff           call 0x4a0f80
// 004a30e9  47                   inc edi
// 004a30ea  81c360070000         add ebx, 0x760
// 004a30f0  3b7e04               cmp edi, dword ptr [esi + 4]
// 004a30f3  7ceb                 jl 0x4a30e0
// 004a30f5  5b                   pop ebx
// 004a30f6  8b06                 mov eax, dword ptr [esi]
// 004a30f8  50                   push eax
// 004a30f9  e892810c00           call 0x56b290
// 004a30fe  83c404               add esp, 4
// 004a3101  5f                   pop edi
// 004a3102  c70600000000         mov dword ptr [esi], 0
// 004a3108  c7460400000000       mov dword ptr [esi + 4], 0
// 004a310f  c7460800000000       mov dword ptr [esi + 8], 0
// 004a3116  5e                   pop esi
// 004a3117  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
