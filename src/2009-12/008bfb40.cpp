// roc 2009-12 008bfb40  unit: CXTPDockingPaneContext  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bfb40
//
// 008bfb40  8b442404             mov eax, dword ptr [esp + 4]
// 008bfb44  83ec28               sub esp, 0x28
// 008bfb47  53                   push ebx
// 008bfb48  55                   push ebp
// 008bfb49  56                   push esi
// 008bfb4a  8bf1                 mov esi, ecx
// 008bfb4c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008bfb52  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 008bfb58  2bc1                 sub eax, ecx
// 008bfb5a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bfb5e  57                   push edi
// 008bfb5f  2bca                 sub ecx, edx
// 008bfb61  51                   push ecx
// 008bfb62  50                   push eax
// 008bfb63  8dbe0c010000         lea edi, [esi + 0x10c]
// 008bfb69  57                   push edi
// 008bfb6a  ff156ccc9800         call dword ptr [0x98cc6c]
// 008bfb70  8d9efc000000         lea ebx, [esi + 0xfc]
// 008bfb76  8d442418             lea eax, [esp + 0x18]
// 008bfb7a  53                   push ebx
// 008bfb7b  50                   push eax
// 008bfb7c  e8efcbf7ff           call 0x83c770
// 008bfb81  8bc8                 mov ecx, eax
// 008bfb83  e848c7f7ff           call 0x83c2d0
// 008bfb88  50                   push eax
// 008bfb89  57                   push edi
// 008bfb8a  8d4c2430             lea ecx, [esp + 0x30]
// 008bfb8e  51                   push ecx
// 008bfb8f  ff15dcca9800         call dword ptr [0x98cadc]
// 008bfb95  85c0                 test eax, eax
// 008bfb97  7416                 je 0x8bfbaf
// 008bfb99  8b17                 mov edx, dword ptr [edi]
// 008bfb9b  8b4704               mov eax, dword ptr [edi + 4]
// 008bfb9e  8b4f08               mov ecx, dword ptr [edi + 8]
// 008bfba1  8913                 mov dword ptr [ebx], edx
// 008bfba3  8b570c               mov edx, dword ptr [edi + 0xc]
// 008bfba6  894304               mov dword ptr [ebx + 4], eax
// 008bfba9  894b08               mov dword ptr [ebx + 8], ecx
// 008bfbac  89530c               mov dword ptr [ebx + 0xc], edx
// 008bfbaf  53                   push ebx
// 008bfbb0  e80bd5ffff           call 0x8bd0c0
// 008bfbb5  83c404               add esp, 4
// 008bfbb8  53                   push ebx
// 008bfbb9  ff1568cc9800         call dword ptr [0x98cc68]
// 008bfbbf  85c0                 test eax, eax
// 008bfbc1  7519                 jne 0x8bfbdc
// 008bfbc3  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008bfbc9  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 008bfbd0  740a                 je 0x8bfbdc
// 008bfbd2  8b16                 mov edx, dword ptr [esi]
// 008bfbd4  8b4224               mov eax, dword ptr [edx + 0x24]
// 008bfbd7  53                   push ebx
// 008bfbd8  8bce                 mov ecx, esi
// 008bfbda  ffd0                 call eax
// 008bfbdc  8d86b8000000         lea eax, [esi + 0xb8]
// 008bfbe2  33ed                 xor ebp, ebp
// 008bfbe4  50                   push eax
// 008bfbe5  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 008bfbeb  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 008bfbf1  ff159cca9800         call dword ptr [0x98ca9c]
// 008bfbf7  6a11                 push 0x11
// 008bfbf9  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 008bfbff  ff1530cc9800         call dword ptr [0x98cc30]
// 008bfc05  6685c0               test ax, ax
// 008bfc08  7c1b                 jl 0x8bfc25
// 008bfc0a  39ae4c010000         cmp dword ptr [esi + 0x14c], ebp
// 008bfc10  7413                 je 0x8bfc25
// 008bfc12  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bfc16  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bfc1a  8b16                 mov edx, dword ptr [esi]
// 008bfc1c  8b5220               mov edx, dword ptr [edx + 0x20]
// 008bfc1f  50                   push eax
// 008bfc20  51                   push ecx
// 008bfc21  8bce                 mov ecx, esi
// 008bfc23  ffd2                 call edx
// 008bfc25  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008bfc29  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bfc2d  8986ec000000         mov dword ptr [esi + 0xec], eax
// 008bfc33  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 008bfc39  39aeb0000000         cmp dword ptr [esi + 0xb0], ebp
// 008bfc3f  0f843b020000         je 0x8bfe80
// 008bfc45  8bce                 mov ecx, esi
// 008bfc47  e864fbffff           call 0x8bf7b0
// 008bfc4c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008bfc52  33db                 xor ebx, ebx
// 008bfc54  3bc5                 cmp eax, ebp
// 008bfc56  0f8424020000         je 0x8bfe80
// 008bfc5c  eb06                 jmp 0x8bfc64
// 008bfc5e  8bff                 mov edi, edi
// 008bfc60  8b442414             mov eax, dword ptr [esp + 0x14]
// 008bfc64  8b5004               mov edx, dword ptr [eax + 4]
// 008bfc67  8b7808               mov edi, dword ptr [eax + 8]
// 008bfc6a  89542414             mov dword ptr [esp + 0x14], edx
// 008bfc6e  896c2410             mov dword ptr [esp + 0x10], ebp
// 008bfc72  3bdd                 cmp ebx, ebp
// 008bfc74  0f85e0010000         jne 0x8bfe5a
// 008bfc7a  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bfc7e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bfc82  50                   push eax
// 008bfc83  51                   push ecx
// 008bfc84  8bcf                 mov ecx, edi
// 008bfc86  e885cbffff           call 0x8bc810
// 008bfc8b  8be8                 mov ebp, eax
// 008bfc8d  85ed                 test ebp, ebp
// 008bfc8f  0f84c5010000         je 0x8bfe5a
// 008bfc95  f6475420             test byte ptr [edi + 0x54], 0x20
// 008bfc99  7438                 je 0x8bfcd3
// 008bfc9b  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008bfca1  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008bfca7  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008bfcad  898630010000         mov dword ptr [esi + 0x130], eax
// 008bfcb3  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008bfcb9  89962c010000         mov dword ptr [esi + 0x12c], edx
// 008bfcbf  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 008bfcc5  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008bfccb  899638010000         mov dword ptr [esi + 0x138], edx
// 008bfcd1  eb3a                 jmp 0x8bfd0d
// 008bfcd3  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bfcd9  e8d289f7ff           call 0x8386b0
// 008bfcde  8d4c2428             lea ecx, [esp + 0x28]
// 008bfce2  51                   push ecx
// 008bfce3  8bc8                 mov ecx, eax
// 008bfce5  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008bfceb  e8b00affff           call 0x8b07a0
// 008bfcf0  8b10                 mov edx, dword ptr [eax]
// 008bfcf2  899630010000         mov dword ptr [esi + 0x130], edx
// 008bfcf8  8b4804               mov ecx, dword ptr [eax + 4]
// 008bfcfb  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008bfd01  8b5008               mov edx, dword ptr [eax + 8]
// 008bfd04  899638010000         mov dword ptr [esi + 0x138], edx
// 008bfd0a  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bfd0d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008bfd13  8d45ff               lea eax, [ebp - 1]
// 008bfd16  83f80f               cmp eax, 0xf
// 008bfd19  0f87a4000000         ja 0x8bfdc3
// 008bfd1f  0fb688acfe8b00       movzx ecx, byte ptr [eax + 0x8bfeac]
// 008bfd26  ff248d94fe8b00       jmp dword ptr [ecx*4 + 0x8bfe94]
// 008bfd2d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008bfd33  038634010000         add eax, dword ptr [esi + 0x134]
// 008bfd39  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 008bfd43  99                   cdq 
// 008bfd44  2bc2                 sub eax, edx
// 008bfd46  d1f8                 sar eax, 1
// 008bfd48  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008bfd4e  eb73                 jmp 0x8bfdc3
// 008bfd50  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008bfd56  038634010000         add eax, dword ptr [esi + 0x134]
// 008bfd5c  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 008bfd66  99                   cdq 
// 008bfd67  2bc2                 sub eax, edx
// 008bfd69  d1f8                 sar eax, 1
// 008bfd6b  898634010000         mov dword ptr [esi + 0x134], eax
// 008bfd71  eb50                 jmp 0x8bfdc3
// 008bfd73  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008bfd79  038630010000         add eax, dword ptr [esi + 0x130]
// 008bfd7f  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 008bfd89  99                   cdq 
// 008bfd8a  2bc2                 sub eax, edx
// 008bfd8c  d1f8                 sar eax, 1
// 008bfd8e  898638010000         mov dword ptr [esi + 0x138], eax
// 008bfd94  eb2d                 jmp 0x8bfdc3
// 008bfd96  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008bfd9c  038630010000         add eax, dword ptr [esi + 0x130]
// 008bfda2  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 008bfdac  99                   cdq 
// 008bfdad  2bc2                 sub eax, edx
// 008bfdaf  d1f8                 sar eax, 1
// 008bfdb1  898630010000         mov dword ptr [esi + 0x130], eax
// 008bfdb7  eb0a                 jmp 0x8bfdc3
// 008bfdb9  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 008bfdc3  83fd10               cmp ebp, 0x10
// 008bfdc6  7421                 je 0x8bfde9
// 008bfdc8  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008bfdce  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008bfdd4  52                   push edx
// 008bfdd5  50                   push eax
// 008bfdd6  8bce                 mov ecx, esi
// 008bfdd8  e8a3e8ffff           call 0x8be680
// 008bfddd  85c0                 test eax, eax
// 008bfddf  7528                 jne 0x8bfe09
// 008bfde1  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008bfde7  eb6c                 jmp 0x8bfe55
// 008bfde9  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008bfdef  51                   push ecx
// 008bfdf0  8bce                 mov ecx, esi
// 008bfdf2  e859e9ffff           call 0x8be750
// 008bfdf7  85c0                 test eax, eax
// 008bfdf9  7556                 jne 0x8bfe51
// 008bfdfb  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008bfe01  898644010000         mov dword ptr [esi + 0x144], eax
// 008bfe07  eb4c                 jmp 0x8bfe55
// 008bfe09  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 008bfe0f  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 008bfe15  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008bfe1b  52                   push edx
// 008bfe1c  50                   push eax
// 008bfe1d  51                   push ecx
// 008bfe1e  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bfe24  8d542424             lea edx, [esp + 0x24]
// 008bfe28  52                   push edx
// 008bfe29  e8428ff7ff           call 0x838d70
// 008bfe2e  8b08                 mov ecx, dword ptr [eax]
// 008bfe30  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008bfe36  8b5004               mov edx, dword ptr [eax + 4]
// 008bfe39  899634010000         mov dword ptr [esi + 0x134], edx
// 008bfe3f  8b4808               mov ecx, dword ptr [eax + 8]
// 008bfe42  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008bfe48  8b500c               mov edx, dword ptr [eax + 0xc]
// 008bfe4b  89963c010000         mov dword ptr [esi + 0x13c], edx
// 008bfe51  896c2410             mov dword ptr [esp + 0x10], ebp
// 008bfe55  bb01000000           mov ebx, 1
// 008bfe5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008bfe5e  394758               cmp dword ptr [edi + 0x58], eax
// 008bfe61  7411                 je 0x8bfe74
// 008bfe63  6a00                 push 0
// 008bfe65  894758               mov dword ptr [edi + 0x58], eax
// 008bfe68  8b4720               mov eax, dword ptr [edi + 0x20]
// 008bfe6b  6a00                 push 0
// 008bfe6d  50                   push eax
// 008bfe6e  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008bfe74  33ed                 xor ebp, ebp
// 008bfe76  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008bfe7a  0f85e0fdffff         jne 0x8bfc60
// 008bfe80  8b16                 mov edx, dword ptr [esi]
// 008bfe82  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008bfe85  55                   push ebp
// 008bfe86  8bce                 mov ecx, esi
// 008bfe88  ffd0                 call eax
// 008bfe8a  5f                   pop edi
// 008bfe8b  5e                   pop esi
// 008bfe8c  5d                   pop ebp
// 008bfe8d  5b                   pop ebx
// 008bfe8e  83c428               add esp, 0x28
// 008bfe91  c20800               ret 8
// 008bfe94  73fd                 jae 0x8bfe93
// 008bfe96  8b00                 mov eax, dword ptr [eax]
// 008bfe98  96                   xchg esi, eax
// 008bfe99  fd                   std 
// 008bfe9a  8b00                 mov eax, dword ptr [eax]
// 008bfe9c  2dfd8b0050           sub eax, 0x50008bfd
// 008bfea1  fd                   std 
// 008bfea2  8b00                 mov eax, dword ptr [eax]
// 008bfea4  b9fd8b00c3           mov ecx, 0xc3008bfd
// 008bfea9  fd                   std 
// 008bfeaa  8b00                 mov eax, dword ptr [eax]
// 008bfeac  0001                 add byte ptr [ecx], al
// 008bfeae  0502050505           add eax, 0x5050502
// 008bfeb3  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp