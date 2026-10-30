// roc 2009-12 008392d0  unit: CXTPDockingPaneManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008392d0
//
// 008392d0  8b442404             mov eax, dword ptr [esp + 4]
// 008392d4  83ec2c               sub esp, 0x2c
// 008392d7  56                   push esi
// 008392d8  85c0                 test eax, eax
// 008392da  740d                 je 0x8392e9
// 008392dc  8b10                 mov edx, dword ptr [eax]
// 008392de  8bc8                 mov ecx, eax
// 008392e0  8b4218               mov eax, dword ptr [edx + 0x18]
// 008392e3  ffd0                 call eax
// 008392e5  8bf0                 mov esi, eax
// 008392e7  eb06                 jmp 0x8392ef
// 008392e9  8bb1cc000000         mov esi, dword ptr [ecx + 0xcc]
// 008392ef  85f6                 test esi, esi
// 008392f1  0f84e6000000         je 0x8393dd
// 008392f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008392fa  50                   push eax
// 008392fb  ff1584cc9800         call dword ptr [0x98cc84]
// 00839301  85c0                 test eax, eax
// 00839303  0f84d4000000         je 0x8393dd
// 00839309  8b16                 mov edx, dword ptr [esi]
// 0083930b  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 00839311  8bce                 mov ecx, esi
// 00839313  ffd0                 call eax
// 00839315  f7d8                 neg eax
// 00839317  1bc0                 sbb eax, eax
// 00839319  23c6                 and eax, esi
// 0083931b  743b                 je 0x839358
// 0083931d  837c243800           cmp dword ptr [esp + 0x38], 0
// 00839322  6a00                 push 0
// 00839324  741f                 je 0x839345
// 00839326  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00839329  8388e400000008       or dword ptr [eax + 0xe4], 8
// 00839330  6a00                 push 0
// 00839332  6863030000           push 0x363
// 00839337  51                   push ecx
// 00839338  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0083933e  5e                   pop esi
// 0083933f  83c42c               add esp, 0x2c
// 00839342  c20800               ret 8
// 00839345  8b10                 mov edx, dword ptr [eax]
// 00839347  8bc8                 mov ecx, eax
// 00839349  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0083934f  ffd0                 call eax
// 00839351  5e                   pop esi
// 00839352  83c42c               add esp, 0x2c
// 00839355  c20800               ret 8
// 00839358  56                   push esi
// 00839359  8d4c2408             lea ecx, [esp + 8]
// 0083935d  e86e1f0100           call 0x84b2d0
// 00839362  837c243800           cmp dword ptr [esp + 0x38], 0
// 00839367  744a                 je 0x8393b3
// 00839369  8b4620               mov eax, dword ptr [esi + 0x20]
// 0083936c  6a00                 push 0
// 0083936e  6a05                 push 5
// 00839370  6a05                 push 5
// 00839372  50                   push eax
// 00839373  8d4c2424             lea ecx, [esp + 0x24]
// 00839377  51                   push ecx
// 00839378  ff1524cc9800         call dword ptr [0x98cc24]
// 0083937e  85c0                 test eax, eax
// 00839380  755b                 jne 0x8393dd
// 00839382  8b542410             mov edx, dword ptr [esp + 0x10]
// 00839386  2b542408             sub edx, dword ptr [esp + 8]
// 0083938a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083938e  2b4c2404             sub ecx, dword ptr [esp + 4]
// 00839392  0fb7c2               movzx eax, dx
// 00839395  0fb7d1               movzx edx, cx
// 00839398  c1e010               shl eax, 0x10
// 0083939b  0bc2                 or eax, edx
// 0083939d  50                   push eax
// 0083939e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008393a1  6a00                 push 0
// 008393a3  6a05                 push 5
// 008393a5  50                   push eax
// 008393a6  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008393ac  5e                   pop esi
// 008393ad  83c42c               add esp, 0x2c
// 008393b0  c20800               ret 8
// 008393b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008393b7  2b4c2408             sub ecx, dword ptr [esp + 8]
// 008393bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008393bf  2b442404             sub eax, dword ptr [esp + 4]
// 008393c3  0fb7d1               movzx edx, cx
// 008393c6  0fb7c8               movzx ecx, ax
// 008393c9  c1e210               shl edx, 0x10
// 008393cc  0bd1                 or edx, ecx
// 008393ce  52                   push edx
// 008393cf  8b5620               mov edx, dword ptr [esi + 0x20]
// 008393d2  6a00                 push 0
// 008393d4  6a05                 push 5
// 008393d6  52                   push edx
// 008393d7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008393dd  5e                   pop esi
// 008393de  83c42c               add esp, 0x2c
// 008393e1  c20800               ret 8
// copied from an identical function in another client (function ?RecalcFrameLayout@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp