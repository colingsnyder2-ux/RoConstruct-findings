// roc 2009-12 0046cbd0  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046cbd0
//
// 0046cbd0  6aff                 push -1
// 0046cbd2  683a7c9200           push 0x927c3a
// 0046cbd7  64a100000000         mov eax, dword ptr fs:[0]
// 0046cbdd  50                   push eax
// 0046cbde  64892500000000       mov dword ptr fs:[0], esp
// 0046cbe5  51                   push ecx
// 0046cbe6  56                   push esi
// 0046cbe7  68a0010000           push 0x1a0
// 0046cbec  e86f6c3800           call 0x7f3860
// 0046cbf1  8bf0                 mov esi, eax
// 0046cbf3  83c404               add esp, 4
// 0046cbf6  89742404             mov dword ptr [esp + 4], esi
// 0046cbfa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046cc02  85f6                 test esi, esi
// 0046cc04  7429                 je 0x46cc2f
// 0046cc06  8bce                 mov ecx, esi
// 0046cc08  e8537b3800           call 0x7f4760
// 0046cc0d  c70654fc9a00         mov dword ptr [esi], 0x9afc54
// 0046cc13  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0046cc1d  8bc6                 mov eax, esi
// 0046cc1f  5e                   pop esi
// 0046cc20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046cc24  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cc2b  83c410               add esp, 0x10
// 0046cc2e  c3                   ret 
// 0046cc2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046cc33  33c0                 xor eax, eax
// 0046cc35  5e                   pop esi
// 0046cc36  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cc3d  83c410               add esp, 0x10
// 0046cc40  c3                   ret 
// copied from an identical function in another client (function ?CreateFindReplaceDialog@CScintillaView@@MAEPAVCScintillaFindReplaceDlg@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp