// roc 2007-03 0062f0c0  unit: seg_00620000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f0c0
//
// 0062f0c0  51                   push ecx
// 0062f0c1  56                   push esi
// 0062f0c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062f0c6  83c150               add ecx, 0x50
// 0062f0c9  51                   push ecx
// 0062f0ca  8bce                 mov ecx, esi
// 0062f0cc  c744240800000000     mov dword ptr [esp + 8], 0
// 0062f0d4  ff152cdd7700         call dword ptr [0x77dd2c]
// 0062f0da  8bc6                 mov eax, esi
// 0062f0dc  5e                   pop esi
// 0062f0dd  59                   pop ecx
// 0062f0de  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
