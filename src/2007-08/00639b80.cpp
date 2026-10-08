// roc 2007-08 00639b80  unit: CXTPControlComboBoxAutoCompleteWnd  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639b80
//
// 00639b80  51                   push ecx
// 00639b81  56                   push esi
// 00639b82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00639b86  83c150               add ecx, 0x50
// 00639b89  51                   push ecx
// 00639b8a  8bce                 mov ecx, esi
// 00639b8c  c744240800000000     mov dword ptr [esp + 8], 0
// 00639b94  ff1574dd7700         call dword ptr [0x77dd74]
// 00639b9a  8bc6                 mov eax, esi
// 00639b9c  5e                   pop esi
// 00639b9d  59                   pop ecx
// 00639b9e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
