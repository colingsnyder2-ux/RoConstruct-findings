// roc 2007-03 00620ea0  unit: seg_00620000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620ea0
//
// 00620ea0  56                   push esi
// 00620ea1  8bf1                 mov esi, ecx
// 00620ea3  e8c6dbffff           call 0x61ea6e
// 00620ea8  33c0                 xor eax, eax
// 00620eaa  894654               mov dword ptr [esi + 0x54], eax
// 00620ead  894658               mov dword ptr [esi + 0x58], eax
// 00620eb0  c7067c2e7c00         mov dword ptr [esi], 0x7c2e7c
// 00620eb6  8bc6                 mov eax, esi
// 00620eb8  5e                   pop esi
// 00620eb9  c3                   ret 
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ??0CScintillaCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
