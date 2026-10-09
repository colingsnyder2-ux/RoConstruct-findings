// roc 2007-03 005ad0a0  unit: seg_005a0000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad0a0
//
// 005ad0a0  83ec0c               sub esp, 0xc
// 005ad0a3  56                   push esi
// 005ad0a4  8bf1                 mov esi, ecx
// 005ad0a6  8b5608               mov edx, dword ptr [esi + 8]
// 005ad0a9  33c0                 xor eax, eax
// 005ad0ab  85d2                 test edx, edx
// 005ad0ad  57                   push edi
// 005ad0ae  89442408             mov dword ptr [esp + 8], eax
// 005ad0b2  7504                 jne 0x5ad0b8
// 005ad0b4  33c9                 xor ecx, ecx
// 005ad0b6  eb08                 jmp 0x5ad0c0
// 005ad0b8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ad0bb  2bca                 sub ecx, edx
// 005ad0bd  c1f902               sar ecx, 2
// 005ad0c0  85c9                 test ecx, ecx
// 005ad0c2  8b5614               mov edx, dword ptr [esi + 0x14]
// 005ad0c5  8d7c2408             lea edi, [esp + 8]
// 005ad0c9  894c240c             mov dword ptr [esp + 0xc], ecx
// 005ad0cd  89542410             mov dword ptr [esp + 0x10], edx
// 005ad0d1  897e14               mov dword ptr [esi + 0x14], edi
// 005ad0d4  7654                 jbe 0x5ad12a
// 005ad0d6  53                   push ebx
// 005ad0d7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ad0db  55                   push ebp
// 005ad0dc  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005ad0e2  8b5608               mov edx, dword ptr [esi + 8]
// 005ad0e5  85d2                 test edx, edx
// 005ad0e7  8bf8                 mov edi, eax
// 005ad0e9  740c                 je 0x5ad0f7
// 005ad0eb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ad0ee  2bca                 sub ecx, edx
// 005ad0f0  c1f902               sar ecx, 2
// 005ad0f3  3bc1                 cmp eax, ecx
// 005ad0f5  7202                 jb 0x5ad0f9
// 005ad0f7  ffd5                 call ebp
// 005ad0f9  8b4608               mov eax, dword ptr [esi + 8]
// 005ad0fc  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005ad0ff  50                   push eax
// 005ad100  53                   push ebx
// 005ad101  8bce                 mov ecx, esi
// 005ad103  e868fcffff           call 0x5acd70
// 005ad108  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ad10c  83c001               add eax, 1
// 005ad10f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005ad113  89442410             mov dword ptr [esp + 0x10], eax
// 005ad117  72c9                 jb 0x5ad0e2
// 005ad119  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ad11d  5d                   pop ebp
// 005ad11e  5b                   pop ebx
// 005ad11f  5f                   pop edi
// 005ad120  894e14               mov dword ptr [esi + 0x14], ecx
// 005ad123  5e                   pop esi
// 005ad124  83c40c               add esp, 0xc
// 005ad127  c20400               ret 4
// 005ad12a  5f                   pop edi
// 005ad12b  895614               mov dword ptr [esi + 0x14], edx
// 005ad12e  5e                   pop esi
// 005ad12f  83c40c               add esp, 0xc
// 005ad132  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
