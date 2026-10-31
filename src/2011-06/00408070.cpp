// roc 2011-06 00408070  unit: VCApp::?$CComContainedObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00408070
//
// 00408070  55                   push ebp
// 00408071  8bec                 mov ebp, esp
// 00408073  81ec40090000         sub esp, 0x940
// 00408079  53                   push ebx
// 0040807a  33db                 xor ebx, ebx
// 0040807c  56                   push esi
// 0040807d  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00408080  57                   push edi
// 00408081  c745ecf0baa500       mov dword ptr [ebp - 0x14], 0xa5baf0
// 00408088  895df0               mov dword ptr [ebp - 0x10], ebx
// 0040808b  895df4               mov dword ptr [ebp - 0xc], ebx
// 0040808e  895df8               mov dword ptr [ebp - 8], ebx
// 00408091  3bf3                 cmp esi, ebx
// 00408093  7423                 je 0x4080b8
// 00408095  8b06                 mov eax, dword ptr [esi]
// 00408097  3bc3                 cmp eax, ebx
// 00408099  741d                 je 0x4080b8
// 0040809b  eb03                 jmp 0x4080a0
// 0040809d  8d4900               lea ecx, [ecx]
// 004080a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004080a3  51                   push ecx
// 004080a4  50                   push eax
// 004080a5  8d55ec               lea edx, [ebp - 0x14]
// 004080a8  52                   push edx
// 004080a9  e832d9ffff           call 0x4059e0
// 004080ae  8b4608               mov eax, dword ptr [esi + 8]
// 004080b1  83c608               add esi, 8
// 004080b4  3bc3                 cmp eax, ebx
// 004080b6  75e8                 jne 0x4080a0
// 004080b8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004080bb  8b01                 mov eax, dword ptr [ecx]
// 004080bd  8b4014               mov eax, dword ptr [eax + 0x14]
// 004080c0  8d55ec               lea edx, [ebp - 0x14]
// 004080c3  52                   push edx
// 004080c4  ffd0                 call eax
// 004080c6  8bf0                 mov esi, eax
// 004080c8  3bf3                 cmp esi, ebx
// 004080ca  0f8c09020000         jl 0x4082d9
// 004080d0  8b3d3c93d100         mov edi, dword ptr [0xd1933c]
// 004080d6  6804010000           push 0x104
// 004080db  8d8de8feffff         lea ecx, [ebp - 0x118]
// 004080e1  51                   push ecx
// 004080e2  57                   push edi
// 004080e3  895d14               mov dword ptr [ebp + 0x14], ebx
// 004080e6  ff154403a400         call dword ptr [0xa40344]
// 004080ec  3bc3                 cmp eax, ebx
// 004080ee  750a                 jne 0x4080fa
// 004080f0  e88bb5ffff           call 0x403680
// 004080f5  e9d5010000           jmp 0x4082cf
// 004080fa  3d04010000           cmp eax, 0x104
// 004080ff  7524                 jne 0x408125
// 00408101  8d4d14               lea ecx, [ebp + 0x14]
// 00408104  e8b7c1ffff           call 0x4042c0
// 00408109  8d4dec               lea ecx, [ebp - 0x14]
// 0040810c  e82fcfffff           call 0x405040
// 00408111  b87a000780           mov eax, 0x8007007a
// 00408116  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 0040811c  5f                   pop edi
// 0040811d  5e                   pop esi
// 0040811e  5b                   pop ebx
// 0040811f  8be5                 mov esp, ebp
// 00408121  5d                   pop ebp
// 00408122  c21000               ret 0x10
// 00408125  8d95e8feffff         lea edx, [ebp - 0x118]
// 0040812b  52                   push edx
// 0040812c  ff156403a400         call dword ptr [0xa40364]
// 00408132  40                   inc eax
// 00408133  6a02                 push 2
// 00408135  50                   push eax
// 00408136  894508               mov dword ptr [ebp + 8], eax
// 00408139  8d4508               lea eax, [ebp + 8]
// 0040813c  50                   push eax
// 0040813d  e85eb3ffff           call 0x4034a0
// 00408142  83c40c               add esp, 0xc
// 00408145  85c0                 test eax, eax
// 00408147  7c44                 jl 0x40818d
// 00408149  8b7508               mov esi, dword ptr [ebp + 8]
// 0040814c  81fe00040000         cmp esi, 0x400
// 00408152  7f18                 jg 0x40816c
// 00408154  56                   push esi
// 00408155  e8c6c4ffff           call 0x404620
// 0040815a  83c404               add esp, 4
// 0040815d  84c0                 test al, al
// 0040815f  740b                 je 0x40816c
// 00408161  8bc6                 mov eax, esi
// 00408163  e818314000           call 0x80b280
// 00408168  8bc4                 mov eax, esp
// 0040816a  eb09                 jmp 0x408175
// 0040816c  56                   push esi
// 0040816d  8d4d14               lea ecx, [ebp + 0x14]
// 00408170  e85bcaffff           call 0x404bd0
// 00408175  6a03                 push 3
// 00408177  d1ee                 shr esi, 1
// 00408179  56                   push esi
// 0040817a  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00408180  51                   push ecx
// 00408181  50                   push eax
// 00408182  e869b3ffff           call 0x4034f0
// 00408187  8bf0                 mov esi, eax
// 00408189  3bf3                 cmp esi, ebx
// 0040818b  7524                 jne 0x4081b1
// 0040818d  8d4d14               lea ecx, [ebp + 0x14]
// 00408190  e82bc1ffff           call 0x4042c0
// 00408195  8d4dec               lea ecx, [ebp - 0x14]
// 00408198  e8a3ceffff           call 0x405040
// 0040819d  b80e000780           mov eax, 0x8007000e
// 004081a2  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004081a8  5f                   pop edi
// 004081a9  5e                   pop esi
// 004081aa  5b                   pop ebx
// 004081ab  8be5                 mov esp, ebp
// 004081ad  5d                   pop ebp
// 004081ae  c21000               ret 0x10
// 004081b1  56                   push esi
// 004081b2  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 004081b8  6808020000           push 0x208
// 004081bd  52                   push edx
// 004081be  e8fdb5ffff           call 0x4037c0
// 004081c3  83c40c               add esp, 0xc
// 004081c6  3bfb                 cmp edi, ebx
// 004081c8  7413                 je 0x4081dd
// 004081ca  53                   push ebx
// 004081cb  ff156803a400         call dword ptr [0xa40368]
// 004081d1  3bf8                 cmp edi, eax
// 004081d3  7408                 je 0x4081dd
// 004081d5  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 004081db  eb79                 jmp 0x408256
// 004081dd  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 004081e3  50                   push eax
// 004081e4  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 004081ea  ba22000000           mov edx, 0x22
// 004081ef  680b020000           push 0x20b
// 004081f4  51                   push ecx
// 004081f5  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 004081fc  e86fb3ffff           call 0x403570
// 00408201  83c40c               add esp, 0xc
// 00408204  84c0                 test al, al
// 00408206  7524                 jne 0x40822c
// 00408208  8d4d14               lea ecx, [ebp + 0x14]
// 0040820b  e8b0c0ffff           call 0x4042c0
// 00408210  8d4dec               lea ecx, [ebp - 0x14]
// 00408213  e828ceffff           call 0x405040
// 00408218  b805400080           mov eax, 0x80004005
// 0040821d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408223  5f                   pop edi
// 00408224  5e                   pop esi
// 00408225  5b                   pop ebx
// 00408226  8be5                 mov esp, ebp
// 00408228  5d                   pop ebp
// 00408229  c21000               ret 0x10
// 0040822c  8d95d0faffff         lea edx, [ebp - 0x530]
// 00408232  52                   push edx
// 00408233  ff155803a400         call dword ptr [0xa40358]
// 00408239  b922000000           mov ecx, 0x22
// 0040823e  33d2                 xor edx, edx
// 00408240  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 00408248  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 00408250  8d85d0faffff         lea eax, [ebp - 0x530]
// 00408256  50                   push eax
// 00408257  68a8bda500           push 0xa5bda8
// 0040825c  8d4dec               lea ecx, [ebp - 0x14]
// 0040825f  51                   push ecx
// 00408260  e87bd7ffff           call 0x4059e0
// 00408265  8bf8                 mov edi, eax
// 00408267  3bfb                 cmp edi, ebx
// 00408269  7d21                 jge 0x40828c
// 0040826b  8d4d14               lea ecx, [ebp + 0x14]
// 0040826e  e84dc0ffff           call 0x4042c0
// 00408273  8d4dec               lea ecx, [ebp - 0x14]
// 00408276  e8c5cdffff           call 0x405040
// 0040827b  8bc7                 mov eax, edi
// 0040827d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408283  5f                   pop edi
// 00408284  5e                   pop esi
// 00408285  5b                   pop ebx
// 00408286  8be5                 mov esp, ebp
// 00408288  5d                   pop ebp
// 00408289  c21000               ret 0x10
// 0040828c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00408292  52                   push edx
// 00408293  6890bda500           push 0xa5bd90
// 00408298  8d45ec               lea eax, [ebp - 0x14]
// 0040829b  50                   push eax
// 0040829c  e83fd7ffff           call 0x4059e0
// 004082a1  8bf8                 mov edi, eax
// 004082a3  3bfb                 cmp edi, ebx
// 004082a5  7cc4                 jl 0x40826b
// 004082a7  687cbda500           push 0xa5bd7c
// 004082ac  395d10               cmp dword ptr [ebp + 0x10], ebx
// 004082af  7410                 je 0x4082c1
// 004082b1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004082b4  51                   push ecx
// 004082b5  56                   push esi
// 004082b6  8d55ec               lea edx, [ebp - 0x14]
// 004082b9  52                   push edx
// 004082ba  e8b1fbffff           call 0x407e70
// 004082bf  eb0e                 jmp 0x4082cf
// 004082c1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004082c4  50                   push eax
// 004082c5  56                   push esi
// 004082c6  8d4dec               lea ecx, [ebp - 0x14]
// 004082c9  51                   push ecx
// 004082ca  e8a1fcffff           call 0x407f70
// 004082cf  8d4d14               lea ecx, [ebp + 0x14]
// 004082d2  8bf0                 mov esi, eax
// 004082d4  e8e7bfffff           call 0x4042c0
// 004082d9  8d4dec               lea ecx, [ebp - 0x14]
// 004082dc  e85fcdffff           call 0x405040
// 004082e1  8bc6                 mov eax, esi
// 004082e3  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004082e9  5f                   pop edi
// 004082ea  5e                   pop esi
// 004082eb  5b                   pop ebx
// 004082ec  8be5                 mov esp, ebp
// 004082ee  5d                   pop ebp
// 004082ef  c21000               ret 0x10
// copied from an identical function in another client (function ?roc_update_registry_from_resource_s@@YGJPAVCAtlModule@ATL@@PB_WHPAU_ATL_REGMAP_ENTRY@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp