// from server: 100% by auto
// roc 2009-06 007291c0  unit: CXTPPaintManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007291c0
//
// 007291c0  51                   push ecx
// 007291c1  56                   push esi
// 007291c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007291c6  83c158               add ecx, 0x58
// 007291c9  51                   push ecx
// 007291ca  8bce                 mov ecx, esi
// 007291cc  c744240800000000     mov dword ptr [esp + 8], 0
// 007291d4  ff15e4fc8900         call dword ptr [0x89fce4]
// 007291da  8bc6                 mov eax, esi
// 007291dc  5e                   pop esi
// 007291dd  59                   pop ecx
// 007291de  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
