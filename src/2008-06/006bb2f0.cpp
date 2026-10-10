// roc 2008-06 006bb2f0  unit: CXTPImageManagerResource::CBitmapDC  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb2f0
//
// 006bb2f0  83ec2c               sub esp, 0x2c
// 006bb2f3  56                   push esi
// 006bb2f4  8b742438             mov esi, dword ptr [esp + 0x38]
// 006bb2f8  85f6                 test esi, esi
// 006bb2fa  7507                 jne 0x6bb303
// 006bb2fc  33c0                 xor eax, eax
// 006bb2fe  5e                   pop esi
// 006bb2ff  83c42c               add esp, 0x2c
// 006bb302  c3                   ret 
// 006bb303  53                   push ebx
// 006bb304  6a2c                 push 0x2c
// 006bb306  8d44240c             lea eax, [esp + 0xc]
// 006bb30a  6a00                 push 0
// 006bb30c  50                   push eax
// 006bb30d  e8f263feff           call 0x6a1704
// 006bb312  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 006bb316  83c40c               add esp, 0xc
// 006bb319  c744240828000000     mov dword ptr [esp + 8], 0x28
// 006bb321  85db                 test ebx, ebx
// 006bb323  7504                 jne 0x6bb329
// 006bb325  33c0                 xor eax, eax
// 006bb327  eb03                 jmp 0x6bb32c
// 006bb329  8b4304               mov eax, dword ptr [ebx + 4]
// 006bb32c  55                   push ebp
// 006bb32d  8b2d7c208000         mov ebp, dword ptr [0x80207c]
// 006bb333  6a00                 push 0
// 006bb335  8d4c2410             lea ecx, [esp + 0x10]
// 006bb339  51                   push ecx
// 006bb33a  6a00                 push 0
// 006bb33c  6a00                 push 0
// 006bb33e  6a00                 push 0
// 006bb340  56                   push esi
// 006bb341  50                   push eax
// 006bb342  ffd5                 call ebp
// 006bb344  85c0                 test eax, eax
// 006bb346  7408                 je 0x6bb350
// 006bb348  66837c241a20         cmp word ptr [esp + 0x1a], 0x20
// 006bb34e  7409                 je 0x6bb359
// 006bb350  5d                   pop ebp
// 006bb351  5b                   pop ebx
// 006bb352  33c0                 xor eax, eax
// 006bb354  5e                   pop esi
// 006bb355  83c42c               add esp, 0x2c
// 006bb358  c3                   ret 
// 006bb359  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bb35d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 006bb362  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 006bb366  03c0                 add eax, eax
// 006bb368  03c0                 add eax, eax
// 006bb36a  57                   push edi
// 006bb36b  8b3db0288000         mov edi, dword ptr [0x8028b0]
// 006bb371  50                   push eax
// 006bb372  8902                 mov dword ptr [edx], eax
// 006bb374  ffd7                 call edi
// 006bb376  8b742450             mov esi, dword ptr [esp + 0x50]
// 006bb37a  83c404               add esp, 4
// 006bb37d  8906                 mov dword ptr [esi], eax
// 006bb37f  85c0                 test eax, eax
// 006bb381  0f8494000000         je 0x6bb41b
// 006bb387  6a34                 push 0x34
// 006bb389  ffd7                 call edi
// 006bb38b  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006bb38f  83c404               add esp, 4
// 006bb392  8907                 mov dword ptr [edi], eax
// 006bb394  85c0                 test eax, eax
// 006bb396  7520                 jne 0x6bb3b8
// 006bb398  8b06                 mov eax, dword ptr [esi]
// 006bb39a  85c0                 test eax, eax
// 006bb39c  7410                 je 0x6bb3ae
// 006bb39e  50                   push eax
// 006bb39f  ff15c0288000         call dword ptr [0x8028c0]
// 006bb3a5  83c404               add esp, 4
// 006bb3a8  c70600000000         mov dword ptr [esi], 0
// 006bb3ae  5f                   pop edi
// 006bb3af  5d                   pop ebp
// 006bb3b0  5b                   pop ebx
// 006bb3b1  33c0                 xor eax, eax
// 006bb3b3  5e                   pop esi
// 006bb3b4  83c42c               add esp, 0x2c
// 006bb3b7  c3                   ret 
// 006bb3b8  6a28                 push 0x28
// 006bb3ba  8d4c2414             lea ecx, [esp + 0x14]
// 006bb3be  51                   push ecx
// 006bb3bf  6a28                 push 0x28
// 006bb3c1  50                   push eax
// 006bb3c2  ff15ac288000         call dword ptr [0x8028ac]
// 006bb3c8  83c410               add esp, 0x10
// 006bb3cb  85db                 test ebx, ebx
// 006bb3cd  7504                 jne 0x6bb3d3
// 006bb3cf  33c0                 xor eax, eax
// 006bb3d1  eb03                 jmp 0x6bb3d6
// 006bb3d3  8b4304               mov eax, dword ptr [ebx + 4]
// 006bb3d6  8b17                 mov edx, dword ptr [edi]
// 006bb3d8  8b0e                 mov ecx, dword ptr [esi]
// 006bb3da  6a00                 push 0
// 006bb3dc  52                   push edx
// 006bb3dd  8b542420             mov edx, dword ptr [esp + 0x20]
// 006bb3e1  51                   push ecx
// 006bb3e2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006bb3e6  52                   push edx
// 006bb3e7  6a00                 push 0
// 006bb3e9  51                   push ecx
// 006bb3ea  50                   push eax
// 006bb3eb  ffd5                 call ebp
// 006bb3ed  85c0                 test eax, eax
// 006bb3ef  7534                 jne 0x6bb425
// 006bb3f1  8b06                 mov eax, dword ptr [esi]
// 006bb3f3  8b1dc0288000         mov ebx, dword ptr [0x8028c0]
// 006bb3f9  85c0                 test eax, eax
// 006bb3fb  740c                 je 0x6bb409
// 006bb3fd  50                   push eax
// 006bb3fe  ffd3                 call ebx
// 006bb400  83c404               add esp, 4
// 006bb403  c70600000000         mov dword ptr [esi], 0
// 006bb409  8b07                 mov eax, dword ptr [edi]
// 006bb40b  85c0                 test eax, eax
// 006bb40d  740c                 je 0x6bb41b
// 006bb40f  50                   push eax
// 006bb410  ffd3                 call ebx
// 006bb412  83c404               add esp, 4
// 006bb415  c70700000000         mov dword ptr [edi], 0
// 006bb41b  5f                   pop edi
// 006bb41c  5d                   pop ebp
// 006bb41d  5b                   pop ebx
// 006bb41e  33c0                 xor eax, eax
// 006bb420  5e                   pop esi
// 006bb421  83c42c               add esp, 0x2c
// 006bb424  c3                   ret 
// 006bb425  5f                   pop edi
// 006bb426  5d                   pop ebp
// 006bb427  5b                   pop ebx
// 006bb428  b801000000           mov eax, 1
// 006bb42d  5e                   pop esi
// 006bb42e  83c42c               add esp, 0x2c
// 006bb431  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPImageManager.cpp (function ?GetBitmapBits@CXTPImageManagerIcon@@SAHAAVCDC@@PAUHBITMAP__@@AAPAUtagBITMAPINFO@@AAPAXAAI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPImageManager.cpp
