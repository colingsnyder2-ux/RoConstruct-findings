// roc 2008-06 00626610  unit: seg_00620000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626610
//
// 00626610  83ec08               sub esp, 8
// 00626613  53                   push ebx
// 00626614  55                   push ebp
// 00626615  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00626619  56                   push esi
// 0062661a  8d44240c             lea eax, [esp + 0xc]
// 0062661e  50                   push eax
// 0062661f  6a01                 push 1
// 00626621  55                   push ebp
// 00626622  e899b0feff           call 0x6116c0
// 00626627  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062662b  6a01                 push 1
// 0062662d  6a02                 push 2
// 0062662f  55                   push ebp
// 00626630  89442428             mov dword ptr [esp + 0x28], eax
// 00626634  e837b2feff           call 0x611870
// 00626639  83c418               add esp, 0x18
// 0062663c  8bd8                 mov ebx, eax
// 0062663e  85c0                 test eax, eax
// 00626640  7d04                 jge 0x626646
// 00626642  8d5c3001             lea ebx, [eax + esi + 1]
// 00626646  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062664a  53                   push ebx
// 0062664b  6a03                 push 3
// 0062664d  55                   push ebp
// 0062664e  e81db2feff           call 0x611870
// 00626653  83c40c               add esp, 0xc
// 00626656  85c0                 test eax, eax
// 00626658  7d04                 jge 0x62665e
// 0062665a  8d443001             lea eax, [eax + esi + 1]
// 0062665e  85db                 test ebx, ebx
// 00626660  7f05                 jg 0x626667
// 00626662  bb01000000           mov ebx, 1
// 00626667  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062666b  3bc1                 cmp eax, ecx
// 0062666d  7602                 jbe 0x626671
// 0062666f  8bc1                 mov eax, ecx
// 00626671  3bd8                 cmp ebx, eax
// 00626673  7e09                 jle 0x62667e
// 00626675  5e                   pop esi
// 00626676  5d                   pop ebp
// 00626677  33c0                 xor eax, eax
// 00626679  5b                   pop ebx
// 0062667a  83c408               add esp, 8
// 0062667d  c3                   ret 
// 0062667e  8bf0                 mov esi, eax
// 00626680  2bf3                 sub esi, ebx
// 00626682  46                   inc esi
// 00626683  8d0c1e               lea ecx, [esi + ebx]
// 00626686  3bc8                 cmp ecx, eax
// 00626688  7f0e                 jg 0x626698
// 0062668a  68f8508400           push 0x8450f8
// 0062668f  55                   push ebp
// 00626690  e8cba5feff           call 0x610c60
// 00626695  83c408               add esp, 8
// 00626698  57                   push edi
// 00626699  68f8508400           push 0x8450f8
// 0062669e  56                   push esi
// 0062669f  55                   push ebp
// 006266a0  e84ba6feff           call 0x610cf0
// 006266a5  83c40c               add esp, 0xc
// 006266a8  33ff                 xor edi, edi
// 006266aa  85f6                 test esi, esi
// 006266ac  7e1b                 jle 0x6266c9
// 006266ae  8b542414             mov edx, dword ptr [esp + 0x14]
// 006266b2  8d5c13ff             lea ebx, [ebx + edx - 1]
// 006266b6  0fb6043b             movzx eax, byte ptr [ebx + edi]
// 006266ba  50                   push eax
// 006266bb  55                   push ebp
// 006266bc  e85fbbfeff           call 0x612220
// 006266c1  47                   inc edi
// 006266c2  83c408               add esp, 8
// 006266c5  3bfe                 cmp edi, esi
// 006266c7  7ced                 jl 0x6266b6
// 006266c9  5f                   pop edi
// 006266ca  8bc6                 mov eax, esi
// 006266cc  5e                   pop esi
// 006266cd  5d                   pop ebp
// 006266ce  5b                   pop ebx
// 006266cf  83c408               add esp, 8
// 006266d2  c3                   ret 
// library lua-5.1.3/lstrlib.c (function _str_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lstrlib.c
