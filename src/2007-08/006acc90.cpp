// from server: 100% by auto
// roc 2007-08 006acc90  unit: CXTPRibbonBar  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006acc90
//
// 006acc90  51                   push ecx
// 006acc91  56                   push esi
// 006acc92  8bf1                 mov esi, ecx
// 006acc94  8b4608               mov eax, dword ptr [esi + 8]
// 006acc97  57                   push edi
// 006acc98  33ff                 xor edi, edi
// 006acc9a  3bc7                 cmp eax, edi
// 006acc9c  746c                 je 0x6acd0a
// 006acc9e  53                   push ebx
// 006acc9f  8b1d90d17700         mov ebx, dword ptr [0x77d190]
// 006acca5  8d4c240c             lea ecx, [esp + 0xc]
// 006acca9  51                   push ecx
// 006accaa  50                   push eax
// 006accab  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 006accb2  897c2414             mov dword ptr [esp + 0x14], edi
// 006accb6  ffd3                 call ebx
// 006accb8  85c0                 test eax, eax
// 006accba  743c                 je 0x6accf8
// 006accbc  55                   push ebp
// 006accbd  8b2db4d27700         mov ebp, dword ptr [0x77d2b4]
// 006accc3  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 006acccb  752a                 jne 0x6accf7
// 006acccd  8b5608               mov edx, dword ptr [esi + 8]
// 006accd0  83c701               add edi, 1
// 006accd3  83ff0a               cmp edi, 0xa
// 006accd6  7716                 ja 0x6accee
// 006accd8  6a64                 push 0x64
// 006accda  52                   push edx
// 006accdb  ffd5                 call ebp
// 006accdd  8b4e08               mov ecx, dword ptr [esi + 8]
// 006acce0  8d442410             lea eax, [esp + 0x10]
// 006acce4  50                   push eax
// 006acce5  51                   push ecx
// 006acce6  ffd3                 call ebx
// 006acce8  85c0                 test eax, eax
// 006accea  75d7                 jne 0x6accc3
// 006accec  eb09                 jmp 0x6accf7
// 006accee  6a00                 push 0
// 006accf0  52                   push edx
// 006accf1  ff1594d17700         call dword ptr [0x77d194]
// 006accf7  5d                   pop ebp
// 006accf8  8b4608               mov eax, dword ptr [esi + 8]
// 006accfb  50                   push eax
// 006accfc  ff153cd27700         call dword ptr [0x77d23c]
// 006acd02  c7460800000000       mov dword ptr [esi + 8], 0
// 006acd09  5b                   pop ebx
// 006acd0a  5f                   pop edi
// 006acd0b  5e                   pop esi
// 006acd0c  59                   pop ecx
// 006acd0d  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
