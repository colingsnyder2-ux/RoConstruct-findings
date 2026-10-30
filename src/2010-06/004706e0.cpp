// roc 2010-06 004706e0  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004706e0
//
// 004706e0  6aff                 push -1
// 004706e2  68da209800           push 0x9820da
// 004706e7  64a100000000         mov eax, dword ptr fs:[0]
// 004706ed  50                   push eax
// 004706ee  64892500000000       mov dword ptr fs:[0], esp
// 004706f5  51                   push ecx
// 004706f6  56                   push esi
// 004706f7  68a0010000           push 0x1a0
// 004706fc  e89f723300           call 0x7a79a0
// 00470701  8bf0                 mov esi, eax
// 00470703  83c404               add esp, 4
// 00470706  89742404             mov dword ptr [esp + 4], esi
// 0047070a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00470712  85f6                 test esi, esi
// 00470714  7429                 je 0x47073f
// 00470716  8bce                 mov ecx, esi
// 00470718  e87d813300           call 0x7a889a
// 0047071d  c706c408a100         mov dword ptr [esi], 0xa108c4
// 00470723  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0047072d  8bc6                 mov eax, esi
// 0047072f  5e                   pop esi
// 00470730  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00470734  64890d00000000       mov dword ptr fs:[0], ecx
// 0047073b  83c410               add esp, 0x10
// 0047073e  c3                   ret 
// 0047073f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00470743  33c0                 xor eax, eax
// 00470745  5e                   pop esi
// 00470746  64890d00000000       mov dword ptr fs:[0], ecx
// 0047074d  83c410               add esp, 0x10
// 00470750  c3                   ret 
// copied from an identical function in another client (function ?CreateFindReplaceDialog@CScintillaView@@MAEPAVCScintillaFindReplaceDlg@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp