// from server: 100% by auto
// roc 2010-06 00494050  unit: seg_00490000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494050
//
// 00494050  56                   push esi
// 00494051  8b742408             mov esi, dword ptr [esp + 8]
// 00494055  56                   push esi
// 00494056  e8d5feffff           call 0x493f30
// 0049405b  8bce                 mov ecx, esi
// 0049405d  e80e820000           call 0x49c270
// 00494062  5e                   pop esi
// 00494063  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
