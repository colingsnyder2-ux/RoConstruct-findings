// roc 2011-06 008813d0  unit: CXTPMouseManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008813d0
//
// 008813d0  51                   push ecx
// 008813d1  56                   push esi
// 008813d2  8bf1                 mov esi, ecx
// 008813d4  8b4608               mov eax, dword ptr [esi + 8]
// 008813d7  57                   push edi
// 008813d8  33ff                 xor edi, edi
// 008813da  3bc7                 cmp eax, edi
// 008813dc  746a                 je 0x881448
// 008813de  53                   push ebx
// 008813df  8b1d2c02a400         mov ebx, dword ptr [0xa4022c]
// 008813e5  8d4c240c             lea ecx, [esp + 0xc]
// 008813e9  51                   push ecx
// 008813ea  50                   push eax
// 008813eb  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 008813f2  897c2414             mov dword ptr [esp + 0x14], edi
// 008813f6  ffd3                 call ebx
// 008813f8  85c0                 test eax, eax
// 008813fa  743a                 je 0x881436
// 008813fc  55                   push ebp
// 008813fd  8b2da803a400         mov ebp, dword ptr [0xa403a8]
// 00881403  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 0088140b  7528                 jne 0x881435
// 0088140d  8b5608               mov edx, dword ptr [esi + 8]
// 00881410  47                   inc edi
// 00881411  83ff0a               cmp edi, 0xa
// 00881414  7716                 ja 0x88142c
// 00881416  6a64                 push 0x64
// 00881418  52                   push edx
// 00881419  ffd5                 call ebp
// 0088141b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088141e  8d442410             lea eax, [esp + 0x10]
// 00881422  50                   push eax
// 00881423  51                   push ecx
// 00881424  ffd3                 call ebx
// 00881426  85c0                 test eax, eax
// 00881428  75d9                 jne 0x881403
// 0088142a  eb09                 jmp 0x881435
// 0088142c  6a00                 push 0
// 0088142e  52                   push edx
// 0088142f  ff153002a400         call dword ptr [0xa40230]
// 00881435  5d                   pop ebp
// 00881436  8b4608               mov eax, dword ptr [esi + 8]
// 00881439  50                   push eax
// 0088143a  ff157c03a400         call dword ptr [0xa4037c]
// 00881440  c7460800000000       mov dword ptr [esi + 8], 0
// 00881447  5b                   pop ebx
// 00881448  5f                   pop edi
// 00881449  5e                   pop esi
// 0088144a  59                   pop ecx
// 0088144b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
