// roc 2007-08 00558b60  unit: RBX::DataModel  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558b60
//
// 00558b60  83ec0c               sub esp, 0xc
// 00558b63  56                   push esi
// 00558b64  8bf1                 mov esi, ecx
// 00558b66  8b5608               mov edx, dword ptr [esi + 8]
// 00558b69  33c0                 xor eax, eax
// 00558b6b  85d2                 test edx, edx
// 00558b6d  57                   push edi
// 00558b6e  89442408             mov dword ptr [esp + 8], eax
// 00558b72  7504                 jne 0x558b78
// 00558b74  33c9                 xor ecx, ecx
// 00558b76  eb08                 jmp 0x558b80
// 00558b78  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00558b7b  2bca                 sub ecx, edx
// 00558b7d  c1f902               sar ecx, 2
// 00558b80  85c9                 test ecx, ecx
// 00558b82  8b5614               mov edx, dword ptr [esi + 0x14]
// 00558b85  8d7c2408             lea edi, [esp + 8]
// 00558b89  894c240c             mov dword ptr [esp + 0xc], ecx
// 00558b8d  89542410             mov dword ptr [esp + 0x10], edx
// 00558b91  897e14               mov dword ptr [esi + 0x14], edi
// 00558b94  7654                 jbe 0x558bea
// 00558b96  53                   push ebx
// 00558b97  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00558b9b  55                   push ebp
// 00558b9c  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00558ba2  8b5608               mov edx, dword ptr [esi + 8]
// 00558ba5  85d2                 test edx, edx
// 00558ba7  8bf8                 mov edi, eax
// 00558ba9  740c                 je 0x558bb7
// 00558bab  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00558bae  2bca                 sub ecx, edx
// 00558bb0  c1f902               sar ecx, 2
// 00558bb3  3bc1                 cmp eax, ecx
// 00558bb5  7202                 jb 0x558bb9
// 00558bb7  ffd5                 call ebp
// 00558bb9  8b4608               mov eax, dword ptr [esi + 8]
// 00558bbc  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00558bbf  50                   push eax
// 00558bc0  53                   push ebx
// 00558bc1  8bce                 mov ecx, esi
// 00558bc3  e8f8f9ffff           call 0x5585c0
// 00558bc8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00558bcc  83c001               add eax, 1
// 00558bcf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00558bd3  89442410             mov dword ptr [esp + 0x10], eax
// 00558bd7  72c9                 jb 0x558ba2
// 00558bd9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558bdd  5d                   pop ebp
// 00558bde  5b                   pop ebx
// 00558bdf  5f                   pop edi
// 00558be0  894e14               mov dword ptr [esi + 0x14], ecx
// 00558be3  5e                   pop esi
// 00558be4  83c40c               add esp, 0xc
// 00558be7  c20400               ret 4
// 00558bea  5f                   pop edi
// 00558beb  895614               mov dword ptr [esi + 0x14], edx
// 00558bee  5e                   pop esi
// 00558bef  83c40c               add esp, 0xc
// 00558bf2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
