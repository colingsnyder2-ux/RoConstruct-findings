// roc 2007-03 005300e0  unit: seg_00530000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005300e0
//
// 005300e0  83ec0c               sub esp, 0xc
// 005300e3  56                   push esi
// 005300e4  8bf1                 mov esi, ecx
// 005300e6  8b5608               mov edx, dword ptr [esi + 8]
// 005300e9  33c0                 xor eax, eax
// 005300eb  85d2                 test edx, edx
// 005300ed  57                   push edi
// 005300ee  89442408             mov dword ptr [esp + 8], eax
// 005300f2  7504                 jne 0x5300f8
// 005300f4  33c9                 xor ecx, ecx
// 005300f6  eb08                 jmp 0x530100
// 005300f8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005300fb  2bca                 sub ecx, edx
// 005300fd  c1f902               sar ecx, 2
// 00530100  85c9                 test ecx, ecx
// 00530102  8b5614               mov edx, dword ptr [esi + 0x14]
// 00530105  8d7c2408             lea edi, [esp + 8]
// 00530109  894c240c             mov dword ptr [esp + 0xc], ecx
// 0053010d  89542410             mov dword ptr [esp + 0x10], edx
// 00530111  897e14               mov dword ptr [esi + 0x14], edi
// 00530114  7654                 jbe 0x53016a
// 00530116  53                   push ebx
// 00530117  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053011b  55                   push ebp
// 0053011c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00530122  8b5608               mov edx, dword ptr [esi + 8]
// 00530125  85d2                 test edx, edx
// 00530127  8bf8                 mov edi, eax
// 00530129  740c                 je 0x530137
// 0053012b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053012e  2bca                 sub ecx, edx
// 00530130  c1f902               sar ecx, 2
// 00530133  3bc1                 cmp eax, ecx
// 00530135  7202                 jb 0x530139
// 00530137  ffd5                 call ebp
// 00530139  8b4608               mov eax, dword ptr [esi + 8]
// 0053013c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053013f  50                   push eax
// 00530140  53                   push ebx
// 00530141  8bce                 mov ecx, esi
// 00530143  e8d8fcffff           call 0x52fe20
// 00530148  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053014c  83c001               add eax, 1
// 0053014f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00530153  89442410             mov dword ptr [esp + 0x10], eax
// 00530157  72c9                 jb 0x530122
// 00530159  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053015d  5d                   pop ebp
// 0053015e  5b                   pop ebx
// 0053015f  5f                   pop edi
// 00530160  894e14               mov dword ptr [esi + 0x14], ecx
// 00530163  5e                   pop esi
// 00530164  83c40c               add esp, 0xc
// 00530167  c20400               ret 4
// 0053016a  5f                   pop edi
// 0053016b  895614               mov dword ptr [esi + 0x14], edx
// 0053016e  5e                   pop esi
// 0053016f  83c40c               add esp, 0xc
// 00530172  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
