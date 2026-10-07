// roc 2011-06 008000e0  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008000e0
//
// 008000e0  51                   push ecx
// 008000e1  56                   push esi
// 008000e2  8bf1                 mov esi, ecx
// 008000e4  57                   push edi
// 008000e5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008000e9  8d4604               lea eax, [esi + 4]
// 008000ec  50                   push eax
// 008000ed  8d4f04               lea ecx, [edi + 4]
// 008000f0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008000f8  e89348c1ff           call 0x414990
// 008000fd  8b0e                 mov ecx, dword ptr [esi]
// 008000ff  890f                 mov dword ptr [edi], ecx
// 00800101  8bc7                 mov eax, edi
// 00800103  5f                   pop edi
// 00800104  5e                   pop esi
// 00800105  59                   pop ecx
// 00800106  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
