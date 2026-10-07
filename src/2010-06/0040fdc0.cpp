// roc 2010-06 0040fdc0  unit: ChatEnter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040fdc0
//
// 0040fdc0  51                   push ecx
// 0040fdc1  56                   push esi
// 0040fdc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040fdc6  83c158               add ecx, 0x58
// 0040fdc9  51                   push ecx
// 0040fdca  8bce                 mov ecx, esi
// 0040fdcc  c744240800000000     mov dword ptr [esp + 8], 0
// 0040fdd4  ff150ca49e00         call dword ptr [0x9ea40c]
// 0040fdda  8bc6                 mov eax, esi
// 0040fddc  5e                   pop esi
// 0040fddd  59                   pop ecx
// 0040fdde  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
