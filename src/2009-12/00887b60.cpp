// roc 2009-12 00887b60  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887b60
//
// 00887b60  83ec34               sub esp, 0x34
// 00887b63  56                   push esi
// 00887b64  8bf1                 mov esi, ecx
// 00887b66  89742404             mov dword ptr [esp + 4], esi
// 00887b6a  e8a1f0ffff           call 0x886c10
// 00887b6f  85c0                 test eax, eax
// 00887b71  7518                 jne 0x887b8b
// 00887b73  8b442440             mov eax, dword ptr [esp + 0x40]
// 00887b77  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00887b7b  50                   push eax
// 00887b7c  51                   push ecx
// 00887b7d  8bce                 mov ecx, esi
// 00887b7f  e81c4bffff           call 0x87c6a0
// 00887b84  5e                   pop esi
// 00887b85  83c434               add esp, 0x34
// 00887b88  c20800               ret 8
// 00887b8b  8b742440             mov esi, dword ptr [esp + 0x40]
// 00887b8f  8b16                 mov edx, dword ptr [esi]
// 00887b91  8b4278               mov eax, dword ptr [edx + 0x78]
// 00887b94  53                   push ebx
// 00887b95  55                   push ebp
// 00887b96  57                   push edi
// 00887b97  8bce                 mov ecx, esi
// 00887b99  ffd0                 call eax
// 00887b9b  8b9e9c000000         mov ebx, dword ptr [esi + 0x9c]
// 00887ba1  8944244c             mov dword ptr [esp + 0x4c], eax
// 00887ba5  83fbff               cmp ebx, -1
// 00887ba8  7511                 jne 0x887bbb
// 00887baa  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00887bb0  85c9                 test ecx, ecx
// 00887bb2  7407                 je 0x887bbb
// 00887bb4  e8f7e9f6ff           call 0x7f65b0
// 00887bb9  8bd8                 mov ebx, eax
// 00887bbb  8b16                 mov edx, dword ptr [esi]
// 00887bbd  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00887bc0  8bce                 mov ecx, esi
// 00887bc2  ffd0                 call eax
// 00887bc4  8d4c2414             lea ecx, [esp + 0x14]
// 00887bc8  51                   push ecx
// 00887bc9  8bce                 mov ecx, esi
// 00887bcb  8be8                 mov ebp, eax
// 00887bcd  e83e3d0000           call 0x88b910
// 00887bd2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00887bd6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00887bda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00887bde  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00887be2  89442428             mov dword ptr [esp + 0x28], eax
// 00887be6  03c7                 add eax, edi
// 00887be8  99                   cdq 
// 00887be9  2bc2                 sub eax, edx
// 00887beb  d1f8                 sar eax, 1
// 00887bed  894c2424             mov dword ptr [esp + 0x24], ecx
// 00887bf1  8974242c             mov dword ptr [esp + 0x2c], esi
// 00887bf5  89442430             mov dword ptr [esp + 0x30], eax
// 00887bf9  894c2434             mov dword ptr [esp + 0x34], ecx
// 00887bfd  89442438             mov dword ptr [esp + 0x38], eax
// 00887c01  8974243c             mov dword ptr [esp + 0x3c], esi
// 00887c05  897c2440             mov dword ptr [esp + 0x40], edi
// 00887c09  85db                 test ebx, ebx
// 00887c0b  7505                 jne 0x887c12
// 00887c0d  8d4b04               lea ecx, [ebx + 4]
// 00887c10  eb18                 jmp 0x887c2a
// 00887c12  85ed                 test ebp, ebp
// 00887c14  740b                 je 0x887c21
// 00887c16  b903000000           mov ecx, 3
// 00887c1b  394c244c             cmp dword ptr [esp + 0x4c], ecx
// 00887c1f  7409                 je 0x887c2a
// 00887c21  33c9                 xor ecx, ecx
// 00887c23  83fd03               cmp ebp, 3
// 00887c26  0f94c1               sete cl
// 00887c29  41                   inc ecx
// 00887c2a  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00887c2e  85ff                 test edi, edi
// 00887c30  7504                 jne 0x887c36
// 00887c32  33c0                 xor eax, eax
// 00887c34  eb03                 jmp 0x887c39
// 00887c36  8b4704               mov eax, dword ptr [edi + 4]
// 00887c39  8b742410             mov esi, dword ptr [esp + 0x10]
// 00887c3d  6a00                 push 0
// 00887c3f  8d542428             lea edx, [esp + 0x28]
// 00887c43  52                   push edx
// 00887c44  51                   push ecx
// 00887c45  6a01                 push 1
// 00887c47  81c690040000         add esi, 0x490
// 00887c4d  50                   push eax
// 00887c4e  8bce                 mov ecx, esi
// 00887c50  e8eb3bfeff           call 0x86b840
// 00887c55  85db                 test ebx, ebx
// 00887c57  7505                 jne 0x887c5e
// 00887c59  8d4b04               lea ecx, [ebx + 4]
// 00887c5c  eb1b                 jmp 0x887c79
// 00887c5e  85ed                 test ebp, ebp
// 00887c60  740e                 je 0x887c70
// 00887c62  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 00887c67  7507                 jne 0x887c70
// 00887c69  b903000000           mov ecx, 3
// 00887c6e  eb09                 jmp 0x887c79
// 00887c70  33c9                 xor ecx, ecx
// 00887c72  83fd04               cmp ebp, 4
// 00887c75  0f94c1               sete cl
// 00887c78  41                   inc ecx
// 00887c79  85ff                 test edi, edi
// 00887c7b  7504                 jne 0x887c81
// 00887c7d  33c0                 xor eax, eax
// 00887c7f  eb03                 jmp 0x887c84
// 00887c81  8b4704               mov eax, dword ptr [edi + 4]
// 00887c84  6a00                 push 0
// 00887c86  8d542438             lea edx, [esp + 0x38]
// 00887c8a  52                   push edx
// 00887c8b  51                   push ecx
// 00887c8c  6a02                 push 2
// 00887c8e  50                   push eax
// 00887c8f  8bce                 mov ecx, esi
// 00887c91  e8aa3bfeff           call 0x86b840
// 00887c96  5f                   pop edi
// 00887c97  5d                   pop ebp
// 00887c98  5b                   pop ebx
// 00887c99  5e                   pop esi
// 00887c9a  83c434               add esp, 0x34
// 00887c9d  c20800               ret 8
// copied from an identical function in another client (function ?DrawControlEditSpin@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControlEdit@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp