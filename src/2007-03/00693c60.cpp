// roc 2007-03 00693c60  unit: seg_00690000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693c60
//
// 00693c60  51                   push ecx
// 00693c61  56                   push esi
// 00693c62  8bf1                 mov esi, ecx
// 00693c64  8b4608               mov eax, dword ptr [esi + 8]
// 00693c67  57                   push edi
// 00693c68  33ff                 xor edi, edi
// 00693c6a  3bc7                 cmp eax, edi
// 00693c6c  746c                 je 0x693cda
// 00693c6e  53                   push ebx
// 00693c6f  8b1d0cd37700         mov ebx, dword ptr [0x77d30c]
// 00693c75  8d4c240c             lea ecx, [esp + 0xc]
// 00693c79  51                   push ecx
// 00693c7a  50                   push eax
// 00693c7b  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00693c82  897c2414             mov dword ptr [esp + 0x14], edi
// 00693c86  ffd3                 call ebx
// 00693c88  85c0                 test eax, eax
// 00693c8a  743c                 je 0x693cc8
// 00693c8c  55                   push ebp
// 00693c8d  8b2d74d27700         mov ebp, dword ptr [0x77d274]
// 00693c93  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 00693c9b  752a                 jne 0x693cc7
// 00693c9d  8b5608               mov edx, dword ptr [esi + 8]
// 00693ca0  83c701               add edi, 1
// 00693ca3  83ff0a               cmp edi, 0xa
// 00693ca6  7716                 ja 0x693cbe
// 00693ca8  6a64                 push 0x64
// 00693caa  52                   push edx
// 00693cab  ffd5                 call ebp
// 00693cad  8b4e08               mov ecx, dword ptr [esi + 8]
// 00693cb0  8d442410             lea eax, [esp + 0x10]
// 00693cb4  50                   push eax
// 00693cb5  51                   push ecx
// 00693cb6  ffd3                 call ebx
// 00693cb8  85c0                 test eax, eax
// 00693cba  75d7                 jne 0x693c93
// 00693cbc  eb09                 jmp 0x693cc7
// 00693cbe  6a00                 push 0
// 00693cc0  52                   push edx
// 00693cc1  ff1508d37700         call dword ptr [0x77d308]
// 00693cc7  5d                   pop ebp
// 00693cc8  8b4608               mov eax, dword ptr [esi + 8]
// 00693ccb  50                   push eax
// 00693ccc  ff15fcd17700         call dword ptr [0x77d1fc]
// 00693cd2  c7460800000000       mov dword ptr [esi + 8], 0
// 00693cd9  5b                   pop ebx
// 00693cda  5f                   pop edi
// 00693cdb  5e                   pop esi
// 00693cdc  59                   pop ecx
// 00693cdd  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
