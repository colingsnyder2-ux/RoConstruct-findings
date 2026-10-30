// roc 2009-12 00807980  unit: CXTPCommandBar  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807980
//
// 00807980  51                   push ecx
// 00807981  53                   push ebx
// 00807982  56                   push esi
// 00807983  8bf1                 mov esi, ecx
// 00807985  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0080798b  33db                 xor ebx, ebx
// 0080798d  57                   push edi
// 0080798e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00807992  3bc3                 cmp eax, ebx
// 00807994  7404                 je 0x80799a
// 00807996  3bfb                 cmp edi, ebx
// 00807998  7504                 jne 0x80799e
// 0080799a  3bc7                 cmp eax, edi
// 0080799c  750f                 jne 0x8079ad
// 0080799e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 008079a4  5f                   pop edi
// 008079a5  5e                   pop esi
// 008079a6  33c0                 xor eax, eax
// 008079a8  5b                   pop ebx
// 008079a9  59                   pop ecx
// 008079aa  c20c00               ret 0xc
// 008079ad  55                   push ebp
// 008079ae  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 008079b4  e817cbffff           call 0x8044d0
// 008079b9  8bc8                 mov ecx, eax
// 008079bb  89442410             mov dword ptr [esp + 0x10], eax
// 008079bf  e8ace10000           call 0x815b70
// 008079c4  8be8                 mov ebp, eax
// 008079c6  3bfb                 cmp edi, ebx
// 008079c8  0f84fe000000         je 0x807acc
// 008079ce  399ef8000000         cmp dword ptr [esi + 0xf8], ebx
// 008079d4  7518                 jne 0x8079ee
// 008079d6  8bce                 mov ecx, esi
// 008079d8  e8b3f6ffff           call 0x807090
// 008079dd  8b4020               mov eax, dword ptr [eax + 0x20]
// 008079e0  53                   push ebx
// 008079e1  56                   push esi
// 008079e2  6858280000           push 0x2858
// 008079e7  50                   push eax
// 008079e8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008079ee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008079f2  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 008079f6  750b                 jne 0x807a03
// 008079f8  3bcb                 cmp ecx, ebx
// 008079fa  7507                 jne 0x807a03
// 008079fc  b801000000           mov eax, 1
// 00807a01  eb02                 jmp 0x807a05
// 00807a03  33c0                 xor eax, eax
// 00807a05  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00807a0b  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00807a11  399ec4000000         cmp dword ptr [esi + 0xc4], ebx
// 00807a17  743d                 je 0x807a56
// 00807a19  399ed4000000         cmp dword ptr [esi + 0xd4], ebx
// 00807a1f  7528                 jne 0x807a49
// 00807a21  8b3deccb9800         mov edi, dword ptr [0x98cbec]
// 00807a27  ffd7                 call edi
// 00807a29  85c0                 test eax, eax
// 00807a2b  7404                 je 0x807a31
// 00807a2d  ffd7                 call edi
// 00807a2f  eb12                 jmp 0x807a43
// 00807a31  8bce                 mov ecx, esi
// 00807a33  e858f6ffff           call 0x807090
// 00807a38  3bc3                 cmp eax, ebx
// 00807a3a  7504                 jne 0x807a40
// 00807a3c  33c0                 xor eax, eax
// 00807a3e  eb03                 jmp 0x807a43
// 00807a40  8b4020               mov eax, dword ptr [eax + 0x20]
// 00807a43  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00807a49  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00807a4f  51                   push ecx
// 00807a50  ff15f0ca9800         call dword ptr [0x98caf0]
// 00807a56  53                   push ebx
// 00807a57  56                   push esi
// 00807a58  8bcd                 mov ecx, ebp
// 00807a5a  e8e17b0600           call 0x86f640
// 00807a5f  68709a7f00           push 0x7f9a70
// 00807a64  b910bbb900           mov ecx, 0xb9bb10
// 00807a69  8d7e54               lea edi, [esi + 0x54]
// 00807a6c  e8cbe91100           call 0x92643c
// 00807a71  3bc3                 cmp eax, ebx
// 00807a73  7505                 jne 0x807a7a
// 00807a75  e892c0feff           call 0x7f3b0c
// 00807a7a  57                   push edi
// 00807a7b  8bc8                 mov ecx, eax
// 00807a7d  e80e940600           call 0x870e90
// 00807a82  e897c0feff           call 0x7f3b1e
// 00807a87  68007f0000           push 0x7f00
// 00807a8c  53                   push ebx
// 00807a8d  ff1548ca9800         call dword ptr [0x98ca48]
// 00807a93  50                   push eax
// 00807a94  ff1520ca9800         call dword ptr [0x98ca20]
// 00807a9a  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00807a9e  0f8405010000         je 0x807ba9
// 00807aa4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00807aaa  8b3e                 mov edi, dword ptr [esi]
// 00807aac  6a02                 push 2
// 00807aae  6a01                 push 1
// 00807ab0  53                   push ebx
// 00807ab1  6a01                 push 1
// 00807ab3  6a01                 push 1
// 00807ab5  6aff                 push -1
// 00807ab7  e814da0300           call 0x8454d0
// 00807abc  8b9750010000         mov edx, dword ptr [edi + 0x150]
// 00807ac2  50                   push eax
// 00807ac3  8bce                 mov ecx, esi
// 00807ac5  ffd2                 call edx
// 00807ac7  e9dd000000           jmp 0x807ba9
// 00807acc  56                   push esi
// 00807acd  8bcd                 mov ecx, ebp
// 00807acf  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 00807ad5  899e30010000         mov dword ptr [esi + 0x130], ebx
// 00807adb  e8e0750600           call 0x86f0c0
// 00807ae0  68709a7f00           push 0x7f9a70
// 00807ae5  b910bbb900           mov ecx, 0xb9bb10
// 00807aea  8d7e54               lea edi, [esi + 0x54]
// 00807aed  e84ae91100           call 0x92643c
// 00807af2  3bc3                 cmp eax, ebx
// 00807af4  7505                 jne 0x807afb
// 00807af6  e811c0feff           call 0x7f3b0c
// 00807afb  57                   push edi
// 00807afc  8bc8                 mov ecx, eax
// 00807afe  e8cd930600           call 0x870ed0
// 00807b03  53                   push ebx
// 00807b04  6aff                 push -1
// 00807b06  8bce                 mov ecx, esi
// 00807b08  e893eaffff           call 0x8065a0
// 00807b0d  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00807b11  740f                 je 0x807b22
// 00807b13  8b06                 mov eax, dword ptr [esi]
// 00807b15  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00807b1b  53                   push ebx
// 00807b1c  6aff                 push -1
// 00807b1e  8bce                 mov ecx, esi
// 00807b20  ffd2                 call edx
// 00807b22  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00807b28  3bc3                 cmp eax, ebx
// 00807b2a  7415                 je 0x807b41
// 00807b2c  399ec4000000         cmp dword ptr [esi + 0xc4], ebx
// 00807b32  740d                 je 0x807b41
// 00807b34  50                   push eax
// 00807b35  ff15ecca9800         call dword ptr [0x98caec]
// 00807b3b  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 00807b41  8b06                 mov eax, dword ptr [esi]
// 00807b43  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00807b49  6a01                 push 1
// 00807b4b  53                   push ebx
// 00807b4c  8bce                 mov ecx, esi
// 00807b4e  ffd2                 call edx
// 00807b50  53                   push ebx
// 00807b51  8bcd                 mov ecx, ebp
// 00807b53  e848740600           call 0x86efa0
// 00807b58  85c0                 test eax, eax
// 00807b5a  7503                 jne 0x807b5f
// 00807b5c  895d28               mov dword ptr [ebp + 0x28], ebx
// 00807b5f  395e20               cmp dword ptr [esi + 0x20], ebx
// 00807b62  743f                 je 0x807ba3
// 00807b64  ff15eccb9800         call dword ptr [0x98cbec]
// 00807b6a  50                   push eax
// 00807b6b  e8babffeff           call 0x7f3b2a
// 00807b70  3bc6                 cmp eax, esi
// 00807b72  752f                 jne 0x807ba3
// 00807b74  8b4620               mov eax, dword ptr [esi + 0x20]
// 00807b77  50                   push eax
// 00807b78  ff15bccb9800         call dword ptr [0x98cbbc]
// 00807b7e  50                   push eax
// 00807b7f  e8a6bffeff           call 0x7f3b2a
// 00807b84  85c0                 test eax, eax
// 00807b86  741b                 je 0x807ba3
// 00807b88  53                   push ebx
// 00807b89  56                   push esi
// 00807b8a  8bce                 mov ecx, esi
// 00807b8c  e86fb1bfff           call 0x402d00
// 00807b91  8bc8                 mov ecx, eax
// 00807b93  e828ceffff           call 0x8049c0
// 00807b98  3bc3                 cmp eax, ebx
// 00807b9a  7407                 je 0x807ba3
// 00807b9c  8bc8                 mov ecx, eax
// 00807b9e  e85fc0feff           call 0x7f3c02
// 00807ba3  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 00807ba9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00807bad  3bcb                 cmp ecx, ebx
// 00807baf  7410                 je 0x807bc1
// 00807bb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00807bb5  8b11                 mov edx, dword ptr [ecx]
// 00807bb7  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00807bbd  50                   push eax
// 00807bbe  56                   push esi
// 00807bbf  ffd2                 call edx
// 00807bc1  5d                   pop ebp
// 00807bc2  5f                   pop edi
// 00807bc3  5e                   pop esi
// 00807bc4  b801000000           mov eax, 1
// 00807bc9  5b                   pop ebx
// 00807bca  59                   pop ecx
// 00807bcb  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTrackingMode@CXTPCommandBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp