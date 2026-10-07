// roc 2009-06 004a04e0  unit: G3D::VARArea  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a04e0
//
// 004a04e0  56                   push esi
// 004a04e1  57                   push edi
// 004a04e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a04e6  57                   push edi
// 004a04e7  8bf1                 mov esi, ecx
// 004a04e9  e872ffffff           call 0x4a0460
// 004a04ee  8b0f                 mov ecx, dword ptr [edi]
// 004a04f0  85c9                 test ecx, ecx
// 004a04f2  740b                 je 0x4a04ff
// 004a04f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a04f8  50                   push eax
// 004a04f9  56                   push esi
// 004a04fa  e821fd0000           call 0x4b0220
// 004a04ff  5f                   pop edi
// 004a0500  5e                   pop esi
// 004a0501  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
