// from server: 100% by auto
// roc 2010-06 00494090  unit: seg_00490000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494090
//
// 00494090  56                   push esi
// 00494091  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00494095  56                   push esi
// 00494096  e895feffff           call 0x493f30
// 0049409b  8b442408             mov eax, dword ptr [esp + 8]
// 0049409f  50                   push eax
// 004940a0  8bce                 mov ecx, esi
// 004940a2  e839820000           call 0x49c2e0
// 004940a7  5e                   pop esi
// 004940a8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
