// roc 2010-06 007c7f80  unit: CXTPToolBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c7f80
//
// 007c7f80  51                   push ecx
// 007c7f81  56                   push esi
// 007c7f82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c7f86  83c158               add ecx, 0x58
// 007c7f89  51                   push ecx
// 007c7f8a  8bce                 mov ecx, esi
// 007c7f8c  c744240800000000     mov dword ptr [esp + 8], 0
// 007c7f94  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007c7f9a  8bc6                 mov eax, esi
// 007c7f9c  5e                   pop esi
// 007c7f9d  59                   pop ecx
// 007c7f9e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
