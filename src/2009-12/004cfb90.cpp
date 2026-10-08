// roc 2009-12 004cfb90  unit: G3D::PBVTextureFormat::?$Table  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cfb90
//
// 004cfb90  56                   push esi
// 004cfb91  57                   push edi
// 004cfb92  8bf1                 mov esi, ecx
// 004cfb94  33ff                 xor edi, edi
// 004cfb96  397e04               cmp dword ptr [esi + 4], edi
// 004cfb99  7e1b                 jle 0x4cfbb6
// 004cfb9b  53                   push ebx
// 004cfb9c  33db                 xor ebx, ebx
// 004cfb9e  8bff                 mov edi, edi
// 004cfba0  8b0e                 mov ecx, dword ptr [esi]
// 004cfba2  03cb                 add ecx, ebx
// 004cfba4  e897dcffff           call 0x4cd840
// 004cfba9  47                   inc edi
// 004cfbaa  81c360070000         add ebx, 0x760
// 004cfbb0  3b7e04               cmp edi, dword ptr [esi + 4]
// 004cfbb3  7ceb                 jl 0x4cfba0
// 004cfbb5  5b                   pop ebx
// 004cfbb6  8b06                 mov eax, dword ptr [esi]
// 004cfbb8  50                   push eax
// 004cfbb9  e822a81100           call 0x5ea3e0
// 004cfbbe  83c404               add esp, 4
// 004cfbc1  5f                   pop edi
// 004cfbc2  c70600000000         mov dword ptr [esi], 0
// 004cfbc8  c7460400000000       mov dword ptr [esi + 4], 0
// 004cfbcf  c7460800000000       mov dword ptr [esi + 8], 0
// 004cfbd6  5e                   pop esi
// 004cfbd7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
