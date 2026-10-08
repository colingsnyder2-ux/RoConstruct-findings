// roc 2007-08 004925c0  unit: RBX::Network::Players  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004925c0
//
// 004925c0  83ec0c               sub esp, 0xc
// 004925c3  56                   push esi
// 004925c4  8bf1                 mov esi, ecx
// 004925c6  8b5608               mov edx, dword ptr [esi + 8]
// 004925c9  33c0                 xor eax, eax
// 004925cb  85d2                 test edx, edx
// 004925cd  57                   push edi
// 004925ce  89442408             mov dword ptr [esp + 8], eax
// 004925d2  7504                 jne 0x4925d8
// 004925d4  33c9                 xor ecx, ecx
// 004925d6  eb08                 jmp 0x4925e0
// 004925d8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004925db  2bca                 sub ecx, edx
// 004925dd  c1f902               sar ecx, 2
// 004925e0  85c9                 test ecx, ecx
// 004925e2  8b5614               mov edx, dword ptr [esi + 0x14]
// 004925e5  8d7c2408             lea edi, [esp + 8]
// 004925e9  894c240c             mov dword ptr [esp + 0xc], ecx
// 004925ed  89542410             mov dword ptr [esp + 0x10], edx
// 004925f1  897e14               mov dword ptr [esi + 0x14], edi
// 004925f4  7654                 jbe 0x49264a
// 004925f6  53                   push ebx
// 004925f7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004925fb  55                   push ebp
// 004925fc  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00492602  8b5608               mov edx, dword ptr [esi + 8]
// 00492605  85d2                 test edx, edx
// 00492607  8bf8                 mov edi, eax
// 00492609  740c                 je 0x492617
// 0049260b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049260e  2bca                 sub ecx, edx
// 00492610  c1f902               sar ecx, 2
// 00492613  3bc1                 cmp eax, ecx
// 00492615  7202                 jb 0x492619
// 00492617  ffd5                 call ebp
// 00492619  8b4608               mov eax, dword ptr [esi + 8]
// 0049261c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0049261f  50                   push eax
// 00492620  53                   push ebx
// 00492621  8bce                 mov ecx, esi
// 00492623  e8e8f6ffff           call 0x491d10
// 00492628  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049262c  83c001               add eax, 1
// 0049262f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00492633  89442410             mov dword ptr [esp + 0x10], eax
// 00492637  72c9                 jb 0x492602
// 00492639  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049263d  5d                   pop ebp
// 0049263e  5b                   pop ebx
// 0049263f  5f                   pop edi
// 00492640  894e14               mov dword ptr [esi + 0x14], ecx
// 00492643  5e                   pop esi
// 00492644  83c40c               add esp, 0xc
// 00492647  c20400               ret 4
// 0049264a  5f                   pop edi
// 0049264b  895614               mov dword ptr [esi + 0x14], edx
// 0049264e  5e                   pop esi
// 0049264f  83c40c               add esp, 0xc
// 00492652  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
