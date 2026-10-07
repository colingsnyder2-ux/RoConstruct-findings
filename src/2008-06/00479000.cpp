// roc 2008-06 00479000  unit: CInstanceRecord::CNameItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479000
//
// 00479000  56                   push esi
// 00479001  57                   push edi
// 00479002  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00479006  57                   push edi
// 00479007  8bf1                 mov esi, ecx
// 00479009  e872ffffff           call 0x478f80
// 0047900e  8b0f                 mov ecx, dword ptr [edi]
// 00479010  85c9                 test ecx, ecx
// 00479012  740b                 je 0x47901f
// 00479014  8b442410             mov eax, dword ptr [esp + 0x10]
// 00479018  50                   push eax
// 00479019  56                   push esi
// 0047901a  e851d30000           call 0x486370
// 0047901f  5f                   pop edi
// 00479020  5e                   pop esi
// 00479021  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
