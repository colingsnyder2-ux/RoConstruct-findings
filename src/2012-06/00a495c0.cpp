// roc 2012-06 00a495c0  unit: CXTPDockingPaneContext  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a495c0
//
// 00a495c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a495c4  83ec28               sub esp, 0x28
// 00a495c7  53                   push ebx
// 00a495c8  55                   push ebp
// 00a495c9  56                   push esi
// 00a495ca  8bf1                 mov esi, ecx
// 00a495cc  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00a495d2  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 00a495d8  2bc1                 sub eax, ecx
// 00a495da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a495de  57                   push edi
// 00a495df  2bca                 sub ecx, edx
// 00a495e1  51                   push ecx
// 00a495e2  50                   push eax
// 00a495e3  8dbe0c010000         lea edi, [esi + 0x10c]
// 00a495e9  57                   push edi
// 00a495ea  ff15f43ab200         call dword ptr [0xb23af4]
// 00a495f0  8d9efc000000         lea ebx, [esi + 0xfc]
// 00a495f6  8d442418             lea eax, [esp + 0x18]
// 00a495fa  53                   push ebx
// 00a495fb  50                   push eax
// 00a495fc  e8cf0ff8ff           call 0x9ca5d0
// 00a49601  8bc8                 mov ecx, eax
// 00a49603  e8280bf8ff           call 0x9ca130
// 00a49608  50                   push eax
// 00a49609  57                   push edi
// 00a4960a  8d4c2430             lea ecx, [esp + 0x30]
// 00a4960e  51                   push ecx
// 00a4960f  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a49615  85c0                 test eax, eax
// 00a49617  7416                 je 0xa4962f
// 00a49619  8b17                 mov edx, dword ptr [edi]
// 00a4961b  8b4704               mov eax, dword ptr [edi + 4]
// 00a4961e  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a49621  8913                 mov dword ptr [ebx], edx
// 00a49623  8b570c               mov edx, dword ptr [edi + 0xc]
// 00a49626  894304               mov dword ptr [ebx + 4], eax
// 00a49629  894b08               mov dword ptr [ebx + 8], ecx
// 00a4962c  89530c               mov dword ptr [ebx + 0xc], edx
// 00a4962f  53                   push ebx
// 00a49630  e8fbd3ffff           call 0xa46a30
// 00a49635  83c404               add esp, 4
// 00a49638  53                   push ebx
// 00a49639  ff15f03ab200         call dword ptr [0xb23af0]
// 00a4963f  85c0                 test eax, eax
// 00a49641  7519                 jne 0xa4965c
// 00a49643  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00a49649  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 00a49650  740a                 je 0xa4965c
// 00a49652  8b16                 mov edx, dword ptr [esi]
// 00a49654  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a49657  53                   push ebx
// 00a49658  8bce                 mov ecx, esi
// 00a4965a  ffd0                 call eax
// 00a4965c  8d86b8000000         lea eax, [esi + 0xb8]
// 00a49662  33ed                 xor ebp, ebp
// 00a49664  50                   push eax
// 00a49665  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 00a4966b  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 00a49671  ff15903ab200         call dword ptr [0xb23a90]
// 00a49677  6a11                 push 0x11
// 00a49679  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 00a4967f  ff15843ab200         call dword ptr [0xb23a84]
// 00a49685  6685c0               test ax, ax
// 00a49688  7c1b                 jl 0xa496a5
// 00a4968a  39ae4c010000         cmp dword ptr [esi + 0x14c], ebp
// 00a49690  7413                 je 0xa496a5
// 00a49692  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a49696  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a4969a  8b16                 mov edx, dword ptr [esi]
// 00a4969c  8b5220               mov edx, dword ptr [edx + 0x20]
// 00a4969f  50                   push eax
// 00a496a0  51                   push ecx
// 00a496a1  8bce                 mov ecx, esi
// 00a496a3  ffd2                 call edx
// 00a496a5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a496a9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a496ad  8986ec000000         mov dword ptr [esi + 0xec], eax
// 00a496b3  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 00a496b9  39aeb0000000         cmp dword ptr [esi + 0xb0], ebp
// 00a496bf  0f843b020000         je 0xa49900
// 00a496c5  8bce                 mov ecx, esi
// 00a496c7  e864fbffff           call 0xa49230
// 00a496cc  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a496d2  33db                 xor ebx, ebx
// 00a496d4  3bc5                 cmp eax, ebp
// 00a496d6  0f8424020000         je 0xa49900
// 00a496dc  eb06                 jmp 0xa496e4
// 00a496de  8bff                 mov edi, edi
// 00a496e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a496e4  8b5004               mov edx, dword ptr [eax + 4]
// 00a496e7  8b7808               mov edi, dword ptr [eax + 8]
// 00a496ea  89542414             mov dword ptr [esp + 0x14], edx
// 00a496ee  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a496f2  3bdd                 cmp ebx, ebp
// 00a496f4  0f85e0010000         jne 0xa498da
// 00a496fa  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a496fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a49702  50                   push eax
// 00a49703  51                   push ecx
// 00a49704  8bcf                 mov ecx, edi
// 00a49706  e885caffff           call 0xa46190
// 00a4970b  8be8                 mov ebp, eax
// 00a4970d  85ed                 test ebp, ebp
// 00a4970f  0f84c5010000         je 0xa498da
// 00a49715  f6475420             test byte ptr [edi + 0x54], 0x20
// 00a49719  7438                 je 0xa49753
// 00a4971b  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00a49721  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00a49727  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00a4972d  898630010000         mov dword ptr [esi + 0x130], eax
// 00a49733  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00a49739  89962c010000         mov dword ptr [esi + 0x12c], edx
// 00a4973f  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00a49745  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00a4974b  899638010000         mov dword ptr [esi + 0x138], edx
// 00a49751  eb3a                 jmp 0xa4978d
// 00a49753  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00a49759  e842cef7ff           call 0x9c65a0
// 00a4975e  8d4c2428             lea ecx, [esp + 0x28]
// 00a49762  51                   push ecx
// 00a49763  8bc8                 mov ecx, eax
// 00a49765  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00a4976b  e86009ffff           call 0xa3a0d0
// 00a49770  8b10                 mov edx, dword ptr [eax]
// 00a49772  899630010000         mov dword ptr [esi + 0x130], edx
// 00a49778  8b4804               mov ecx, dword ptr [eax + 4]
// 00a4977b  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00a49781  8b5008               mov edx, dword ptr [eax + 8]
// 00a49784  899638010000         mov dword ptr [esi + 0x138], edx
// 00a4978a  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a4978d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a49793  8d45ff               lea eax, [ebp - 1]
// 00a49796  83f80f               cmp eax, 0xf
// 00a49799  0f87a4000000         ja 0xa49843
// 00a4979f  0fb6882c99a400       movzx ecx, byte ptr [eax + 0xa4992c]
// 00a497a6  ff248d1499a400       jmp dword ptr [ecx*4 + 0xa49914]
// 00a497ad  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00a497b3  038634010000         add eax, dword ptr [esi + 0x134]
// 00a497b9  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 00a497c3  99                   cdq 
// 00a497c4  2bc2                 sub eax, edx
// 00a497c6  d1f8                 sar eax, 1
// 00a497c8  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a497ce  eb73                 jmp 0xa49843
// 00a497d0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00a497d6  038634010000         add eax, dword ptr [esi + 0x134]
// 00a497dc  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 00a497e6  99                   cdq 
// 00a497e7  2bc2                 sub eax, edx
// 00a497e9  d1f8                 sar eax, 1
// 00a497eb  898634010000         mov dword ptr [esi + 0x134], eax
// 00a497f1  eb50                 jmp 0xa49843
// 00a497f3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00a497f9  038630010000         add eax, dword ptr [esi + 0x130]
// 00a497ff  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 00a49809  99                   cdq 
// 00a4980a  2bc2                 sub eax, edx
// 00a4980c  d1f8                 sar eax, 1
// 00a4980e  898638010000         mov dword ptr [esi + 0x138], eax
// 00a49814  eb2d                 jmp 0xa49843
// 00a49816  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00a4981c  038630010000         add eax, dword ptr [esi + 0x130]
// 00a49822  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 00a4982c  99                   cdq 
// 00a4982d  2bc2                 sub eax, edx
// 00a4982f  d1f8                 sar eax, 1
// 00a49831  898630010000         mov dword ptr [esi + 0x130], eax
// 00a49837  eb0a                 jmp 0xa49843
// 00a49839  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 00a49843  83fd10               cmp ebp, 0x10
// 00a49846  7421                 je 0xa49869
// 00a49848  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00a4984e  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00a49854  52                   push edx
// 00a49855  50                   push eax
// 00a49856  8bce                 mov ecx, esi
// 00a49858  e8e3e7ffff           call 0xa48040
// 00a4985d  85c0                 test eax, eax
// 00a4985f  7528                 jne 0xa49889
// 00a49861  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00a49867  eb6c                 jmp 0xa498d5
// 00a49869  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00a4986f  51                   push ecx
// 00a49870  8bce                 mov ecx, esi
// 00a49872  e899e8ffff           call 0xa48110
// 00a49877  85c0                 test eax, eax
// 00a49879  7556                 jne 0xa498d1
// 00a4987b  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00a49881  898644010000         mov dword ptr [esi + 0x144], eax
// 00a49887  eb4c                 jmp 0xa498d5
// 00a49889  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 00a4988f  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00a49895  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 00a4989b  52                   push edx
// 00a4989c  50                   push eax
// 00a4989d  51                   push ecx
// 00a4989e  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00a498a4  8d542424             lea edx, [esp + 0x24]
// 00a498a8  52                   push edx
// 00a498a9  e842d3f7ff           call 0x9c6bf0
// 00a498ae  8b08                 mov ecx, dword ptr [eax]
// 00a498b0  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00a498b6  8b5004               mov edx, dword ptr [eax + 4]
// 00a498b9  899634010000         mov dword ptr [esi + 0x134], edx
// 00a498bf  8b4808               mov ecx, dword ptr [eax + 8]
// 00a498c2  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00a498c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a498cb  89963c010000         mov dword ptr [esi + 0x13c], edx
// 00a498d1  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a498d5  bb01000000           mov ebx, 1
// 00a498da  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a498de  394758               cmp dword ptr [edi + 0x58], eax
// 00a498e1  7411                 je 0xa498f4
// 00a498e3  6a00                 push 0
// 00a498e5  894758               mov dword ptr [edi + 0x58], eax
// 00a498e8  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a498eb  6a00                 push 0
// 00a498ed  50                   push eax
// 00a498ee  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a498f4  33ed                 xor ebp, ebp
// 00a498f6  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00a498fa  0f85e0fdffff         jne 0xa496e0
// 00a49900  8b16                 mov edx, dword ptr [esi]
// 00a49902  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a49905  55                   push ebp
// 00a49906  8bce                 mov ecx, esi
// 00a49908  ffd0                 call eax
// 00a4990a  5f                   pop edi
// 00a4990b  5e                   pop esi
// 00a4990c  5d                   pop ebp
// 00a4990d  5b                   pop ebx
// 00a4990e  83c428               add esp, 0x28
// 00a49911  c20800               ret 8
// 00a49914  f397                 xchg edi, eax
// 00a49916  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a49917  0016                 add byte ptr [esi], dl
// 00a49919  98                   cwde 
// 00a4991a  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4991b  00ad97a400d0         add byte ptr [ebp - 0x2fff5b69], ch
// 00a49921  97                   xchg edi, eax
// 00a49922  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a49923  0039                 add byte ptr [ecx], bh
// 00a49925  98                   cwde 
// 00a49926  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a49927  004398               add byte ptr [ebx - 0x68], al
// 00a4992a  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4992b  0000                 add byte ptr [eax], al
// 00a4992d  010502050505         add dword ptr [0x5050502], eax
// 00a49933  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp