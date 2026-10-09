// roc 2007-03 00555b70  unit: seg_00550000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555b70
//
// 00555b70  83ec0c               sub esp, 0xc
// 00555b73  56                   push esi
// 00555b74  8bf1                 mov esi, ecx
// 00555b76  8b5608               mov edx, dword ptr [esi + 8]
// 00555b79  33c0                 xor eax, eax
// 00555b7b  85d2                 test edx, edx
// 00555b7d  57                   push edi
// 00555b7e  89442408             mov dword ptr [esp + 8], eax
// 00555b82  7504                 jne 0x555b88
// 00555b84  33c9                 xor ecx, ecx
// 00555b86  eb08                 jmp 0x555b90
// 00555b88  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00555b8b  2bca                 sub ecx, edx
// 00555b8d  c1f902               sar ecx, 2
// 00555b90  85c9                 test ecx, ecx
// 00555b92  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555b95  8d7c2408             lea edi, [esp + 8]
// 00555b99  894c240c             mov dword ptr [esp + 0xc], ecx
// 00555b9d  89542410             mov dword ptr [esp + 0x10], edx
// 00555ba1  897e14               mov dword ptr [esi + 0x14], edi
// 00555ba4  7654                 jbe 0x555bfa
// 00555ba6  53                   push ebx
// 00555ba7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00555bab  55                   push ebp
// 00555bac  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00555bb2  8b5608               mov edx, dword ptr [esi + 8]
// 00555bb5  85d2                 test edx, edx
// 00555bb7  8bf8                 mov edi, eax
// 00555bb9  740c                 je 0x555bc7
// 00555bbb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00555bbe  2bca                 sub ecx, edx
// 00555bc0  c1f902               sar ecx, 2
// 00555bc3  3bc1                 cmp eax, ecx
// 00555bc5  7202                 jb 0x555bc9
// 00555bc7  ffd5                 call ebp
// 00555bc9  8b4608               mov eax, dword ptr [esi + 8]
// 00555bcc  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00555bcf  50                   push eax
// 00555bd0  53                   push ebx
// 00555bd1  8bce                 mov ecx, esi
// 00555bd3  e828e8ffff           call 0x554400
// 00555bd8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00555bdc  83c001               add eax, 1
// 00555bdf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00555be3  89442410             mov dword ptr [esp + 0x10], eax
// 00555be7  72c9                 jb 0x555bb2
// 00555be9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555bed  5d                   pop ebp
// 00555bee  5b                   pop ebx
// 00555bef  5f                   pop edi
// 00555bf0  894e14               mov dword ptr [esi + 0x14], ecx
// 00555bf3  5e                   pop esi
// 00555bf4  83c40c               add esp, 0xc
// 00555bf7  c20400               ret 4
// 00555bfa  5f                   pop edi
// 00555bfb  895614               mov dword ptr [esi + 0x14], edx
// 00555bfe  5e                   pop esi
// 00555bff  83c40c               add esp, 0xc
// 00555c02  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
