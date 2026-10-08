// roc 2007-03 006e0c30  unit: seg_006e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e0c30
//
// 006e0c30  56                   push esi
// 006e0c31  8bf1                 mov esi, ecx
// 006e0c33  e836def3ff           call 0x61ea6e
// 006e0c38  33c0                 xor eax, eax
// 006e0c3a  894654               mov dword ptr [esi + 0x54], eax
// 006e0c3d  894658               mov dword ptr [esi + 0x58], eax
// 006e0c40  c706dc897d00         mov dword ptr [esi], 0x7d89dc
// 006e0c46  8bc6                 mov eax, esi
// 006e0c48  5e                   pop esi
// 006e0c49  c3                   ret 
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ??0CScintillaCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
