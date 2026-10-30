// roc 2009-12 00890b00  unit: CXTPDockContext  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890b00
//
// 00890b00  83ec28               sub esp, 0x28
// 00890b03  53                   push ebx
// 00890b04  55                   push ebp
// 00890b05  56                   push esi
// 00890b06  8bf1                 mov esi, ecx
// 00890b08  8b4620               mov eax, dword ptr [esi + 0x20]
// 00890b0b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00890b0e  8b5614               mov edx, dword ptr [esi + 0x14]
// 00890b11  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00890b14  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00890b17  894c2430             mov dword ptr [esp + 0x30], ecx
// 00890b1b  33c9                 xor ecx, ecx
// 00890b1d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00890b21  8b4604               mov eax, dword ptr [esi + 4]
// 00890b24  c7460801000000       mov dword ptr [esi + 8], 1
// 00890b2b  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00890b32  57                   push edi
// 00890b33  0f94c1               sete cl
// 00890b36  50                   push eax
// 00890b37  89542418             mov dword ptr [esp + 0x18], edx
// 00890b3b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00890b3f  8d4c241c             lea ecx, [esp + 0x1c]
// 00890b43  e828a7fbff           call 0x84b270
// 00890b48  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00890b4c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00890b50  51                   push ecx
// 00890b51  50                   push eax
// 00890b52  8d542420             lea edx, [esp + 0x20]
// 00890b56  52                   push edx
// 00890b57  89460c               mov dword ptr [esi + 0xc], eax
// 00890b5a  894e10               mov dword ptr [esi + 0x10], ecx
// 00890b5d  e8eeb50200           call 0x8bc150
// 00890b62  8b442424             mov eax, dword ptr [esp + 0x24]
// 00890b66  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00890b6a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00890b6e  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00890b72  894630               mov dword ptr [esi + 0x30], eax
// 00890b75  894640               mov dword ptr [esi + 0x40], eax
// 00890b78  894e34               mov dword ptr [esi + 0x34], ecx
// 00890b7b  894e44               mov dword ptr [esi + 0x44], ecx
// 00890b7e  895638               mov dword ptr [esi + 0x38], edx
// 00890b81  895648               mov dword ptr [esi + 0x48], edx
// 00890b84  83c40c               add esp, 0xc
// 00890b87  897e3c               mov dword ptr [esi + 0x3c], edi
// 00890b8a  897e4c               mov dword ptr [esi + 0x4c], edi
// 00890b8d  e88c2ff6ff           call 0x7f3b1e
// 00890b92  68867f0000           push 0x7f86
// 00890b97  6a00                 push 0
// 00890b99  ff1548ca9800         call dword ptr [0x98ca48]
// 00890b9f  50                   push eax
// 00890ba0  ff1520ca9800         call dword ptr [0x98ca20]
// 00890ba6  68b0647f00           push 0x7f64b0
// 00890bab  b9d0bab900           mov ecx, 0xb9bad0
// 00890bb0  e887580900           call 0x92643c
// 00890bb5  85c0                 test eax, eax
// 00890bb7  7505                 jne 0x890bbe
// 00890bb9  e84e2ff6ff           call 0x7f3b0c
// 00890bbe  ff4004               inc dword ptr [eax + 4]
// 00890bc1  8b06                 mov eax, dword ptr [esi]
// 00890bc3  8b5010               mov edx, dword ptr [eax + 0x10]
// 00890bc6  8bce                 mov ecx, esi
// 00890bc8  ffd2                 call edx
// 00890bca  68b0647f00           push 0x7f64b0
// 00890bcf  b9d0bab900           mov ecx, 0xb9bad0
// 00890bd4  e863580900           call 0x92643c
// 00890bd9  85c0                 test eax, eax
// 00890bdb  7505                 jne 0x890be2
// 00890bdd  e82a2ff6ff           call 0x7f3b0c
// 00890be2  ff4804               dec dword ptr [eax + 4]
// 00890be5  8b4604               mov eax, dword ptr [esi + 4]
// 00890be8  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00890bef  752e                 jne 0x890c1f
// 00890bf1  837c241000           cmp dword ptr [esp + 0x10], 0
// 00890bf6  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00890bf9  8b5644               mov edx, dword ptr [esi + 0x44]
// 00890bfc  894e28               mov dword ptr [esi + 0x28], ecx
// 00890bff  89562c               mov dword ptr [esi + 0x2c], edx
// 00890c02  751b                 jne 0x890c1f
// 00890c04  8b442430             mov eax, dword ptr [esp + 0x30]
// 00890c08  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00890c0c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00890c10  895e18               mov dword ptr [esi + 0x18], ebx
// 00890c13  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00890c16  894620               mov dword ptr [esi + 0x20], eax
// 00890c19  894e24               mov dword ptr [esi + 0x24], ecx
// 00890c1c  895614               mov dword ptr [esi + 0x14], edx
// 00890c1f  5f                   pop edi
// 00890c20  5e                   pop esi
// 00890c21  5d                   pop ebp
// 00890c22  5b                   pop ebx
// 00890c23  83c428               add esp, 0x28
// 00890c26  c20800               ret 8
// copied from an identical function in another client (function ?StartDrag@CXTPDockContext@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockContext.cpp