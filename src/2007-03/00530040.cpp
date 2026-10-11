// roc 2007-03 00530040  unit: seg_00530000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530040
//
// 00530040  83ec0c               sub esp, 0xc
// 00530043  56                   push esi
// 00530044  8bf1                 mov esi, ecx
// 00530046  8b5608               mov edx, dword ptr [esi + 8]
// 00530049  33c0                 xor eax, eax
// 0053004b  85d2                 test edx, edx
// 0053004d  57                   push edi
// 0053004e  89442408             mov dword ptr [esp + 8], eax
// 00530052  7504                 jne 0x530058
// 00530054  33c9                 xor ecx, ecx
// 00530056  eb08                 jmp 0x530060
// 00530058  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053005b  2bca                 sub ecx, edx
// 0053005d  c1f902               sar ecx, 2
// 00530060  85c9                 test ecx, ecx
// 00530062  8b5614               mov edx, dword ptr [esi + 0x14]
// 00530065  8d7c2408             lea edi, [esp + 8]
// 00530069  894c240c             mov dword ptr [esp + 0xc], ecx
// 0053006d  89542410             mov dword ptr [esp + 0x10], edx
// 00530071  897e14               mov dword ptr [esi + 0x14], edi
// 00530074  7657                 jbe 0x5300cd
// 00530076  53                   push ebx
// 00530077  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053007b  55                   push ebp
// 0053007c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00530080  8b5608               mov edx, dword ptr [esi + 8]
// 00530083  85d2                 test edx, edx
// 00530085  8bf8                 mov edi, eax
// 00530087  740c                 je 0x530095
// 00530089  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053008c  2bca                 sub ecx, edx
// 0053008e  c1f902               sar ecx, 2
// 00530091  3bc1                 cmp eax, ecx
// 00530093  7206                 jb 0x53009b
// 00530095  ff1544e97700         call dword ptr [0x77e944]
// 0053009b  8b4608               mov eax, dword ptr [esi + 8]
// 0053009e  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005300a1  50                   push eax
// 005300a2  53                   push ebx
// 005300a3  55                   push ebp
// 005300a4  8bce                 mov ecx, esi
// 005300a6  e8c5fcffff           call 0x52fd70
// 005300ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 005300af  83c001               add eax, 1
// 005300b2  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005300b6  89442410             mov dword ptr [esp + 0x10], eax
// 005300ba  72c4                 jb 0x530080
// 005300bc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005300c0  5d                   pop ebp
// 005300c1  5b                   pop ebx
// 005300c2  5f                   pop edi
// 005300c3  894e14               mov dword ptr [esi + 0x14], ecx
// 005300c6  5e                   pop esi
// 005300c7  83c40c               add esp, 0xc
// 005300ca  c20800               ret 8
// 005300cd  5f                   pop edi
// 005300ce  895614               mov dword ptr [esi + 0x14], edx
// 005300d1  5e                   pop esi
// 005300d2  83c40c               add esp, 0xc
// 005300d5  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
