// from server: 100% by auto
// roc 2007-08 00476650  unit: CInstanceRecord::CNameItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476650
//
// 00476650  56                   push esi
// 00476651  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00476655  56                   push esi
// 00476656  e885feffff           call 0x4764e0
// 0047665b  8b442408             mov eax, dword ptr [esp + 8]
// 0047665f  50                   push eax
// 00476660  8bce                 mov ecx, esi
// 00476662  e8e9fb0000           call 0x486250
// 00476667  5e                   pop esi
// 00476668  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
