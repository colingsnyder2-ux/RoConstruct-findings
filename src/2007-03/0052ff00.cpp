// roc 2007-03 0052ff00  unit: seg_00520000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052ff00
//
// 0052ff00  83ec0c               sub esp, 0xc
// 0052ff03  56                   push esi
// 0052ff04  8bf1                 mov esi, ecx
// 0052ff06  8b5608               mov edx, dword ptr [esi + 8]
// 0052ff09  33c0                 xor eax, eax
// 0052ff0b  85d2                 test edx, edx
// 0052ff0d  57                   push edi
// 0052ff0e  89442408             mov dword ptr [esp + 8], eax
// 0052ff12  7504                 jne 0x52ff18
// 0052ff14  33c9                 xor ecx, ecx
// 0052ff16  eb08                 jmp 0x52ff20
// 0052ff18  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ff1b  2bca                 sub ecx, edx
// 0052ff1d  c1f902               sar ecx, 2
// 0052ff20  85c9                 test ecx, ecx
// 0052ff22  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052ff25  8d7c2408             lea edi, [esp + 8]
// 0052ff29  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052ff2d  89542410             mov dword ptr [esp + 0x10], edx
// 0052ff31  897e14               mov dword ptr [esi + 0x14], edi
// 0052ff34  7657                 jbe 0x52ff8d
// 0052ff36  53                   push ebx
// 0052ff37  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052ff3b  55                   push ebp
// 0052ff3c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052ff40  8b5608               mov edx, dword ptr [esi + 8]
// 0052ff43  85d2                 test edx, edx
// 0052ff45  8bf8                 mov edi, eax
// 0052ff47  740c                 je 0x52ff55
// 0052ff49  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ff4c  2bca                 sub ecx, edx
// 0052ff4e  c1f902               sar ecx, 2
// 0052ff51  3bc1                 cmp eax, ecx
// 0052ff53  7206                 jb 0x52ff5b
// 0052ff55  ff1544e97700         call dword ptr [0x77e944]
// 0052ff5b  8b4608               mov eax, dword ptr [esi + 8]
// 0052ff5e  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052ff61  50                   push eax
// 0052ff62  53                   push ebx
// 0052ff63  55                   push ebp
// 0052ff64  8bce                 mov ecx, esi
// 0052ff66  e8a5fcffff           call 0x52fc10
// 0052ff6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052ff6f  83c001               add eax, 1
// 0052ff72  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052ff76  89442410             mov dword ptr [esp + 0x10], eax
// 0052ff7a  72c4                 jb 0x52ff40
// 0052ff7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ff80  5d                   pop ebp
// 0052ff81  5b                   pop ebx
// 0052ff82  5f                   pop edi
// 0052ff83  894e14               mov dword ptr [esi + 0x14], ecx
// 0052ff86  5e                   pop esi
// 0052ff87  83c40c               add esp, 0xc
// 0052ff8a  c20800               ret 8
// 0052ff8d  5f                   pop edi
// 0052ff8e  895614               mov dword ptr [esi + 0x14], edx
// 0052ff91  5e                   pop esi
// 0052ff92  83c40c               add esp, 0xc
// 0052ff95  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
