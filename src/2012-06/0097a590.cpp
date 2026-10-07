// roc 2012-06 0097a590  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097a590
//
// 0097a590  51                   push ecx
// 0097a591  56                   push esi
// 0097a592  8bf1                 mov esi, ecx
// 0097a594  57                   push edi
// 0097a595  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0097a599  8d4604               lea eax, [esi + 4]
// 0097a59c  50                   push eax
// 0097a59d  8d4f04               lea ecx, [edi + 4]
// 0097a5a0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0097a5a8  e8f3d6a9ff           call 0x417ca0
// 0097a5ad  8b0e                 mov ecx, dword ptr [esi]
// 0097a5af  890f                 mov dword ptr [edi], ecx
// 0097a5b1  8bc7                 mov eax, edi
// 0097a5b3  5f                   pop edi
// 0097a5b4  5e                   pop esi
// 0097a5b5  59                   pop ecx
// 0097a5b6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
