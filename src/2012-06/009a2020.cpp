// from server: 100% by auto
// roc 2012-06 009a2020  unit: CXTPToolBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2020
//
// 009a2020  51                   push ecx
// 009a2021  56                   push esi
// 009a2022  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009a2026  83c158               add ecx, 0x58
// 009a2029  51                   push ecx
// 009a202a  8bce                 mov ecx, esi
// 009a202c  c744240800000000     mov dword ptr [esp + 8], 0
// 009a2034  ff158047b200         call dword ptr [0xb24780]
// 009a203a  8bc6                 mov eax, esi
// 009a203c  5e                   pop esi
// 009a203d  59                   pop ecx
// 009a203e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
