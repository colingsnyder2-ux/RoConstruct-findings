// roc 2007-03 004595a0  unit: seg_00450000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004595a0
//
// 004595a0  56                   push esi
// 004595a1  8bf1                 mov esi, ecx
// 004595a3  e8c6541c00           call 0x61ea6e
// 004595a8  33c0                 xor eax, eax
// 004595aa  894654               mov dword ptr [esi + 0x54], eax
// 004595ad  894658               mov dword ptr [esi + 0x58], eax
// 004595b0  c706bc2d7900         mov dword ptr [esi], 0x792dbc
// 004595b6  8bc6                 mov eax, esi
// 004595b8  5e                   pop esi
// 004595b9  c3                   ret 
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ??0CScintillaCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
