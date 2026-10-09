// roc 2007-03 0057ade0  unit: seg_00570000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ade0
//
// 0057ade0  83ec0c               sub esp, 0xc
// 0057ade3  56                   push esi
// 0057ade4  8bf1                 mov esi, ecx
// 0057ade6  8b5608               mov edx, dword ptr [esi + 8]
// 0057ade9  33c0                 xor eax, eax
// 0057adeb  85d2                 test edx, edx
// 0057aded  57                   push edi
// 0057adee  89442408             mov dword ptr [esp + 8], eax
// 0057adf2  7504                 jne 0x57adf8
// 0057adf4  33c9                 xor ecx, ecx
// 0057adf6  eb08                 jmp 0x57ae00
// 0057adf8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057adfb  2bca                 sub ecx, edx
// 0057adfd  c1f902               sar ecx, 2
// 0057ae00  85c9                 test ecx, ecx
// 0057ae02  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057ae05  8d7c2408             lea edi, [esp + 8]
// 0057ae09  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057ae0d  89542410             mov dword ptr [esp + 0x10], edx
// 0057ae11  897e14               mov dword ptr [esi + 0x14], edi
// 0057ae14  7654                 jbe 0x57ae6a
// 0057ae16  53                   push ebx
// 0057ae17  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057ae1b  55                   push ebp
// 0057ae1c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0057ae22  8b5608               mov edx, dword ptr [esi + 8]
// 0057ae25  85d2                 test edx, edx
// 0057ae27  8bf8                 mov edi, eax
// 0057ae29  740c                 je 0x57ae37
// 0057ae2b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057ae2e  2bca                 sub ecx, edx
// 0057ae30  c1f902               sar ecx, 2
// 0057ae33  3bc1                 cmp eax, ecx
// 0057ae35  7202                 jb 0x57ae39
// 0057ae37  ffd5                 call ebp
// 0057ae39  8b4608               mov eax, dword ptr [esi + 8]
// 0057ae3c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0057ae3f  50                   push eax
// 0057ae40  53                   push ebx
// 0057ae41  8bce                 mov ecx, esi
// 0057ae43  e838fcffff           call 0x57aa80
// 0057ae48  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057ae4c  83c001               add eax, 1
// 0057ae4f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0057ae53  89442410             mov dword ptr [esp + 0x10], eax
// 0057ae57  72c9                 jb 0x57ae22
// 0057ae59  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057ae5d  5d                   pop ebp
// 0057ae5e  5b                   pop ebx
// 0057ae5f  5f                   pop edi
// 0057ae60  894e14               mov dword ptr [esi + 0x14], ecx
// 0057ae63  5e                   pop esi
// 0057ae64  83c40c               add esp, 0xc
// 0057ae67  c20400               ret 4
// 0057ae6a  5f                   pop edi
// 0057ae6b  895614               mov dword ptr [esi + 0x14], edx
// 0057ae6e  5e                   pop esi
// 0057ae6f  83c40c               add esp, 0xc
// 0057ae72  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
