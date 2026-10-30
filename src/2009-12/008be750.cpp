// roc 2009-12 008be750  unit: CXTPDockingPaneContext  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008be750
//
// 008be750  6aff                 push -1
// 008be752  68983c9600           push 0x963c98
// 008be757  64a100000000         mov eax, dword ptr fs:[0]
// 008be75d  50                   push eax
// 008be75e  83ec1c               sub esp, 0x1c
// 008be761  53                   push ebx
// 008be762  56                   push esi
// 008be763  57                   push edi
// 008be764  a10052b600           mov eax, dword ptr [0xb65200]
// 008be769  33c4                 xor eax, esp
// 008be76b  50                   push eax
// 008be76c  8d44242c             lea eax, [esp + 0x2c]
// 008be770  64a300000000         mov dword ptr fs:[0], eax
// 008be776  8bf9                 mov edi, ecx
// 008be778  6a0a                 push 0xa
// 008be77a  8d4c2414             lea ecx, [esp + 0x14]
// 008be77e  e83daff7ff           call 0x8396c0
// 008be783  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 008be789  8b01                 mov eax, dword ptr [ecx]
// 008be78b  8b400c               mov eax, dword ptr [eax + 0xc]
// 008be78e  8d542410             lea edx, [esp + 0x10]
// 008be792  52                   push edx
// 008be793  6a00                 push 0
// 008be795  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008be79d  ffd0                 call eax
// 008be79f  8b742414             mov esi, dword ptr [esp + 0x14]
// 008be7a3  85f6                 test esi, esi
// 008be7a5  7434                 je 0x8be7db
// 008be7a7  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008be7ab  eb03                 jmp 0x8be7b0
// 008be7ad  8d4900               lea ecx, [ecx]
// 008be7b0  8bc6                 mov eax, esi
// 008be7b2  8b4008               mov eax, dword ptr [eax + 8]
// 008be7b5  8b36                 mov esi, dword ptr [esi]
// 008be7b7  85c0                 test eax, eax
// 008be7b9  7405                 je 0x8be7c0
// 008be7bb  83c0e0               add eax, -0x20
// 008be7be  eb02                 jmp 0x8be7c2
// 008be7c0  33c0                 xor eax, eax
// 008be7c2  8b8f1c010000         mov ecx, dword ptr [edi + 0x11c]
// 008be7c8  6a00                 push 0
// 008be7ca  53                   push ebx
// 008be7cb  50                   push eax
// 008be7cc  6a06                 push 6
// 008be7ce  e84d9df7ff           call 0x838520
// 008be7d3  85c0                 test eax, eax
// 008be7d5  752f                 jne 0x8be806
// 008be7d7  85f6                 test esi, esi
// 008be7d9  75d5                 jne 0x8be7b0
// 008be7db  8d4c2410             lea ecx, [esp + 0x10]
// 008be7df  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008be7e7  e804aff7ff           call 0x8396f0
// 008be7ec  b801000000           mov eax, 1
// 008be7f1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be7f5  64890d00000000       mov dword ptr fs:[0], ecx
// 008be7fc  59                   pop ecx
// 008be7fd  5f                   pop edi
// 008be7fe  5e                   pop esi
// 008be7ff  5b                   pop ebx
// 008be800  83c428               add esp, 0x28
// 008be803  c20400               ret 4
// 008be806  8d4c2410             lea ecx, [esp + 0x10]
// 008be80a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008be812  e8d9aef7ff           call 0x8396f0
// 008be817  33c0                 xor eax, eax
// 008be819  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be81d  64890d00000000       mov dword ptr fs:[0], ecx
// 008be824  59                   pop ecx
// 008be825  5f                   pop edi
// 008be826  5e                   pop esi
// 008be827  5b                   pop ebx
// 008be828  83c428               add esp, 0x28
// 008be82b  c20400               ret 4
// copied from an identical function in another client (function ?IsAllowAttachTo@CXTPDockingPaneContext@@IAEHPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp