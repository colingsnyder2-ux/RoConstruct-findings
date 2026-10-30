// roc 2009-12 0088cb20  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 678 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088cb20
//
// 0088cb20  83ec40               sub esp, 0x40
// 0088cb23  53                   push ebx
// 0088cb24  55                   push ebp
// 0088cb25  56                   push esi
// 0088cb26  8bf1                 mov esi, ecx
// 0088cb28  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cb2e  8b01                 mov eax, dword ptr [ecx]
// 0088cb30  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0088cb36  57                   push edi
// 0088cb37  6a00                 push 0
// 0088cb39  6aff                 push -1
// 0088cb3b  ffd2                 call edx
// 0088cb3d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cb43  8b01                 mov eax, dword ptr [ecx]
// 0088cb45  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0088cb4b  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 0088cb51  6a00                 push 0
// 0088cb53  52                   push edx
// 0088cb54  ffd0                 call eax
// 0088cb56  8d4c2424             lea ecx, [esp + 0x24]
// 0088cb5a  51                   push ecx
// 0088cb5b  8bce                 mov ecx, esi
// 0088cb5d  e8aeedffff           call 0x88b910
// 0088cb62  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088cb66  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0088cb6a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088cb6e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0088cb72  89442418             mov dword ptr [esp + 0x18], eax
// 0088cb76  03c3                 add eax, ebx
// 0088cb78  99                   cdq 
// 0088cb79  2bc2                 sub eax, edx
// 0088cb7b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088cb7f  d1f8                 sar eax, 1
// 0088cb81  89442420             mov dword ptr [esp + 0x20], eax
// 0088cb85  89442428             mov dword ptr [esp + 0x28], eax
// 0088cb89  8b442454             mov eax, dword ptr [esp + 0x54]
// 0088cb8d  52                   push edx
// 0088cb8e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088cb92  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088cb96  50                   push eax
// 0088cb97  8d4c241c             lea ecx, [esp + 0x1c]
// 0088cb9b  51                   push ecx
// 0088cb9c  897c2428             mov dword ptr [esp + 0x28], edi
// 0088cba0  897c2438             mov dword ptr [esp + 0x38], edi
// 0088cba4  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0088cba8  ff155cca9800         call dword ptr [0x98ca5c]
// 0088cbae  8d4c2414             lea ecx, [esp + 0x14]
// 0088cbb2  85c0                 test eax, eax
// 0088cbb4  7504                 jne 0x88cbba
// 0088cbb6  8d4c2424             lea ecx, [esp + 0x24]
// 0088cbba  8b11                 mov edx, dword ptr [ecx]
// 0088cbbc  89542440             mov dword ptr [esp + 0x40], edx
// 0088cbc0  8b5104               mov edx, dword ptr [ecx + 4]
// 0088cbc3  89542444             mov dword ptr [esp + 0x44], edx
// 0088cbc7  8b5108               mov edx, dword ptr [ecx + 8]
// 0088cbca  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0088cbcd  89542448             mov dword ptr [esp + 0x48], edx
// 0088cbd1  33d2                 xor edx, edx
// 0088cbd3  85c0                 test eax, eax
// 0088cbd5  0f95c2               setne dl
// 0088cbd8  f7d8                 neg eax
// 0088cbda  1bc0                 sbb eax, eax
// 0088cbdc  83c004               add eax, 4
// 0088cbdf  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0088cbe3  6a00                 push 0
// 0088cbe5  8bce                 mov ecx, esi
// 0088cbe7  8d5412ff             lea edx, [edx + edx - 1]
// 0088cbeb  8bea                 mov ebp, edx
// 0088cbed  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0088cbf3  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0088cbf9  e8c29af6ff           call 0x7f66c0
// 0088cbfe  8b06                 mov eax, dword ptr [esi]
// 0088cc00  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0088cc06  55                   push ebp
// 0088cc07  6a01                 push 1
// 0088cc09  8bce                 mov ecx, esi
// 0088cc0b  ffd2                 call edx
// 0088cc0d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0088cc13  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088cc16  50                   push eax
// 0088cc17  ff152ccc9800         call dword ptr [0x98cc2c]
// 0088cc1d  50                   push eax
// 0088cc1e  e8076ff6ff           call 0x7f3b2a
// 0088cc23  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cc29  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0088cc2c  6a00                 push 0
// 0088cc2e  6812020000           push 0x212
// 0088cc33  68b3010000           push 0x1b3
// 0088cc38  52                   push edx
// 0088cc39  ff1558cc9800         call dword ptr [0x98cc58]
// 0088cc3f  8b1dfcb29800         mov ebx, dword ptr [0x98b2fc]
// 0088cc45  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0088cc4d  ffd3                 call ebx
// 0088cc4f  6a00                 push 0
// 0088cc51  6a00                 push 0
// 0088cc53  8bf8                 mov edi, eax
// 0088cc55  6a00                 push 0
// 0088cc57  8d442430             lea eax, [esp + 0x30]
// 0088cc5b  50                   push eax
// 0088cc5c  ff15b0ca9800         call dword ptr [0x98cab0]
// 0088cc62  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088cc66  3d02020000           cmp eax, 0x202
// 0088cc6b  0f84fe000000         je 0x88cd6f
// 0088cc71  3d00020000           cmp eax, 0x200
// 0088cc76  7546                 jne 0x88ccbe
// 0088cc78  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088cc7c  0fb7c8               movzx ecx, ax
// 0088cc7f  c1e810               shr eax, 0x10
// 0088cc82  50                   push eax
// 0088cc83  51                   push ecx
// 0088cc84  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088cc88  8d4c2448             lea ecx, [esp + 0x48]
// 0088cc8c  51                   push ecx
// 0088cc8d  89442464             mov dword ptr [esp + 0x64], eax
// 0088cc91  ff155cca9800         call dword ptr [0x98ca5c]
// 0088cc97  8b16                 mov edx, dword ptr [esi]
// 0088cc99  50                   push eax
// 0088cc9a  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0088cca0  8bce                 mov ecx, esi
// 0088cca2  ffd0                 call eax
// 0088cca4  85c0                 test eax, eax
// 0088cca6  0f84a3000000         je 0x88cd4f
// 0088ccac  ffd3                 call ebx
// 0088ccae  6a01                 push 1
// 0088ccb0  8bce                 mov ecx, esi
// 0088ccb2  8bf8                 mov edi, eax
// 0088ccb4  e8079af6ff           call 0x7f66c0
// 0088ccb9  e991000000           jmp 0x88cd4f
// 0088ccbe  3d13010000           cmp eax, 0x113
// 0088ccc3  756b                 jne 0x88cd30
// 0088ccc5  817c242cb3010000     cmp dword ptr [esp + 0x2c], 0x1b3
// 0088cccd  7561                 jne 0x88cd30
// 0088cccf  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0088ccd6  7430                 je 0x88cd08
// 0088ccd8  ffd3                 call ebx
// 0088ccda  2bc7                 sub eax, edi
// 0088ccdc  c1e80a               shr eax, 0xa
// 0088ccdf  b901000000           mov ecx, 1
// 0088cce4  83f805               cmp eax, 5
// 0088cce7  7207                 jb 0x88ccf0
// 0088cce9  b914000000           mov ecx, 0x14
// 0088ccee  eb0a                 jmp 0x88ccfa
// 0088ccf0  83f802               cmp eax, 2
// 0088ccf3  7205                 jb 0x88ccfa
// 0088ccf5  b905000000           mov ecx, 5
// 0088ccfa  8b16                 mov edx, dword ptr [esi]
// 0088ccfc  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 0088cd02  55                   push ebp
// 0088cd03  51                   push ecx
// 0088cd04  8bce                 mov ecx, esi
// 0088cd06  ffd0                 call eax
// 0088cd08  837c241000           cmp dword ptr [esp + 0x10], 0
// 0088cd0d  7419                 je 0x88cd28
// 0088cd0f  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cd15  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0088cd18  6a00                 push 0
// 0088cd1a  6a64                 push 0x64
// 0088cd1c  68b3010000           push 0x1b3
// 0088cd21  52                   push edx
// 0088cd22  ff1558cc9800         call dword ptr [0x98cc58]
// 0088cd28  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088cd30  8d442424             lea eax, [esp + 0x24]
// 0088cd34  50                   push eax
// 0088cd35  ff1594ca9800         call dword ptr [0x98ca94]
// 0088cd3b  ff1528cc9800         call dword ptr [0x98cc28]
// 0088cd41  50                   push eax
// 0088cd42  e8e36df6ff           call 0x7f3b2a
// 0088cd47  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 0088cd4d  7520                 jne 0x88cd6f
// 0088cd4f  6a00                 push 0
// 0088cd51  6a00                 push 0
// 0088cd53  6a00                 push 0
// 0088cd55  8d4c2430             lea ecx, [esp + 0x30]
// 0088cd59  51                   push ecx
// 0088cd5a  ff15b0ca9800         call dword ptr [0x98cab0]
// 0088cd60  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088cd64  3d02020000           cmp eax, 0x202
// 0088cd69  0f8502ffffff         jne 0x88cc71
// 0088cd6f  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0088cd75  8b4220               mov eax, dword ptr [edx + 0x20]
// 0088cd78  68b3010000           push 0x1b3
// 0088cd7d  50                   push eax
// 0088cd7e  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0088cd84  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 0088cd8e  ff1520cc9800         call dword ptr [0x98cc20]
// 0088cd94  6a00                 push 0
// 0088cd96  8bce                 mov ecx, esi
// 0088cd98  e82399f6ff           call 0x7f66c0
// 0088cd9d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cda3  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 0088cdaa  5f                   pop edi
// 0088cdab  5e                   pop esi
// 0088cdac  5d                   pop ebp
// 0088cdad  5b                   pop ebx
// 0088cdae  7410                 je 0x88cdc0
// 0088cdb0  8b11                 mov edx, dword ptr [ecx]
// 0088cdb2  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0088cdb8  6a00                 push 0
// 0088cdba  6a01                 push 1
// 0088cdbc  6a00                 push 0
// 0088cdbe  ffd0                 call eax
// 0088cdc0  83c440               add esp, 0x40
// 0088cdc3  c20800               ret 8
// copied from an identical function in another client (function ?TrackSpinButton@CXTPControlEdit@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp