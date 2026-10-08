// roc 2007-03 00403b80  unit: seg_00400000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403b80
//
// 00403b80  8b442404             mov eax, dword ptr [esp + 4]
// 00403b84  56                   push esi
// 00403b85  50                   push eax
// 00403b86  8bf1                 mov esi, ecx
// 00403b88  e883ffffff           call 0x403b10
// 00403b8d  c706503e7800         mov dword ptr [esi], 0x783e50
// 00403b93  8bc6                 mov eax, esi
// 00403b95  5e                   pop esi
// 00403b96  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
