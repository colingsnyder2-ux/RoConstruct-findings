// roc 2009-12 008be680  unit: CXTPDockingPaneContext  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008be680
//
// 008be680  6aff                 push -1
// 008be682  6898c59500           push 0x95c598
// 008be687  64a100000000         mov eax, dword ptr fs:[0]
// 008be68d  50                   push eax
// 008be68e  83ec1c               sub esp, 0x1c
// 008be691  53                   push ebx
// 008be692  55                   push ebp
// 008be693  56                   push esi
// 008be694  57                   push edi
// 008be695  a10052b600           mov eax, dword ptr [0xb65200]
// 008be69a  33c4                 xor eax, esp
// 008be69c  50                   push eax
// 008be69d  8d442430             lea eax, [esp + 0x30]
// 008be6a1  64a300000000         mov dword ptr fs:[0], eax
// 008be6a7  8bf9                 mov edi, ecx
// 008be6a9  6a0a                 push 0xa
// 008be6ab  8d4c2418             lea ecx, [esp + 0x18]
// 008be6af  e80cb0f7ff           call 0x8396c0
// 008be6b4  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 008be6ba  8b01                 mov eax, dword ptr [ecx]
// 008be6bc  8b400c               mov eax, dword ptr [eax + 0xc]
// 008be6bf  8d542414             lea edx, [esp + 0x14]
// 008be6c3  52                   push edx
// 008be6c4  6a00                 push 0
// 008be6c6  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008be6ce  ffd0                 call eax
// 008be6d0  8b742418             mov esi, dword ptr [esp + 0x18]
// 008be6d4  85f6                 test esi, esi
// 008be6d6  7432                 je 0x8be70a
// 008be6d8  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008be6dc  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008be6e0  8bc6                 mov eax, esi
// 008be6e2  8b4008               mov eax, dword ptr [eax + 8]
// 008be6e5  8b36                 mov esi, dword ptr [esi]
// 008be6e7  85c0                 test eax, eax
// 008be6e9  7405                 je 0x8be6f0
// 008be6eb  83c0e0               add eax, -0x20
// 008be6ee  eb02                 jmp 0x8be6f2
// 008be6f0  33c0                 xor eax, eax
// 008be6f2  8b8f1c010000         mov ecx, dword ptr [edi + 0x11c]
// 008be6f8  53                   push ebx
// 008be6f9  55                   push ebp
// 008be6fa  50                   push eax
// 008be6fb  6a04                 push 4
// 008be6fd  e81e9ef7ff           call 0x838520
// 008be702  85c0                 test eax, eax
// 008be704  7530                 jne 0x8be736
// 008be706  85f6                 test esi, esi
// 008be708  75d6                 jne 0x8be6e0
// 008be70a  8d4c2414             lea ecx, [esp + 0x14]
// 008be70e  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008be716  e8d5aff7ff           call 0x8396f0
// 008be71b  b801000000           mov eax, 1
// 008be720  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008be724  64890d00000000       mov dword ptr fs:[0], ecx
// 008be72b  59                   pop ecx
// 008be72c  5f                   pop edi
// 008be72d  5e                   pop esi
// 008be72e  5d                   pop ebp
// 008be72f  5b                   pop ebx
// 008be730  83c428               add esp, 0x28
// 008be733  c20800               ret 8
// 008be736  8d4c2414             lea ecx, [esp + 0x14]
// 008be73a  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008be742  e8a9aff7ff           call 0x8396f0
// 008be747  33c0                 xor eax, eax
// 008be749  ebd5                 jmp 0x8be720
// copied from an identical function in another client (function ?IsAllowDockingTo@CXTPDockingPaneContext@@IAEHPAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp