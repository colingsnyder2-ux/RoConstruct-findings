// roc 2007-08 00476610  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476610
//
// 00476610  56                   push esi
// 00476611  8b742408             mov esi, dword ptr [esp + 8]
// 00476615  56                   push esi
// 00476616  e8c5feffff           call 0x4764e0
// 0047661b  8bce                 mov ecx, esi
// 0047661d  e8befb0000           call 0x4861e0
// 00476622  5e                   pop esi
// 00476623  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
