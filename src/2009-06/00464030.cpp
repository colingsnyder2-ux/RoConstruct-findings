// roc 2009-06 00464030  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464030
//
// 00464030  6aff                 push -1
// 00464032  687aef8400           push 0x84ef7a
// 00464037  64a100000000         mov eax, dword ptr fs:[0]
// 0046403d  50                   push eax
// 0046403e  64892500000000       mov dword ptr fs:[0], esp
// 00464045  51                   push ecx
// 00464046  56                   push esi
// 00464047  68a0010000           push 0x1a0
// 0046404c  e8e7492b00           call 0x718a38
// 00464051  8bf0                 mov esi, eax
// 00464053  83c404               add esp, 4
// 00464056  89742404             mov dword ptr [esp + 4], esi
// 0046405a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00464062  85f6                 test esi, esi
// 00464064  7429                 je 0x46408f
// 00464066  8bce                 mov ecx, esi
// 00464068  e8bf582b00           call 0x71992c
// 0046406d  c706a4b68b00         mov dword ptr [esi], 0x8bb6a4
// 00464073  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0046407d  8bc6                 mov eax, esi
// 0046407f  5e                   pop esi
// 00464080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00464084  64890d00000000       mov dword ptr fs:[0], ecx
// 0046408b  83c410               add esp, 0x10
// 0046408e  c3                   ret 
// 0046408f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00464093  33c0                 xor eax, eax
// 00464095  5e                   pop esi
// 00464096  64890d00000000       mov dword ptr fs:[0], ecx
// 0046409d  83c410               add esp, 0x10
// 004640a0  c3                   ret 
// copied from an identical function in another client (function ?CreateFindReplaceDialog@CScintillaView@@MAEPAVCScintillaFindReplaceDlg@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp