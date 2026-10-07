// roc 2007-08 0041e0f0  unit: RBX::EventDataBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041e0f0
//
// 0041e0f0  51                   push ecx
// 0041e0f1  56                   push esi
// 0041e0f2  8bf1                 mov esi, ecx
// 0041e0f4  57                   push edi
// 0041e0f5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041e0f9  8d4604               lea eax, [esi + 4]
// 0041e0fc  50                   push eax
// 0041e0fd  8d4f04               lea ecx, [edi + 4]
// 0041e100  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041e108  e8c3f3feff           call 0x40d4d0
// 0041e10d  8b0e                 mov ecx, dword ptr [esi]
// 0041e10f  890f                 mov dword ptr [edi], ecx
// 0041e111  8bc7                 mov eax, edi
// 0041e113  5f                   pop edi
// 0041e114  5e                   pop esi
// 0041e115  59                   pop ecx
// 0041e116  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
