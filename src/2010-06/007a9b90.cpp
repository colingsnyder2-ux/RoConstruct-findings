// roc 2010-06 007a9b90  unit: ActiveDocView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9b90
//
// 007a9b90  51                   push ecx
// 007a9b91  56                   push esi
// 007a9b92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a9b96  83c150               add ecx, 0x50
// 007a9b99  51                   push ecx
// 007a9b9a  8bce                 mov ecx, esi
// 007a9b9c  c744240800000000     mov dword ptr [esp + 8], 0
// 007a9ba4  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007a9baa  8bc6                 mov eax, esi
// 007a9bac  5e                   pop esi
// 007a9bad  59                   pop ecx
// 007a9bae  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
