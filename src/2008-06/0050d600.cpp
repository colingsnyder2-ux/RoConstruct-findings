// from server: 100% by auto
// roc 2008-06 0050d600  unit: G3D::Log  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050d600
//
// 0050d600  6aff                 push -1
// 0050d602  6809e77c00           push 0x7ce709
// 0050d607  64a100000000         mov eax, dword ptr fs:[0]
// 0050d60d  50                   push eax
// 0050d60e  64892500000000       mov dword ptr fs:[0], esp
// 0050d615  83ec1c               sub esp, 0x1c
// 0050d618  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0050d61c  56                   push esi
// 0050d61d  50                   push eax
// 0050d61e  8d4c2408             lea ecx, [esp + 8]
// 0050d622  51                   push ecx
// 0050d623  e8e84b0000           call 0x512210
// 0050d628  8b356c238000         mov esi, dword ptr [0x80236c]
// 0050d62e  8d54240c             lea edx, [esp + 0xc]
// 0050d632  68346b8200           push 0x826b34
// 0050d637  52                   push edx
// 0050d638  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0050d640  ffd6                 call esi
// 0050d642  83c410               add esp, 0x10
// 0050d645  84c0                 test al, al
// 0050d647  0f858a010000         jne 0x50d7d7
// 0050d64d  8d442404             lea eax, [esp + 4]
// 0050d651  68c4808200           push 0x8280c4
// 0050d656  50                   push eax
// 0050d657  ffd6                 call esi
// 0050d659  83c408               add esp, 8
// 0050d65c  84c0                 test al, al
// 0050d65e  0f8573010000         jne 0x50d7d7
// 0050d664  8d4c2404             lea ecx, [esp + 4]
// 0050d668  682c6b8200           push 0x826b2c
// 0050d66d  51                   push ecx
// 0050d66e  ffd6                 call esi
// 0050d670  83c408               add esp, 8
// 0050d673  84c0                 test al, al
// 0050d675  7427                 je 0x50d69e
// 0050d677  8d4c2404             lea ecx, [esp + 4]
// 0050d67b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d683  ff1568248000         call dword ptr [0x802468]
// 0050d689  b802000000           mov eax, 2
// 0050d68e  5e                   pop esi
// 0050d68f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d693  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d69a  83c428               add esp, 0x28
// 0050d69d  c3                   ret 
// 0050d69e  8d542404             lea edx, [esp + 4]
// 0050d6a2  68306b8200           push 0x826b30
// 0050d6a7  52                   push edx
// 0050d6a8  ffd6                 call esi
// 0050d6aa  83c408               add esp, 8
// 0050d6ad  84c0                 test al, al
// 0050d6af  7427                 je 0x50d6d8
// 0050d6b1  8d4c2404             lea ecx, [esp + 4]
// 0050d6b5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d6bd  ff1568248000         call dword ptr [0x802468]
// 0050d6c3  b801000000           mov eax, 1
// 0050d6c8  5e                   pop esi
// 0050d6c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d6cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d6d4  83c428               add esp, 0x28
// 0050d6d7  c3                   ret 
// 0050d6d8  8d442404             lea eax, [esp + 4]
// 0050d6dc  68286b8200           push 0x826b28
// 0050d6e1  50                   push eax
// 0050d6e2  ffd6                 call esi
// 0050d6e4  83c408               add esp, 8
// 0050d6e7  8d4c2404             lea ecx, [esp + 4]
// 0050d6eb  84c0                 test al, al
// 0050d6ed  7423                 je 0x50d712
// 0050d6ef  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d6f7  ff1568248000         call dword ptr [0x802468]
// 0050d6fd  b803000000           mov eax, 3
// 0050d702  5e                   pop esi
// 0050d703  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d707  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d70e  83c428               add esp, 0x28
// 0050d711  c3                   ret 
// 0050d712  68246b8200           push 0x826b24
// 0050d717  51                   push ecx
// 0050d718  ffd6                 call esi
// 0050d71a  83c408               add esp, 8
// 0050d71d  84c0                 test al, al
// 0050d71f  7427                 je 0x50d748
// 0050d721  8d4c2404             lea ecx, [esp + 4]
// 0050d725  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d72d  ff1568248000         call dword ptr [0x802468]
// 0050d733  b804000000           mov eax, 4
// 0050d738  5e                   pop esi
// 0050d739  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d73d  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d744  83c428               add esp, 0x28
// 0050d747  c3                   ret 
// 0050d748  8d542404             lea edx, [esp + 4]
// 0050d74c  68400c8100           push 0x810c40
// 0050d751  52                   push edx
// 0050d752  ffd6                 call esi
// 0050d754  83c408               add esp, 8
// 0050d757  84c0                 test al, al
// 0050d759  7427                 je 0x50d782
// 0050d75b  8d4c2404             lea ecx, [esp + 4]
// 0050d75f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d767  ff1568248000         call dword ptr [0x802468]
// 0050d76d  b805000000           mov eax, 5
// 0050d772  5e                   pop esi
// 0050d773  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d777  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d77e  83c428               add esp, 0x28
// 0050d781  c3                   ret 
// 0050d782  8d442404             lea eax, [esp + 4]
// 0050d786  68206b8200           push 0x826b20
// 0050d78b  50                   push eax
// 0050d78c  ffd6                 call esi
// 0050d78e  83c408               add esp, 8
// 0050d791  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d799  8d4c2404             lea ecx, [esp + 4]
// 0050d79d  84c0                 test al, al
// 0050d79f  741b                 je 0x50d7bc
// 0050d7a1  ff1568248000         call dword ptr [0x802468]
// 0050d7a7  b807000000           mov eax, 7
// 0050d7ac  5e                   pop esi
// 0050d7ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d7b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d7b8  83c428               add esp, 0x28
// 0050d7bb  c3                   ret 
// 0050d7bc  ff1568248000         call dword ptr [0x802468]
// 0050d7c2  b809000000           mov eax, 9
// 0050d7c7  5e                   pop esi
// 0050d7c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d7cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d7d3  83c428               add esp, 0x28
// 0050d7d6  c3                   ret 
// 0050d7d7  8d4c2404             lea ecx, [esp + 4]
// 0050d7db  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050d7e3  ff1568248000         call dword ptr [0x802468]
// 0050d7e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050d7ed  33c0                 xor eax, eax
// 0050d7ef  5e                   pop esi
// 0050d7f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d7f7  83c428               add esp, 0x28
// 0050d7fa  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?stringToFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
