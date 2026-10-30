// from server: 100% by auto
// roc 2011-06 007dbf50  unit: seg_007d0000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dbf50
//
// 007dbf50  83ec1c               sub esp, 0x1c
// 007dbf53  53                   push ebx
// 007dbf54  55                   push ebp
// 007dbf55  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007dbf59  56                   push esi
// 007dbf5a  8bf0                 mov esi, eax
// 007dbf5c  8b4610               mov eax, dword ptr [esi + 0x10]
// 007dbf5f  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 007dbf62  57                   push edi
// 007dbf63  8b7e04               mov edi, dword ptr [esi + 4]
// 007dbf66  897c2410             mov dword ptr [esp + 0x10], edi
// 007dbf6a  83f828               cmp eax, 0x28
// 007dbf6d  745b                 je 0x7dbfca
// 007dbf6f  83f87b               cmp eax, 0x7b
// 007dbf72  7449                 je 0x7dbfbd
// 007dbf74  3d1e010000           cmp eax, 0x11e
// 007dbf79  7416                 je 0x7dbf91
// 007dbf7b  6898e2ab00           push 0xabe298
// 007dbf80  56                   push esi
// 007dbf81  e8ea2a0000           call 0x7dea70
// 007dbf86  83c408               add esp, 8
// 007dbf89  5f                   pop edi
// 007dbf8a  5e                   pop esi
// 007dbf8b  5d                   pop ebp
// 007dbf8c  5b                   pop ebx
// 007dbf8d  83c41c               add esp, 0x1c
// 007dbf90  c3                   ret 
// 007dbf91  8b4618               mov eax, dword ptr [esi + 0x18]
// 007dbf94  50                   push eax
// 007dbf95  53                   push ebx
// 007dbf96  e885640100           call 0x7f2420
// 007dbf9b  83c9ff               or ecx, 0xffffffff
// 007dbf9e  56                   push esi
// 007dbf9f  894c2430             mov dword ptr [esp + 0x30], ecx
// 007dbfa3  894c2434             mov dword ptr [esp + 0x34], ecx
// 007dbfa7  c744242004000000     mov dword ptr [esp + 0x20], 4
// 007dbfaf  89442428             mov dword ptr [esp + 0x28], eax
// 007dbfb3  e8683c0000           call 0x7dfc20
// 007dbfb8  83c40c               add esp, 0xc
// 007dbfbb  eb69                 jmp 0x7dc026
// 007dbfbd  8d442414             lea eax, [esp + 0x14]
// 007dbfc1  8bce                 mov ecx, esi
// 007dbfc3  e828faffff           call 0x7db9f0
// 007dbfc8  eb5c                 jmp 0x7dc026
// 007dbfca  3b7e08               cmp edi, dword ptr [esi + 8]
// 007dbfcd  740e                 je 0x7dbfdd
// 007dbfcf  6864e2ab00           push 0xabe264
// 007dbfd4  56                   push esi
// 007dbfd5  e8962a0000           call 0x7dea70
// 007dbfda  83c408               add esp, 8
// 007dbfdd  56                   push esi
// 007dbfde  e83d3c0000           call 0x7dfc20
// 007dbfe3  83c404               add esp, 4
// 007dbfe6  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 007dbfea  750a                 jne 0x7dbff6
// 007dbfec  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007dbff4  eb1b                 jmp 0x7dc011
// 007dbff6  8d7c2414             lea edi, [esp + 0x14]
// 007dbffa  e811ffffff           call 0x7dbf10
// 007dbfff  6aff                 push -1
// 007dc001  8bc7                 mov eax, edi
// 007dc003  50                   push eax
// 007dc004  53                   push ebx
// 007dc005  e8a6640100           call 0x7f24b0
// 007dc00a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007dc00e  83c40c               add esp, 0xc
// 007dc011  8bc7                 mov eax, edi
// 007dc013  6a28                 push 0x28
// 007dc015  bf29000000           mov edi, 0x29
// 007dc01a  e851efffff           call 0x7daf70
// 007dc01f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007dc023  83c404               add esp, 4
// 007dc026  8b442414             mov eax, dword ptr [esp + 0x14]
// 007dc02a  8b7508               mov esi, dword ptr [ebp + 8]
// 007dc02d  83f80d               cmp eax, 0xd
// 007dc030  741f                 je 0x7dc051
// 007dc032  83f80e               cmp eax, 0xe
// 007dc035  741a                 je 0x7dc051
// 007dc037  85c0                 test eax, eax
// 007dc039  740e                 je 0x7dc049
// 007dc03b  8d4c2414             lea ecx, [esp + 0x14]
// 007dc03f  51                   push ecx
// 007dc040  53                   push ebx
// 007dc041  e88a6d0100           call 0x7f2dd0
// 007dc046  83c408               add esp, 8
// 007dc049  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007dc04c  2bc6                 sub eax, esi
// 007dc04e  48                   dec eax
// 007dc04f  eb03                 jmp 0x7dc054
// 007dc051  83c8ff               or eax, 0xffffffff
// 007dc054  6a02                 push 2
// 007dc056  40                   inc eax
// 007dc057  50                   push eax
// 007dc058  56                   push esi
// 007dc059  6a1c                 push 0x1c
// 007dc05b  53                   push ebx
// 007dc05c  e84f670100           call 0x7f27b0
// 007dc061  83c9ff               or ecx, 0xffffffff
// 007dc064  57                   push edi
// 007dc065  53                   push ebx
// 007dc066  894d10               mov dword ptr [ebp + 0x10], ecx
// 007dc069  894d14               mov dword ptr [ebp + 0x14], ecx
// 007dc06c  c745000d000000       mov dword ptr [ebp], 0xd
// 007dc073  894508               mov dword ptr [ebp + 8], eax
// 007dc076  e875660100           call 0x7f26f0
// 007dc07b  83c41c               add esp, 0x1c
// 007dc07e  46                   inc esi
// 007dc07f  5f                   pop edi
// 007dc080  897324               mov dword ptr [ebx + 0x24], esi
// 007dc083  5e                   pop esi
// 007dc084  5d                   pop ebp
// 007dc085  5b                   pop ebx
// 007dc086  83c41c               add esp, 0x1c
// 007dc089  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
