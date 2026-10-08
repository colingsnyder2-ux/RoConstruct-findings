// from server: 100% by auto
// roc 2007-08 00475d20  unit: CInstanceRecord::CNameItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475d20
//
// 00475d20  56                   push esi
// 00475d21  57                   push edi
// 00475d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00475d26  57                   push edi
// 00475d27  8bf1                 mov esi, ecx
// 00475d29  e872ffffff           call 0x475ca0
// 00475d2e  8b0f                 mov ecx, dword ptr [edi]
// 00475d30  85c9                 test ecx, ecx
// 00475d32  740b                 je 0x475d3f
// 00475d34  8b442410             mov eax, dword ptr [esp + 0x10]
// 00475d38  50                   push eax
// 00475d39  56                   push esi
// 00475d3a  e8a1d40000           call 0x4831e0
// 00475d3f  5f                   pop edi
// 00475d40  5e                   pop esi
// 00475d41  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
