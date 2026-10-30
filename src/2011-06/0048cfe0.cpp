// roc 2011-06 0048cfe0  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048cfe0
//
// 0048cfe0  6aff                 push -1
// 0048cfe2  68aa639d00           push 0x9d63aa
// 0048cfe7  64a100000000         mov eax, dword ptr fs:[0]
// 0048cfed  50                   push eax
// 0048cfee  64892500000000       mov dword ptr fs:[0], esp
// 0048cff5  51                   push ecx
// 0048cff6  56                   push esi
// 0048cff7  68a0010000           push 0x1a0
// 0048cffc  e85dd03700           call 0x80a05e
// 0048d001  8bf0                 mov esi, eax
// 0048d003  83c404               add esp, 4
// 0048d006  89742404             mov dword ptr [esp + 4], esi
// 0048d00a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048d012  85f6                 test esi, esi
// 0048d014  7429                 je 0x48d03f
// 0048d016  8bce                 mov ecx, esi
// 0048d018  e871df3700           call 0x80af8e
// 0048d01d  c706543ca700         mov dword ptr [esi], 0xa73c54
// 0048d023  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0048d02d  8bc6                 mov eax, esi
// 0048d02f  5e                   pop esi
// 0048d030  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048d034  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d03b  83c410               add esp, 0x10
// 0048d03e  c3                   ret 
// 0048d03f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048d043  33c0                 xor eax, eax
// 0048d045  5e                   pop esi
// 0048d046  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d04d  83c410               add esp, 0x10
// 0048d050  c3                   ret 
// copied from an identical function in another client (function ?CreateFindReplaceDialog@CScintillaView@@MAEPAVCScintillaFindReplaceDlg@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp