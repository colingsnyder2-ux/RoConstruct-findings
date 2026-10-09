// roc 2007-03 004427a0  unit: seg_00440000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004427a0
//
// 004427a0  83ec0c               sub esp, 0xc
// 004427a3  53                   push ebx
// 004427a4  55                   push ebp
// 004427a5  56                   push esi
// 004427a6  8bf1                 mov esi, ecx
// 004427a8  8b5608               mov edx, dword ptr [esi + 8]
// 004427ab  33c0                 xor eax, eax
// 004427ad  85d2                 test edx, edx
// 004427af  57                   push edi
// 004427b0  89442410             mov dword ptr [esp + 0x10], eax
// 004427b4  7504                 jne 0x4427ba
// 004427b6  33c9                 xor ecx, ecx
// 004427b8  eb08                 jmp 0x4427c2
// 004427ba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004427bd  2bca                 sub ecx, edx
// 004427bf  c1f902               sar ecx, 2
// 004427c2  85c9                 test ecx, ecx
// 004427c4  8b5614               mov edx, dword ptr [esi + 0x14]
// 004427c7  8d7c2410             lea edi, [esp + 0x10]
// 004427cb  894c2414             mov dword ptr [esp + 0x14], ecx
// 004427cf  89542418             mov dword ptr [esp + 0x18], edx
// 004427d3  897e14               mov dword ptr [esi + 0x14], edi
// 004427d6  765d                 jbe 0x442835
// 004427d8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004427dc  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004427e0  8b5608               mov edx, dword ptr [esi + 8]
// 004427e3  85d2                 test edx, edx
// 004427e5  8bf8                 mov edi, eax
// 004427e7  740c                 je 0x4427f5
// 004427e9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004427ec  2bca                 sub ecx, edx
// 004427ee  c1f902               sar ecx, 2
// 004427f1  3bc1                 cmp eax, ecx
// 004427f3  7206                 jb 0x4427fb
// 004427f5  ff1544e97700         call dword ptr [0x77e944]
// 004427fb  8b4608               mov eax, dword ptr [esi + 8]
// 004427fe  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00442801  50                   push eax
// 00442802  83ec08               sub esp, 8
// 00442805  8bc4                 mov eax, esp
// 00442807  8bce                 mov ecx, esi
// 00442809  8928                 mov dword ptr [eax], ebp
// 0044280b  895804               mov dword ptr [eax + 4], ebx
// 0044280e  e8bdfeffff           call 0x4426d0
// 00442813  8b442410             mov eax, dword ptr [esp + 0x10]
// 00442817  83c001               add eax, 1
// 0044281a  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0044281e  89442410             mov dword ptr [esp + 0x10], eax
// 00442822  72bc                 jb 0x4427e0
// 00442824  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00442828  894e14               mov dword ptr [esi + 0x14], ecx
// 0044282b  5f                   pop edi
// 0044282c  5e                   pop esi
// 0044282d  5d                   pop ebp
// 0044282e  5b                   pop ebx
// 0044282f  83c40c               add esp, 0xc
// 00442832  c20800               ret 8
// 00442835  5f                   pop edi
// 00442836  895614               mov dword ptr [esi + 0x14], edx
// 00442839  5e                   pop esi
// 0044283a  5d                   pop ebp
// 0044283b  5b                   pop ebx
// 0044283c  83c40c               add esp, 0xc
// 0044283f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?raise@?$Notifier@VInstance@RBX@@VPropertyChanged@2@@RBX@@IBEXVPropertyChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
