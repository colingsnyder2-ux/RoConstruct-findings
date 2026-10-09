// roc 2007-03 00565bf0  unit: seg_00560000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00565bf0
//
// 00565bf0  83ec0c               sub esp, 0xc
// 00565bf3  56                   push esi
// 00565bf4  8bf1                 mov esi, ecx
// 00565bf6  8b5608               mov edx, dword ptr [esi + 8]
// 00565bf9  33c0                 xor eax, eax
// 00565bfb  85d2                 test edx, edx
// 00565bfd  57                   push edi
// 00565bfe  89442408             mov dword ptr [esp + 8], eax
// 00565c02  7504                 jne 0x565c08
// 00565c04  33c9                 xor ecx, ecx
// 00565c06  eb08                 jmp 0x565c10
// 00565c08  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00565c0b  2bca                 sub ecx, edx
// 00565c0d  c1f902               sar ecx, 2
// 00565c10  85c9                 test ecx, ecx
// 00565c12  8b5614               mov edx, dword ptr [esi + 0x14]
// 00565c15  8d7c2408             lea edi, [esp + 8]
// 00565c19  894c240c             mov dword ptr [esp + 0xc], ecx
// 00565c1d  89542410             mov dword ptr [esp + 0x10], edx
// 00565c21  897e14               mov dword ptr [esi + 0x14], edi
// 00565c24  7654                 jbe 0x565c7a
// 00565c26  53                   push ebx
// 00565c27  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00565c2b  55                   push ebp
// 00565c2c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00565c32  8b5608               mov edx, dword ptr [esi + 8]
// 00565c35  85d2                 test edx, edx
// 00565c37  8bf8                 mov edi, eax
// 00565c39  740c                 je 0x565c47
// 00565c3b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00565c3e  2bca                 sub ecx, edx
// 00565c40  c1f902               sar ecx, 2
// 00565c43  3bc1                 cmp eax, ecx
// 00565c45  7202                 jb 0x565c49
// 00565c47  ffd5                 call ebp
// 00565c49  8b4608               mov eax, dword ptr [esi + 8]
// 00565c4c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00565c4f  50                   push eax
// 00565c50  53                   push ebx
// 00565c51  8bce                 mov ecx, esi
// 00565c53  e8f8feffff           call 0x565b50
// 00565c58  8b442410             mov eax, dword ptr [esp + 0x10]
// 00565c5c  83c001               add eax, 1
// 00565c5f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00565c63  89442410             mov dword ptr [esp + 0x10], eax
// 00565c67  72c9                 jb 0x565c32
// 00565c69  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00565c6d  5d                   pop ebp
// 00565c6e  5b                   pop ebx
// 00565c6f  5f                   pop edi
// 00565c70  894e14               mov dword ptr [esi + 0x14], ecx
// 00565c73  5e                   pop esi
// 00565c74  83c40c               add esp, 0xc
// 00565c77  c20400               ret 4
// 00565c7a  5f                   pop edi
// 00565c7b  895614               mov dword ptr [esi + 0x14], edx
// 00565c7e  5e                   pop esi
// 00565c7f  83c40c               add esp, 0xc
// 00565c82  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
