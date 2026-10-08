// roc 2009-12 004ccc70  unit: G3D::VARArea  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccc70
//
// 004ccc70  56                   push esi
// 004ccc71  57                   push edi
// 004ccc72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ccc76  57                   push edi
// 004ccc77  8bf1                 mov esi, ecx
// 004ccc79  e872ffffff           call 0x4ccbf0
// 004ccc7e  8b0f                 mov ecx, dword ptr [edi]
// 004ccc80  85c9                 test ecx, ecx
// 004ccc82  740b                 je 0x4ccc8f
// 004ccc84  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ccc88  50                   push eax
// 004ccc89  56                   push esi
// 004ccc8a  e8d1000100           call 0x4dcd60
// 004ccc8f  5f                   pop edi
// 004ccc90  5e                   pop esi
// 004ccc91  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
