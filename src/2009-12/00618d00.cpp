// roc 2009-12 00618d00  unit: seg_00610000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00618d00
//
// 00618d00  53                   push ebx
// 00618d01  56                   push esi
// 00618d02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00618d06  f6466801             test byte ptr [esi + 0x68], 1
// 00618d0a  57                   push edi
// 00618d0b  750e                 jne 0x618d1b
// 00618d0d  68589b9c00           push 0x9c9b58
// 00618d12  56                   push esi
// 00618d13  e87874ffff           call 0x610190
// 00618d18  83c408               add esp, 8
// 00618d1b  8b4668               mov eax, dword ptr [esi + 0x68]
// 00618d1e  a804                 test al, 4
// 00618d20  7406                 je 0x618d28
// 00618d22  83c808               or eax, 8
// 00618d25  894668               mov dword ptr [esi + 0x68], eax
// 00618d28  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00618d2c  8d4701               lea eax, [edi + 1]
// 00618d2f  50                   push eax
// 00618d30  56                   push esi
// 00618d31  e8da7fffff           call 0x610d10
// 00618d36  8bd8                 mov ebx, eax
// 00618d38  83c408               add esp, 8
// 00618d3b  85db                 test ebx, ebx
// 00618d3d  7512                 jne 0x618d51
// 00618d3f  68349b9c00           push 0x9c9b34
// 00618d44  56                   push esi
// 00618d45  e8f674ffff           call 0x610240
// 00618d4a  83c408               add esp, 8
// 00618d4d  5f                   pop edi
// 00618d4e  5e                   pop esi
// 00618d4f  5b                   pop ebx
// 00618d50  c3                   ret 
// 00618d51  57                   push edi
// 00618d52  53                   push ebx
// 00618d53  56                   push esi
// 00618d54  e8371dffff           call 0x60aa90
// 00618d59  57                   push edi
// 00618d5a  53                   push ebx
// 00618d5b  56                   push esi
// 00618d5c  e80fa9feff           call 0x603670
// 00618d61  6a00                 push 0
// 00618d63  56                   push esi
// 00618d64  e887deffff           call 0x616bf0
// 00618d69  83c420               add esp, 0x20
// 00618d6c  85c0                 test eax, eax
// 00618d6e  740e                 je 0x618d7e
// 00618d70  53                   push ebx
// 00618d71  56                   push esi
// 00618d72  e8697fffff           call 0x610ce0
// 00618d77  83c408               add esp, 8
// 00618d7a  5f                   pop edi
// 00618d7b  5e                   pop esi
// 00618d7c  5b                   pop ebx
// 00618d7d  c3                   ret 
// 00618d7e  8d043b               lea eax, [ebx + edi]
// 00618d81  c60000               mov byte ptr [eax], 0
// 00618d84  803b00               cmp byte ptr [ebx], 0
// 00618d87  55                   push ebp
// 00618d88  8beb                 mov ebp, ebx
// 00618d8a  740b                 je 0x618d97
// 00618d8c  8d642400             lea esp, [esp]
// 00618d90  45                   inc ebp
// 00618d91  807d0000             cmp byte ptr [ebp], 0
// 00618d95  75f9                 jne 0x618d90
// 00618d97  3be8                 cmp ebp, eax
// 00618d99  7401                 je 0x618d9c
// 00618d9b  45                   inc ebp
// 00618d9c  6a10                 push 0x10
// 00618d9e  56                   push esi
// 00618d9f  e86c7fffff           call 0x610d10
// 00618da4  8bf8                 mov edi, eax
// 00618da6  83c408               add esp, 8
// 00618da9  85ff                 test edi, edi
// 00618dab  751a                 jne 0x618dc7
// 00618dad  68089b9c00           push 0x9c9b08
// 00618db2  56                   push esi
// 00618db3  e88874ffff           call 0x610240
// 00618db8  53                   push ebx
// 00618db9  56                   push esi
// 00618dba  e8217fffff           call 0x610ce0
// 00618dbf  83c410               add esp, 0x10
// 00618dc2  5d                   pop ebp
// 00618dc3  5f                   pop edi
// 00618dc4  5e                   pop esi
// 00618dc5  5b                   pop ebx
// 00618dc6  c3                   ret 
// 00618dc7  8bc5                 mov eax, ebp
// 00618dc9  c707ffffffff         mov dword ptr [edi], 0xffffffff
// 00618dcf  895f04               mov dword ptr [edi + 4], ebx
// 00618dd2  896f08               mov dword ptr [edi + 8], ebp
// 00618dd5  8d5001               lea edx, [eax + 1]
// 00618dd8  8a08                 mov cl, byte ptr [eax]
// 00618dda  40                   inc eax
// 00618ddb  84c9                 test cl, cl
// 00618ddd  75f9                 jne 0x618dd8
// 00618ddf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00618de3  6a01                 push 1
// 00618de5  57                   push edi
// 00618de6  51                   push ecx
// 00618de7  2bc2                 sub eax, edx
// 00618de9  56                   push esi
// 00618dea  89470c               mov dword ptr [edi + 0xc], eax
// 00618ded  e8ce9ffeff           call 0x602dc0
// 00618df2  53                   push ebx
// 00618df3  56                   push esi
// 00618df4  8be8                 mov ebp, eax
// 00618df6  e8e57effff           call 0x610ce0
// 00618dfb  57                   push edi
// 00618dfc  56                   push esi
// 00618dfd  e8de7effff           call 0x610ce0
// 00618e02  83c420               add esp, 0x20
// 00618e05  85ed                 test ebp, ebp
// 00618e07  740e                 je 0x618e17
// 00618e09  68dc9a9c00           push 0x9c9adc
// 00618e0e  56                   push esi
// 00618e0f  e82c74ffff           call 0x610240
// 00618e14  83c408               add esp, 8
// 00618e17  5d                   pop ebp
// 00618e18  5f                   pop edi
// 00618e19  5e                   pop esi
// 00618e1a  5b                   pop ebx
// 00618e1b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tEXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
