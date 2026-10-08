// roc 2009-12 0040f980  unit: ChatEnter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f980
//
// 0040f980  51                   push ecx
// 0040f981  56                   push esi
// 0040f982  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040f986  83c158               add ecx, 0x58
// 0040f989  51                   push ecx
// 0040f98a  8bce                 mov ecx, esi
// 0040f98c  c744240800000000     mov dword ptr [esp + 8], 0
// 0040f994  ff15f0b69800         call dword ptr [0x98b6f0]
// 0040f99a  8bc6                 mov eax, esi
// 0040f99c  5e                   pop esi
// 0040f99d  59                   pop ecx
// 0040f99e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
