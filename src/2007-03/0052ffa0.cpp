// roc 2007-03 0052ffa0  unit: seg_00520000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052ffa0
//
// 0052ffa0  83ec0c               sub esp, 0xc
// 0052ffa3  56                   push esi
// 0052ffa4  8bf1                 mov esi, ecx
// 0052ffa6  8b5608               mov edx, dword ptr [esi + 8]
// 0052ffa9  33c0                 xor eax, eax
// 0052ffab  85d2                 test edx, edx
// 0052ffad  57                   push edi
// 0052ffae  89442408             mov dword ptr [esp + 8], eax
// 0052ffb2  7504                 jne 0x52ffb8
// 0052ffb4  33c9                 xor ecx, ecx
// 0052ffb6  eb08                 jmp 0x52ffc0
// 0052ffb8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ffbb  2bca                 sub ecx, edx
// 0052ffbd  c1f902               sar ecx, 2
// 0052ffc0  85c9                 test ecx, ecx
// 0052ffc2  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052ffc5  8d7c2408             lea edi, [esp + 8]
// 0052ffc9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052ffcd  89542410             mov dword ptr [esp + 0x10], edx
// 0052ffd1  897e14               mov dword ptr [esi + 0x14], edi
// 0052ffd4  7657                 jbe 0x53002d
// 0052ffd6  53                   push ebx
// 0052ffd7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052ffdb  55                   push ebp
// 0052ffdc  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052ffe0  8b5608               mov edx, dword ptr [esi + 8]
// 0052ffe3  85d2                 test edx, edx
// 0052ffe5  8bf8                 mov edi, eax
// 0052ffe7  740c                 je 0x52fff5
// 0052ffe9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ffec  2bca                 sub ecx, edx
// 0052ffee  c1f902               sar ecx, 2
// 0052fff1  3bc1                 cmp eax, ecx
// 0052fff3  7206                 jb 0x52fffb
// 0052fff5  ff1544e97700         call dword ptr [0x77e944]
// 0052fffb  8b4608               mov eax, dword ptr [esi + 8]
// 0052fffe  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00530001  50                   push eax
// 00530002  53                   push ebx
// 00530003  55                   push ebp
// 00530004  8bce                 mov ecx, esi
// 00530006  e8b5fcffff           call 0x52fcc0
// 0053000b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053000f  83c001               add eax, 1
// 00530012  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00530016  89442410             mov dword ptr [esp + 0x10], eax
// 0053001a  72c4                 jb 0x52ffe0
// 0053001c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00530020  5d                   pop ebp
// 00530021  5b                   pop ebx
// 00530022  5f                   pop edi
// 00530023  894e14               mov dword ptr [esi + 0x14], ecx
// 00530026  5e                   pop esi
// 00530027  83c40c               add esp, 0xc
// 0053002a  c20800               ret 8
// 0053002d  5f                   pop edi
// 0053002e  895614               mov dword ptr [esi + 0x14], edx
// 00530031  5e                   pop esi
// 00530032  83c40c               add esp, 0xc
// 00530035  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
