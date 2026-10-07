// roc 2010-06 0077fad0  unit: seg_00770000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077fad0
//
// 0077fad0  83ec1c               sub esp, 0x1c
// 0077fad3  53                   push ebx
// 0077fad4  55                   push ebp
// 0077fad5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0077fad9  56                   push esi
// 0077fada  8bf0                 mov esi, eax
// 0077fadc  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077fadf  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0077fae2  57                   push edi
// 0077fae3  8b7e04               mov edi, dword ptr [esi + 4]
// 0077fae6  897c2410             mov dword ptr [esp + 0x10], edi
// 0077faea  83f828               cmp eax, 0x28
// 0077faed  745b                 je 0x77fb4a
// 0077faef  83f87b               cmp eax, 0x7b
// 0077faf2  7449                 je 0x77fb3d
// 0077faf4  3d1e010000           cmp eax, 0x11e
// 0077faf9  7416                 je 0x77fb11
// 0077fafb  68a431a500           push 0xa531a4
// 0077fb00  56                   push esi
// 0077fb01  e88a2a0000           call 0x782590
// 0077fb06  83c408               add esp, 8
// 0077fb09  5f                   pop edi
// 0077fb0a  5e                   pop esi
// 0077fb0b  5d                   pop ebp
// 0077fb0c  5b                   pop ebx
// 0077fb0d  83c41c               add esp, 0x1c
// 0077fb10  c3                   ret 
// 0077fb11  8b4618               mov eax, dword ptr [esi + 0x18]
// 0077fb14  50                   push eax
// 0077fb15  53                   push ebx
// 0077fb16  e8e5fc0000           call 0x78f800
// 0077fb1b  83c9ff               or ecx, 0xffffffff
// 0077fb1e  56                   push esi
// 0077fb1f  894c2430             mov dword ptr [esp + 0x30], ecx
// 0077fb23  894c2434             mov dword ptr [esp + 0x34], ecx
// 0077fb27  c744242004000000     mov dword ptr [esp + 0x20], 4
// 0077fb2f  89442428             mov dword ptr [esp + 0x28], eax
// 0077fb33  e8483e0000           call 0x783980
// 0077fb38  83c40c               add esp, 0xc
// 0077fb3b  eb69                 jmp 0x77fba6
// 0077fb3d  8d442414             lea eax, [esp + 0x14]
// 0077fb41  8bce                 mov ecx, esi
// 0077fb43  e848faffff           call 0x77f590
// 0077fb48  eb5c                 jmp 0x77fba6
// 0077fb4a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0077fb4d  740e                 je 0x77fb5d
// 0077fb4f  687031a500           push 0xa53170
// 0077fb54  56                   push esi
// 0077fb55  e8362a0000           call 0x782590
// 0077fb5a  83c408               add esp, 8
// 0077fb5d  56                   push esi
// 0077fb5e  e81d3e0000           call 0x783980
// 0077fb63  83c404               add esp, 4
// 0077fb66  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 0077fb6a  750a                 jne 0x77fb76
// 0077fb6c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0077fb74  eb1b                 jmp 0x77fb91
// 0077fb76  8d7c2414             lea edi, [esp + 0x14]
// 0077fb7a  e811ffffff           call 0x77fa90
// 0077fb7f  6aff                 push -1
// 0077fb81  8bc7                 mov eax, edi
// 0077fb83  50                   push eax
// 0077fb84  53                   push ebx
// 0077fb85  e8d6fc0000           call 0x78f860
// 0077fb8a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0077fb8e  83c40c               add esp, 0xc
// 0077fb91  8bc7                 mov eax, edi
// 0077fb93  6a28                 push 0x28
// 0077fb95  bf29000000           mov edi, 0x29
// 0077fb9a  e891efffff           call 0x77eb30
// 0077fb9f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077fba3  83c404               add esp, 4
// 0077fba6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077fbaa  8b7508               mov esi, dword ptr [ebp + 8]
// 0077fbad  83f80d               cmp eax, 0xd
// 0077fbb0  741f                 je 0x77fbd1
// 0077fbb2  83f80e               cmp eax, 0xe
// 0077fbb5  741a                 je 0x77fbd1
// 0077fbb7  85c0                 test eax, eax
// 0077fbb9  740e                 je 0x77fbc9
// 0077fbbb  8d4c2414             lea ecx, [esp + 0x14]
// 0077fbbf  51                   push ecx
// 0077fbc0  53                   push ebx
// 0077fbc1  e8aa050100           call 0x790170
// 0077fbc6  83c408               add esp, 8
// 0077fbc9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0077fbcc  2bc6                 sub eax, esi
// 0077fbce  48                   dec eax
// 0077fbcf  eb03                 jmp 0x77fbd4
// 0077fbd1  83c8ff               or eax, 0xffffffff
// 0077fbd4  6a02                 push 2
// 0077fbd6  40                   inc eax
// 0077fbd7  50                   push eax
// 0077fbd8  56                   push esi
// 0077fbd9  6a1c                 push 0x1c
// 0077fbdb  53                   push ebx
// 0077fbdc  e87fff0000           call 0x78fb60
// 0077fbe1  83c9ff               or ecx, 0xffffffff
// 0077fbe4  57                   push edi
// 0077fbe5  53                   push ebx
// 0077fbe6  894d10               mov dword ptr [ebp + 0x10], ecx
// 0077fbe9  894d14               mov dword ptr [ebp + 0x14], ecx
// 0077fbec  c745000d000000       mov dword ptr [ebp], 0xd
// 0077fbf3  894508               mov dword ptr [ebp + 8], eax
// 0077fbf6  e8a5fe0000           call 0x78faa0
// 0077fbfb  83c41c               add esp, 0x1c
// 0077fbfe  46                   inc esi
// 0077fbff  5f                   pop edi
// 0077fc00  897324               mov dword ptr [ebx + 0x24], esi
// 0077fc03  5e                   pop esi
// 0077fc04  5d                   pop ebp
// 0077fc05  5b                   pop ebx
// 0077fc06  83c41c               add esp, 0x1c
// 0077fc09  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
