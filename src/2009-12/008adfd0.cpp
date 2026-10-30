// roc 2009-12 008adfd0  unit: CXTPDockingPaneKeyboardHook  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008adfd0
//
// 008adfd0  53                   push ebx
// 008adfd1  55                   push ebp
// 008adfd2  56                   push esi
// 008adfd3  57                   push edi
// 008adfd4  8be9                 mov ebp, ecx
// 008adfd6  ff15eccb9800         call dword ptr [0x98cbec]
// 008adfdc  8bf0                 mov esi, eax
// 008adfde  85f6                 test esi, esi
// 008adfe0  742d                 je 0x8ae00f
// 008adfe2  8b1dd8c99800         mov ebx, dword ptr [0x98c9d8]
// 008adfe8  56                   push esi
// 008adfe9  8bcd                 mov ecx, ebp
// 008adfeb  e8a0ffffff           call 0x8adf90
// 008adff0  8bf8                 mov edi, eax
// 008adff2  85ff                 test edi, edi
// 008adff4  7520                 jne 0x8ae016
// 008adff6  6af0                 push -0x10
// 008adff8  56                   push esi
// 008adff9  ffd3                 call ebx
// 008adffb  a900000040           test eax, 0x40000000
// 008ae000  742a                 je 0x8ae02c
// 008ae002  56                   push esi
// 008ae003  ff15bccb9800         call dword ptr [0x98cbbc]
// 008ae009  8bf0                 mov esi, eax
// 008ae00b  85f6                 test esi, esi
// 008ae00d  75d9                 jne 0x8adfe8
// 008ae00f  5f                   pop edi
// 008ae010  5e                   pop esi
// 008ae011  5d                   pop ebp
// 008ae012  33c0                 xor eax, eax
// 008ae014  5b                   pop ebx
// 008ae015  c3                   ret 
// 008ae016  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 008ae01c  e885860700           call 0x9266a6
// 008ae021  f7d8                 neg eax
// 008ae023  1bc0                 sbb eax, eax
// 008ae025  23c7                 and eax, edi
// 008ae027  5f                   pop edi
// 008ae028  5e                   pop esi
// 008ae029  5d                   pop ebp
// 008ae02a  5b                   pop ebx
// 008ae02b  c3                   ret 
// 008ae02c  6aec                 push -0x14
// 008ae02e  56                   push esi
// 008ae02f  ffd3                 call ebx
// 008ae031  84c0                 test al, al
// 008ae033  79da                 jns 0x8ae00f
// 008ae035  56                   push esi
// 008ae036  e8ef5af4ff           call 0x7f3b2a
// 008ae03b  50                   push eax
// 008ae03c  e87f040000           call 0x8ae4c0
// 008ae041  50                   push eax
// 008ae042  e8f75bf4ff           call 0x7f3c3e
// 008ae047  83c408               add esp, 8
// 008ae04a  85c0                 test eax, eax
// 008ae04c  74c1                 je 0x8ae00f
// 008ae04e  5f                   pop edi
// 008ae04f  5e                   pop esi
// 008ae050  5d                   pop ebp
// 008ae051  8d88f8000000         lea ecx, [eax + 0xf8]
// 008ae057  5b                   pop ebx
// 008ae058  e9e3270000           jmp 0x8b0840
// copied from an identical function in another client (function ?FindFocusedManager@CXTPDockingPaneKeyboardHook@@QAEPAVCXTPDockingPaneManager@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp