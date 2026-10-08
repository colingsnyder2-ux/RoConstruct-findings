// from server: 100% by auto
// roc 2008-06 00479840  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479840
//
// 00479840  56                   push esi
// 00479841  8b742408             mov esi, dword ptr [esp + 8]
// 00479845  56                   push esi
// 00479846  e8b5feffff           call 0x479700
// 0047984b  8bce                 mov ecx, esi
// 0047984d  e8def90000           call 0x489230
// 00479852  5e                   pop esi
// 00479853  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
