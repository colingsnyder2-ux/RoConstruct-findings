// from server: 100% by auto
// roc 2008-06 006b97f0  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b97f0
//
// 006b97f0  8b442404             mov eax, dword ptr [esp + 4]
// 006b97f4  83ec0c               sub esp, 0xc
// 006b97f7  57                   push edi
// 006b97f8  6a00                 push 0
// 006b97fa  6880000000           push 0x80
// 006b97ff  6a03                 push 3
// 006b9801  6a00                 push 0
// 006b9803  6a00                 push 0
// 006b9805  6800000080           push 0x80000000
// 006b980a  50                   push eax
// 006b980b  ff153c228000         call dword ptr [0x80223c]
// 006b9811  8bf8                 mov edi, eax
// 006b9813  83ffff               cmp edi, -1
// 006b9816  0f849d000000         je 0x6b98b9
// 006b981c  6a00                 push 0
// 006b981e  8d4c2410             lea ecx, [esp + 0x10]
// 006b9822  51                   push ecx
// 006b9823  6a04                 push 4
// 006b9825  8d542414             lea edx, [esp + 0x14]
// 006b9829  52                   push edx
// 006b982a  57                   push edi
// 006b982b  c644241889           mov byte ptr [esp + 0x18], 0x89
// 006b9830  c644241950           mov byte ptr [esp + 0x19], 0x50
// 006b9835  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 006b983a  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 006b983f  ff15f0228000         call dword ptr [0x8022f0]
// 006b9845  85c0                 test eax, eax
// 006b9847  7469                 je 0x6b98b2
// 006b9849  837c240c04           cmp dword ptr [esp + 0xc], 4
// 006b984e  7562                 jne 0x6b98b2
// 006b9850  8b442408             mov eax, dword ptr [esp + 8]
// 006b9854  56                   push esi
// 006b9855  3b442408             cmp eax, dword ptr [esp + 8]
// 006b9859  7427                 je 0x6b9882
// 006b985b  0fb6f0               movzx esi, al
// 006b985e  81ee89000000         sub esi, 0x89
// 006b9864  7532                 jne 0x6b9898
// 006b9866  0fb6f4               movzx esi, ah
// 006b9869  83ee50               sub esi, 0x50
// 006b986c  752a                 jne 0x6b9898
// 006b986e  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 006b9873  83ee4e               sub esi, 0x4e
// 006b9876  7520                 jne 0x6b9898
// 006b9878  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 006b987d  83ee47               sub esi, 0x47
// 006b9880  7516                 jne 0x6b9898
// 006b9882  57                   push edi
// 006b9883  33f6                 xor esi, esi
// 006b9885  ff1534228000         call dword ptr [0x802234]
// 006b988b  33c0                 xor eax, eax
// 006b988d  85f6                 test esi, esi
// 006b988f  5e                   pop esi
// 006b9890  0f94c0               sete al
// 006b9893  5f                   pop edi
// 006b9894  83c40c               add esp, 0xc
// 006b9897  c3                   ret 
// 006b9898  c1fe1f               sar esi, 0x1f
// 006b989b  57                   push edi
// 006b989c  83ce01               or esi, 1
// 006b989f  ff1534228000         call dword ptr [0x802234]
// 006b98a5  33c0                 xor eax, eax
// 006b98a7  85f6                 test esi, esi
// 006b98a9  5e                   pop esi
// 006b98aa  0f94c0               sete al
// 006b98ad  5f                   pop edi
// 006b98ae  83c40c               add esp, 0xc
// 006b98b1  c3                   ret 
// 006b98b2  57                   push edi
// 006b98b3  ff1534228000         call dword ptr [0x802234]
// 006b98b9  33c0                 xor eax, eax
// 006b98bb  5f                   pop edi
// 006b98bc  83c40c               add esp, 0xc
// 006b98bf  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
