// roc 2007-03 0048bb20  unit: seg_00480000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048bb20
//
// 0048bb20  83ec0c               sub esp, 0xc
// 0048bb23  56                   push esi
// 0048bb24  8bf1                 mov esi, ecx
// 0048bb26  8b5608               mov edx, dword ptr [esi + 8]
// 0048bb29  33c0                 xor eax, eax
// 0048bb2b  85d2                 test edx, edx
// 0048bb2d  57                   push edi
// 0048bb2e  89442408             mov dword ptr [esp + 8], eax
// 0048bb32  7504                 jne 0x48bb38
// 0048bb34  33c9                 xor ecx, ecx
// 0048bb36  eb08                 jmp 0x48bb40
// 0048bb38  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048bb3b  2bca                 sub ecx, edx
// 0048bb3d  c1f902               sar ecx, 2
// 0048bb40  85c9                 test ecx, ecx
// 0048bb42  8b5614               mov edx, dword ptr [esi + 0x14]
// 0048bb45  8d7c2408             lea edi, [esp + 8]
// 0048bb49  894c240c             mov dword ptr [esp + 0xc], ecx
// 0048bb4d  89542410             mov dword ptr [esp + 0x10], edx
// 0048bb51  897e14               mov dword ptr [esi + 0x14], edi
// 0048bb54  7654                 jbe 0x48bbaa
// 0048bb56  53                   push ebx
// 0048bb57  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0048bb5b  55                   push ebp
// 0048bb5c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0048bb62  8b5608               mov edx, dword ptr [esi + 8]
// 0048bb65  85d2                 test edx, edx
// 0048bb67  8bf8                 mov edi, eax
// 0048bb69  740c                 je 0x48bb77
// 0048bb6b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048bb6e  2bca                 sub ecx, edx
// 0048bb70  c1f902               sar ecx, 2
// 0048bb73  3bc1                 cmp eax, ecx
// 0048bb75  7202                 jb 0x48bb79
// 0048bb77  ffd5                 call ebp
// 0048bb79  8b4608               mov eax, dword ptr [esi + 8]
// 0048bb7c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0048bb7f  50                   push eax
// 0048bb80  53                   push ebx
// 0048bb81  8bce                 mov ecx, esi
// 0048bb83  e818fbffff           call 0x48b6a0
// 0048bb88  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048bb8c  83c001               add eax, 1
// 0048bb8f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0048bb93  89442410             mov dword ptr [esp + 0x10], eax
// 0048bb97  72c9                 jb 0x48bb62
// 0048bb99  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048bb9d  5d                   pop ebp
// 0048bb9e  5b                   pop ebx
// 0048bb9f  5f                   pop edi
// 0048bba0  894e14               mov dword ptr [esi + 0x14], ecx
// 0048bba3  5e                   pop esi
// 0048bba4  83c40c               add esp, 0xc
// 0048bba7  c20400               ret 4
// 0048bbaa  5f                   pop edi
// 0048bbab  895614               mov dword ptr [esi + 0x14], edx
// 0048bbae  5e                   pop esi
// 0048bbaf  83c40c               add esp, 0xc
// 0048bbb2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
