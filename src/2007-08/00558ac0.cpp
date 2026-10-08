// roc 2007-08 00558ac0  unit: RBX::DataModel  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558ac0
//
// 00558ac0  83ec0c               sub esp, 0xc
// 00558ac3  56                   push esi
// 00558ac4  8bf1                 mov esi, ecx
// 00558ac6  8b5608               mov edx, dword ptr [esi + 8]
// 00558ac9  33c0                 xor eax, eax
// 00558acb  85d2                 test edx, edx
// 00558acd  57                   push edi
// 00558ace  89442408             mov dword ptr [esp + 8], eax
// 00558ad2  7504                 jne 0x558ad8
// 00558ad4  33c9                 xor ecx, ecx
// 00558ad6  eb08                 jmp 0x558ae0
// 00558ad8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00558adb  2bca                 sub ecx, edx
// 00558add  c1f902               sar ecx, 2
// 00558ae0  85c9                 test ecx, ecx
// 00558ae2  8b5614               mov edx, dword ptr [esi + 0x14]
// 00558ae5  8d7c2408             lea edi, [esp + 8]
// 00558ae9  894c240c             mov dword ptr [esp + 0xc], ecx
// 00558aed  89542410             mov dword ptr [esp + 0x10], edx
// 00558af1  897e14               mov dword ptr [esi + 0x14], edi
// 00558af4  7654                 jbe 0x558b4a
// 00558af6  53                   push ebx
// 00558af7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00558afb  55                   push ebp
// 00558afc  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00558b02  8b5608               mov edx, dword ptr [esi + 8]
// 00558b05  85d2                 test edx, edx
// 00558b07  8bf8                 mov edi, eax
// 00558b09  740c                 je 0x558b17
// 00558b0b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00558b0e  2bca                 sub ecx, edx
// 00558b10  c1f902               sar ecx, 2
// 00558b13  3bc1                 cmp eax, ecx
// 00558b15  7202                 jb 0x558b19
// 00558b17  ffd5                 call ebp
// 00558b19  8b4608               mov eax, dword ptr [esi + 8]
// 00558b1c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00558b1f  50                   push eax
// 00558b20  53                   push ebx
// 00558b21  8bce                 mov ecx, esi
// 00558b23  e8d8f9ffff           call 0x558500
// 00558b28  8b442410             mov eax, dword ptr [esp + 0x10]
// 00558b2c  83c001               add eax, 1
// 00558b2f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00558b33  89442410             mov dword ptr [esp + 0x10], eax
// 00558b37  72c9                 jb 0x558b02
// 00558b39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558b3d  5d                   pop ebp
// 00558b3e  5b                   pop ebx
// 00558b3f  5f                   pop edi
// 00558b40  894e14               mov dword ptr [esi + 0x14], ecx
// 00558b43  5e                   pop esi
// 00558b44  83c40c               add esp, 0xc
// 00558b47  c20400               ret 4
// 00558b4a  5f                   pop edi
// 00558b4b  895614               mov dword ptr [esi + 0x14], edx
// 00558b4e  5e                   pop esi
// 00558b4f  83c40c               add esp, 0xc
// 00558b52  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
