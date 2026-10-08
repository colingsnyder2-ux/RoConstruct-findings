// roc 2007-03 00731580  unit: seg_00730000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00731580
//
// 00731580  8b442410             mov eax, dword ptr [esp + 0x10]
// 00731584  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00731588  8b542408             mov edx, dword ptr [esp + 8]
// 0073158c  81eca4000000         sub esp, 0xa4
// 00731592  50                   push eax
// 00731593  51                   push ecx
// 00731594  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0073159b  52                   push edx
// 0073159c  8d44240c             lea eax, [esp + 0xc]
// 007315a0  50                   push eax
// 007315a1  e8dadbdeff           call 0x51f180
// 007315a6  50                   push eax
// 007315a7  e854f7ffff           call 0x730d00
// 007315ac  81c4b4000000         add esp, 0xb4
// 007315b2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?box@Draw@G3D@@SAXABVAABox@2@PAVRenderDevice@2@ABVColor4@2@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
