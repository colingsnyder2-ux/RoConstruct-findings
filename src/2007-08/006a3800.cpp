// roc 2007-08 006a3800  unit: CXTPKeyboardManager  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3800
//
// 006a3800  83ec18               sub esp, 0x18
// 006a3803  56                   push esi
// 006a3804  8b742420             mov esi, dword ptr [esp + 0x20]
// 006a3808  56                   push esi
// 006a3809  ff15bced7700         call dword ptr [0x77edbc]
// 006a380f  85c0                 test eax, eax
// 006a3811  7532                 jne 0x6a3845
// 006a3813  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a3817  50                   push eax
// 006a3818  56                   push esi
// 006a3819  ff15e0ec7700         call dword ptr [0x77ece0]
// 006a381f  6880226300           push 0x632280
// 006a3824  b914938c00           mov ecx, 0x8c9314
// 006a3829  e83c4b0900           call 0x73836a
// 006a382e  85c0                 test eax, eax
// 006a3830  7505                 jne 0x6a3837
// 006a3832  e8e9c6f8ff           call 0x62ff20
// 006a3837  c7402400000000       mov dword ptr [eax + 0x24], 0
// 006a383e  5e                   pop esi
// 006a383f  83c418               add esp, 0x18
// 006a3842  c21000               ret 0x10
// 006a3845  57                   push edi
// 006a3846  8d4c2410             lea ecx, [esp + 0x10]
// 006a384a  51                   push ecx
// 006a384b  56                   push esi
// 006a384c  ff15d4ed7700         call dword ptr [0x77edd4]
// 006a3852  8d542408             lea edx, [esp + 8]
// 006a3856  52                   push edx
// 006a3857  ff1554ec7700         call dword ptr [0x77ec54]
// 006a385d  56                   push esi
// 006a385e  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006a3864  85c0                 test eax, eax
// 006a3866  741e                 je 0x6a3886
// 006a3868  6af0                 push -0x10
// 006a386a  56                   push esi
// 006a386b  ff1534ec7700         call dword ptr [0x77ec34]
// 006a3871  85c0                 test eax, eax
// 006a3873  7811                 js 0x6a3886
// 006a3875  56                   push esi
// 006a3876  e835ffffff           call 0x6a37b0
// 006a387b  83c404               add esp, 4
// 006a387e  85c0                 test eax, eax
// 006a3880  7504                 jne 0x6a3886
// 006a3882  33ff                 xor edi, edi
// 006a3884  eb05                 jmp 0x6a388b
// 006a3886  bf01000000           mov edi, 1
// 006a388b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a388f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a3893  50                   push eax
// 006a3894  51                   push ecx
// 006a3895  8d542418             lea edx, [esp + 0x18]
// 006a3899  52                   push edx
// 006a389a  ff1594ed7700         call dword ptr [0x77ed94]
// 006a38a0  85c0                 test eax, eax
// 006a38a2  7404                 je 0x6a38a8
// 006a38a4  85ff                 test edi, edi
// 006a38a6  753b                 jne 0x6a38e3
// 006a38a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a38ac  50                   push eax
// 006a38ad  56                   push esi
// 006a38ae  ff15e0ec7700         call dword ptr [0x77ece0]
// 006a38b4  6880226300           push 0x632280
// 006a38b9  b914938c00           mov ecx, 0x8c9314
// 006a38be  e8a74a0900           call 0x73836a
// 006a38c3  85c0                 test eax, eax
// 006a38c5  7505                 jne 0x6a38cc
// 006a38c7  e854c6f8ff           call 0x62ff20
// 006a38cc  6a00                 push 0
// 006a38ce  6a00                 push 0
// 006a38d0  68a3020000           push 0x2a3
// 006a38d5  56                   push esi
// 006a38d6  c7402400000000       mov dword ptr [eax + 0x24], 0
// 006a38dd  ff15d0ec7700         call dword ptr [0x77ecd0]
// 006a38e3  5f                   pop edi
// 006a38e4  5e                   pop esi
// 006a38e5  83c418               add esp, 0x18
// 006a38e8  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseTimerProc@CXTPMouseManager@@CGXPAUHWND__@@IIK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMouseManager.cpp
