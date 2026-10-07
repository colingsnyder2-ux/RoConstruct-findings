// roc 2008-06 006a26e0  unit: ActiveDocView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a26e0
//
// 006a26e0  51                   push ecx
// 006a26e1  56                   push esi
// 006a26e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a26e6  83c158               add ecx, 0x58
// 006a26e9  51                   push ecx
// 006a26ea  8bce                 mov ecx, esi
// 006a26ec  c744240800000000     mov dword ptr [esp + 8], 0
// 006a26f4  ff15d43e8000         call dword ptr [0x803ed4]
// 006a26fa  8bc6                 mov eax, esi
// 006a26fc  5e                   pop esi
// 006a26fd  59                   pop ecx
// 006a26fe  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
