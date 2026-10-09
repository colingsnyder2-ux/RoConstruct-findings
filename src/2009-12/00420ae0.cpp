// roc 2009-12 00420ae0  unit: CRobloxTreeCtrlNode  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00420ae0
//
// 00420ae0  51                   push ecx
// 00420ae1  56                   push esi
// 00420ae2  8bf1                 mov esi, ecx
// 00420ae4  57                   push edi
// 00420ae5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00420ae9  8d4604               lea eax, [esi + 4]
// 00420aec  50                   push eax
// 00420aed  8d4f04               lea ecx, [edi + 4]
// 00420af0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00420af8  e8c3f7feff           call 0x4102c0
// 00420afd  8b0e                 mov ecx, dword ptr [esi]
// 00420aff  890f                 mov dword ptr [edi], ecx
// 00420b01  8bc7                 mov eax, edi
// 00420b03  5f                   pop edi
// 00420b04  5e                   pop esi
// 00420b05  59                   pop ecx
// 00420b06  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
