// roc 2012-06 0049fd00  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049fd00
//
// 0049fd00  6aff                 push -1
// 0049fd02  686a21aa00           push 0xaa216a
// 0049fd07  64a100000000         mov eax, dword ptr fs:[0]
// 0049fd0d  50                   push eax
// 0049fd0e  64892500000000       mov dword ptr fs:[0], esp
// 0049fd15  51                   push ecx
// 0049fd16  56                   push esi
// 0049fd17  68a0010000           push 0x1a0
// 0049fd1c  e8f9234e00           call 0x98211a
// 0049fd21  8bf0                 mov esi, eax
// 0049fd23  83c404               add esp, 4
// 0049fd26  89742404             mov dword ptr [esp + 4], esi
// 0049fd2a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049fd32  85f6                 test esi, esi
// 0049fd34  7429                 je 0x49fd5f
// 0049fd36  8bce                 mov ecx, esi
// 0049fd38  e8e3324e00           call 0x983020
// 0049fd3d  c7061402b600         mov dword ptr [esi], 0xb60214
// 0049fd43  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0049fd4d  8bc6                 mov eax, esi
// 0049fd4f  5e                   pop esi
// 0049fd50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049fd54  64890d00000000       mov dword ptr fs:[0], ecx
// 0049fd5b  83c410               add esp, 0x10
// 0049fd5e  c3                   ret 
// 0049fd5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049fd63  33c0                 xor eax, eax
// 0049fd65  5e                   pop esi
// 0049fd66  64890d00000000       mov dword ptr fs:[0], ecx
// 0049fd6d  83c410               add esp, 0x10
// 0049fd70  c3                   ret 
// copied from an identical function in another client (function ?CreateFindReplaceDialog@CScintillaView@@MAEPAVCScintillaFindReplaceDlg@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp