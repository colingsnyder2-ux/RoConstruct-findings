// roc 2009-06 004106b0  unit: boost::Vbad_weak_ptr::U?$error_info_injector::?$clone_impl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004106b0
//
// 004106b0  51                   push ecx
// 004106b1  56                   push esi
// 004106b2  8bf1                 mov esi, ecx
// 004106b4  57                   push edi
// 004106b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004106b9  8d4604               lea eax, [esi + 4]
// 004106bc  50                   push eax
// 004106bd  8d4f04               lea ecx, [edi + 4]
// 004106c0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004106c8  e873ffffff           call 0x410640
// 004106cd  8b0e                 mov ecx, dword ptr [esi]
// 004106cf  890f                 mov dword ptr [edi], ecx
// 004106d1  8bc7                 mov eax, edi
// 004106d3  5f                   pop edi
// 004106d4  5e                   pop esi
// 004106d5  59                   pop ecx
// 004106d6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
