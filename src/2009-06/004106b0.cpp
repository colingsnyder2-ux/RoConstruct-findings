// from server: 100% by tester
// roc 2007-03 00437690  unit: seg_00430000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00437690
//
// 00437690  51                   push ecx
// 00437691  56                   push esi
// 00437692  8bf1                 mov esi, ecx
// 00437694  57                   push edi
// 00437695  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00437699  8d4604               lea eax, [esi + 4]
// 0043769c  50                   push eax
// 0043769d  8d4f04               lea ecx, [edi + 4]
// 004376a0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004376a8  e8a36efdff           call 0x40e550
// 004376ad  8b0e                 mov ecx, dword ptr [esi]
// 004376af  890f                 mov dword ptr [edi], ecx
// 004376b1  8bc7                 mov eax, edi
// 004376b3  5f                   pop edi
// 004376b4  5e                   pop esi
// 004376b5  59                   pop ecx
// 004376b6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
