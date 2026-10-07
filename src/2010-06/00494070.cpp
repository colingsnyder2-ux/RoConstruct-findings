// roc 2010-06 00494070  unit: seg_00490000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494070
//
// 00494070  56                   push esi
// 00494071  8b742408             mov esi, dword ptr [esp + 8]
// 00494075  56                   push esi
// 00494076  e8b5feffff           call 0x493f30
// 0049407b  8bce                 mov ecx, esi
// 0049407d  e82e820000           call 0x49c2b0
// 00494082  5e                   pop esi
// 00494083  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
