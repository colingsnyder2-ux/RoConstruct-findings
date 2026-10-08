// from server: 100% by auto
// roc 2011-06 00829a00  unit: CXTPToolBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829a00
//
// 00829a00  51                   push ecx
// 00829a01  56                   push esi
// 00829a02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00829a06  83c158               add ecx, 0x58
// 00829a09  51                   push ecx
// 00829a0a  8bce                 mov ecx, esi
// 00829a0c  c744240800000000     mov dword ptr [esp + 8], 0
// 00829a14  ff15e42da400         call dword ptr [0xa42de4]
// 00829a1a  8bc6                 mov eax, esi
// 00829a1c  5e                   pop esi
// 00829a1d  59                   pop ecx
// 00829a1e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
