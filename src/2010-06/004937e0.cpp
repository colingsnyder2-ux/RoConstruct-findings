// roc 2010-06 004937e0  unit: seg_00490000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004937e0
//
// 004937e0  56                   push esi
// 004937e1  57                   push edi
// 004937e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004937e6  57                   push edi
// 004937e7  8bf1                 mov esi, ecx
// 004937e9  e872ffffff           call 0x493760
// 004937ee  8b0f                 mov ecx, dword ptr [edi]
// 004937f0  85c9                 test ecx, ecx
// 004937f2  740b                 je 0x4937ff
// 004937f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004937f8  50                   push eax
// 004937f9  56                   push esi
// 004937fa  e8d1590000           call 0x4991d0
// 004937ff  5f                   pop edi
// 00493800  5e                   pop esi
// 00493801  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
