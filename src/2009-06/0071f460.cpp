// roc 2009-06 0071f460  unit: CXTPControlComboBoxAutoCompleteWnd  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f460
//
// 0071f460  51                   push ecx
// 0071f461  56                   push esi
// 0071f462  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071f466  83c150               add ecx, 0x50
// 0071f469  51                   push ecx
// 0071f46a  8bce                 mov ecx, esi
// 0071f46c  c744240800000000     mov dword ptr [esp + 8], 0
// 0071f474  ff15e4fc8900         call dword ptr [0x89fce4]
// 0071f47a  8bc6                 mov eax, esi
// 0071f47c  5e                   pop esi
// 0071f47d  59                   pop ecx
// 0071f47e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
