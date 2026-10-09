// roc 2009-12 007f5a50  unit: ActiveDocView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5a50
//
// 007f5a50  51                   push ecx
// 007f5a51  56                   push esi
// 007f5a52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f5a56  83c150               add ecx, 0x50
// 007f5a59  51                   push ecx
// 007f5a5a  8bce                 mov ecx, esi
// 007f5a5c  c744240800000000     mov dword ptr [esp + 8], 0
// 007f5a64  ff1594de9800         call dword ptr [0x98de94]
// 007f5a6a  8bc6                 mov eax, esi
// 007f5a6c  5e                   pop esi
// 007f5a6d  59                   pop ecx
// 007f5a6e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
