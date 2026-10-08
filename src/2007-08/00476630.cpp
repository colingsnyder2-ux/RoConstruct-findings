// from server: 100% by auto
// roc 2007-08 00476630  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476630
//
// 00476630  56                   push esi
// 00476631  8b742408             mov esi, dword ptr [esp + 8]
// 00476635  56                   push esi
// 00476636  e8a5feffff           call 0x4764e0
// 0047663b  8bce                 mov ecx, esi
// 0047663d  e8defb0000           call 0x486220
// 00476642  5e                   pop esi
// 00476643  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
