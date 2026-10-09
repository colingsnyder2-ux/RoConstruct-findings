// roc 2007-03 00431630  unit: seg_00430000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00431630
//
// 00431630  83ec0c               sub esp, 0xc
// 00431633  56                   push esi
// 00431634  8bf1                 mov esi, ecx
// 00431636  8b5608               mov edx, dword ptr [esi + 8]
// 00431639  33c0                 xor eax, eax
// 0043163b  85d2                 test edx, edx
// 0043163d  57                   push edi
// 0043163e  89442408             mov dword ptr [esp + 8], eax
// 00431642  7504                 jne 0x431648
// 00431644  33c9                 xor ecx, ecx
// 00431646  eb08                 jmp 0x431650
// 00431648  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0043164b  2bca                 sub ecx, edx
// 0043164d  c1f902               sar ecx, 2
// 00431650  85c9                 test ecx, ecx
// 00431652  8b5614               mov edx, dword ptr [esi + 0x14]
// 00431655  8d7c2408             lea edi, [esp + 8]
// 00431659  894c240c             mov dword ptr [esp + 0xc], ecx
// 0043165d  89542410             mov dword ptr [esp + 0x10], edx
// 00431661  897e14               mov dword ptr [esi + 0x14], edi
// 00431664  7654                 jbe 0x4316ba
// 00431666  53                   push ebx
// 00431667  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0043166b  55                   push ebp
// 0043166c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00431672  8b5608               mov edx, dword ptr [esi + 8]
// 00431675  85d2                 test edx, edx
// 00431677  8bf8                 mov edi, eax
// 00431679  740c                 je 0x431687
// 0043167b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0043167e  2bca                 sub ecx, edx
// 00431680  c1f902               sar ecx, 2
// 00431683  3bc1                 cmp eax, ecx
// 00431685  7202                 jb 0x431689
// 00431687  ffd5                 call ebp
// 00431689  8b4608               mov eax, dword ptr [esi + 8]
// 0043168c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0043168f  50                   push eax
// 00431690  53                   push ebx
// 00431691  8bce                 mov ecx, esi
// 00431693  e808edffff           call 0x4303a0
// 00431698  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043169c  83c001               add eax, 1
// 0043169f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004316a3  89442410             mov dword ptr [esp + 0x10], eax
// 004316a7  72c9                 jb 0x431672
// 004316a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004316ad  5d                   pop ebp
// 004316ae  5b                   pop ebx
// 004316af  5f                   pop edi
// 004316b0  894e14               mov dword ptr [esi + 0x14], ecx
// 004316b3  5e                   pop esi
// 004316b4  83c40c               add esp, 0xc
// 004316b7  c20400               ret 4
// 004316ba  5f                   pop edi
// 004316bb  895614               mov dword ptr [esi + 0x14], edx
// 004316be  5e                   pop esi
// 004316bf  83c40c               add esp, 0xc
// 004316c2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
