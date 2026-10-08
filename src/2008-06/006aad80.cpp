// roc 2008-06 006aad80  unit: CXTPControlComboBoxAutoCompleteWnd  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aad80
//
// 006aad80  51                   push ecx
// 006aad81  56                   push esi
// 006aad82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006aad86  83c150               add ecx, 0x50
// 006aad89  51                   push ecx
// 006aad8a  8bce                 mov ecx, esi
// 006aad8c  c744240800000000     mov dword ptr [esp + 8], 0
// 006aad94  ff15d43e8000         call dword ptr [0x803ed4]
// 006aad9a  8bc6                 mov eax, esi
// 006aad9c  5e                   pop esi
// 006aad9d  59                   pop ecx
// 006aad9e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
