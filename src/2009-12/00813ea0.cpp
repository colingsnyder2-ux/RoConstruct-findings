// roc 2009-12 00813ea0  unit: CXTPToolBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813ea0
//
// 00813ea0  51                   push ecx
// 00813ea1  56                   push esi
// 00813ea2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00813ea6  83c158               add ecx, 0x58
// 00813ea9  51                   push ecx
// 00813eaa  8bce                 mov ecx, esi
// 00813eac  c744240800000000     mov dword ptr [esp + 8], 0
// 00813eb4  ff1594de9800         call dword ptr [0x98de94]
// 00813eba  8bc6                 mov eax, esi
// 00813ebc  5e                   pop esi
// 00813ebd  59                   pop ecx
// 00813ebe  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
