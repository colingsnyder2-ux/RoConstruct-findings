// from server: 100% by auto
// roc 2008-06 00477480  unit: G3D::VARArea  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477480
//
// 00477480  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00477484  8b542408             mov edx, dword ptr [esp + 8]
// 00477488  56                   push esi
// 00477489  8b742408             mov esi, dword ptr [esp + 8]
// 0047748d  50                   push eax
// 0047748e  52                   push edx
// 0047748f  56                   push esi
// 00477490  50                   push eax
// 00477491  52                   push edx
// 00477492  56                   push esi
// 00477493  e898fdffff           call 0x477230
// 00477498  5e                   pop esi
// 00477499  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
