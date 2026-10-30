// roc 2009-12 00829fe0  unit: CXTPReportHeader  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829fe0
//
// 00829fe0  83ec20               sub esp, 0x20
// 00829fe3  53                   push ebx
// 00829fe4  55                   push ebp
// 00829fe5  56                   push esi
// 00829fe6  8bf1                 mov esi, ecx
// 00829fe8  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829feb  8ba9c0010000         mov ebp, dword ptr [ecx + 0x1c0]
// 00829ff1  57                   push edi
// 00829ff2  33db                 xor ebx, ebx
// 00829ff4  53                   push ebx
// 00829ff5  e89644ffff           call 0x81e490
// 00829ffa  ff1520cc9800         call dword ptr [0x98cc20]
// 0082a000  83fd03               cmp ebp, 3
// 0082a003  0f8565010000         jne 0x82a16e
// 0082a009  8b7e38               mov edi, dword ptr [esi + 0x38]
// 0082a00c  3bfb                 cmp edi, ebx
// 0082a00e  0f84cc020000         je 0x82a2e0
// 0082a014  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0082a01a  83f801               cmp eax, 1
// 0082a01d  0f84cf000000         je 0x82a0f2
// 0082a023  83f808               cmp eax, 8
// 0082a026  0f84c6000000         je 0x82a0f2
// 0082a02c  a806                 test al, 6
// 0082a02e  0f84f5000000         je 0x82a129
// 0082a034  395e28               cmp dword ptr [esi + 0x28], ebx
// 0082a037  0f8cec000000         jl 0x82a129
// 0082a03d  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a040  50                   push eax
// 0082a041  8d4c2424             lea ecx, [esp + 0x24]
// 0082a045  e886120200           call 0x84b2d0
// 0082a04a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0082a04d  8b4668               mov eax, dword ptr [esi + 0x68]
// 0082a050  8b5664               mov edx, dword ptr [esi + 0x64]
// 0082a053  894c2410             mov dword ptr [esp + 0x10], ecx
// 0082a057  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0082a05a  89442418             mov dword ptr [esp + 0x18], eax
// 0082a05e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082a062  89542414             mov dword ptr [esp + 0x14], edx
// 0082a066  8b542428             mov edx, dword ptr [esp + 0x28]
// 0082a06a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0082a06e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082a072  50                   push eax
// 0082a073  8954241c             mov dword ptr [esp + 0x1c], edx
// 0082a077  51                   push ecx
// 0082a078  8d542418             lea edx, [esp + 0x18]
// 0082a07c  52                   push edx
// 0082a07d  ff155cca9800         call dword ptr [0x98ca5c]
// 0082a083  85c0                 test eax, eax
// 0082a085  742f                 je 0x82a0b6
// 0082a087  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a08a  57                   push edi
// 0082a08b  e830330400           call 0x86d3c0
// 0082a090  6a01                 push 1
// 0082a092  8bcf                 mov ecx, edi
// 0082a094  8be8                 mov ebp, eax
// 0082a096  e8b5dbffff           call 0x827c50
// 0082a09b  8b4628               mov eax, dword ptr [esi + 0x28]
// 0082a09e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a0a1  55                   push ebp
// 0082a0a2  50                   push eax
// 0082a0a3  e858360400           call 0x86d700
// 0082a0a8  395e44               cmp dword ptr [esi + 0x44], ebx
// 0082a0ab  747c                 je 0x82a129
// 0082a0ad  f644243408           test byte ptr [esp + 0x34], 8
// 0082a0b2  7575                 jne 0x82a129
// 0082a0b4  eb5a                 jmp 0x82a110
// 0082a0b6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0082a0ba  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082a0be  51                   push ecx
// 0082a0bf  52                   push edx
// 0082a0c0  8d4e50               lea ecx, [esi + 0x50]
// 0082a0c3  e8e885c2ff           call 0x4526b0
// 0082a0c8  85c0                 test eax, eax
// 0082a0ca  745d                 je 0x82a129
// 0082a0cc  8b4628               mov eax, dword ptr [esi + 0x28]
// 0082a0cf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a0d2  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0082a0d5  57                   push edi
// 0082a0d6  50                   push eax
// 0082a0d7  e8c43a0400           call 0x86dba0
// 0082a0dc  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a0df  743b                 je 0x82a11c
// 0082a0e1  f644243408           test byte ptr [esp + 0x34], 8
// 0082a0e6  7534                 jne 0x82a11c
// 0082a0e8  53                   push ebx
// 0082a0e9  8bcf                 mov ecx, edi
// 0082a0eb  e860dbffff           call 0x827c50
// 0082a0f0  eb2a                 jmp 0x82a11c
// 0082a0f2  395e7c               cmp dword ptr [esi + 0x7c], ebx
// 0082a0f5  7432                 je 0x82a129
// 0082a0f7  395f54               cmp dword ptr [edi + 0x54], ebx
// 0082a0fa  742d                 je 0x82a129
// 0082a0fc  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a0ff  740a                 je 0x82a10b
// 0082a101  53                   push ebx
// 0082a102  8bcf                 mov ecx, edi
// 0082a104  e847dbffff           call 0x827c50
// 0082a109  eb1e                 jmp 0x82a129
// 0082a10b  395e44               cmp dword ptr [esi + 0x44], ebx
// 0082a10e  7419                 je 0x82a129
// 0082a110  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a113  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0082a116  57                   push edi
// 0082a117  e804350400           call 0x86d620
// 0082a11c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a11f  8b11                 mov edx, dword ptr [ecx]
// 0082a121  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0082a127  ffd0                 call eax
// 0082a129  8b16                 mov edx, dword ptr [esi]
// 0082a12b  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0082a131  8bce                 mov ecx, esi
// 0082a133  899ea0000000         mov dword ptr [esi + 0xa0], ebx
// 0082a139  ffd0                 call eax
// 0082a13b  6a01                 push 1
// 0082a13d  6aff                 push -1
// 0082a13f  8bce                 mov ecx, esi
// 0082a141  e89af0ffff           call 0x8291e0
// 0082a146  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0082a149  895e38               mov dword ptr [esi + 0x38], ebx
// 0082a14c  3bcb                 cmp ecx, ebx
// 0082a14e  0f8486010000         je 0x82a2da
// 0082a154  8b11                 mov edx, dword ptr [ecx]
// 0082a156  8b4268               mov eax, dword ptr [edx + 0x68]
// 0082a159  ffd0                 call eax
// 0082a15b  5f                   pop edi
// 0082a15c  895e30               mov dword ptr [esi + 0x30], ebx
// 0082a15f  895e40               mov dword ptr [esi + 0x40], ebx
// 0082a162  895e44               mov dword ptr [esi + 0x44], ebx
// 0082a165  5e                   pop esi
// 0082a166  5d                   pop ebp
// 0082a167  5b                   pop ebx
// 0082a168  83c420               add esp, 0x20
// 0082a16b  c20c00               ret 0xc
// 0082a16e  395e38               cmp dword ptr [esi + 0x38], ebx
// 0082a171  7431                 je 0x82a1a4
// 0082a173  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082a177  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082a17b  8b16                 mov edx, dword ptr [esi]
// 0082a17d  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0082a183  8b7e38               mov edi, dword ptr [esi + 0x38]
// 0082a186  50                   push eax
// 0082a187  51                   push ecx
// 0082a188  8bce                 mov ecx, esi
// 0082a18a  ffd2                 call edx
// 0082a18c  3bf8                 cmp edi, eax
// 0082a18e  7514                 jne 0x82a1a4
// 0082a190  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a193  6aff                 push -1
// 0082a195  8d44243c             lea eax, [esp + 0x3c]
// 0082a199  50                   push eax
// 0082a19a  6afe                 push -2
// 0082a19c  57                   push edi
// 0082a19d  53                   push ebx
// 0082a19e  53                   push ebx
// 0082a19f  e85c91ffff           call 0x823300
// 0082a1a4  83fd02               cmp ebp, 2
// 0082a1a7  0f8533010000         jne 0x82a2e0
// 0082a1ad  8b6e38               mov ebp, dword ptr [esi + 0x38]
// 0082a1b0  3beb                 cmp ebp, ebx
// 0082a1b2  0f8428010000         je 0x82a2e0
// 0082a1b8  895e38               mov dword ptr [esi + 0x38], ebx
// 0082a1bb  395d44               cmp dword ptr [ebp + 0x44], ebx
// 0082a1be  0f8426010000         je 0x82a2ea
// 0082a1c4  399e88000000         cmp dword ptr [esi + 0x88], ebx
// 0082a1ca  0f841a010000         je 0x82a2ea
// 0082a1d0  395e40               cmp dword ptr [esi + 0x40], ebx
// 0082a1d3  0f84b3000000         je 0x82a28c
// 0082a1d9  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 0082a1df  740d                 je 0x82a1ee
// 0082a1e1  395d48               cmp dword ptr [ebp + 0x48], ebx
// 0082a1e4  7408                 je 0x82a1ee
// 0082a1e6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a1e9  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0082a1ec  eb06                 jmp 0x82a1f4
// 0082a1ee  8b5620               mov edx, dword ptr [esi + 0x20]
// 0082a1f1  8b7a24               mov edi, dword ptr [edx + 0x24]
// 0082a1f4  55                   push ebp
// 0082a1f5  8bcf                 mov ecx, edi
// 0082a1f7  e8e4330400           call 0x86d5e0
// 0082a1fc  33c9                 xor ecx, ecx
// 0082a1fe  85c0                 test eax, eax
// 0082a200  0f9dc1               setge cl
// 0082a203  6a10                 push 0x10
// 0082a205  894c2438             mov dword ptr [esp + 0x38], ecx
// 0082a209  ff1530cc9800         call dword ptr [0x98cc30]
// 0082a20f  6685c0               test ax, ax
// 0082a212  7c62                 jl 0x82a276
// 0082a214  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 0082a21a  7431                 je 0x82a24d
// 0082a21c  395e7c               cmp dword ptr [esi + 0x7c], ebx
// 0082a21f  752c                 jne 0x82a24d
// 0082a221  8bcf                 mov ecx, edi
// 0082a223  33db                 xor ebx, ebx
// 0082a225  e846b6caff           call 0x4d5870
// 0082a22a  85c0                 test eax, eax
// 0082a22c  7e1f                 jle 0x82a24d
// 0082a22e  8bff                 mov edi, edi
// 0082a230  6a01                 push 1
// 0082a232  53                   push ebx
// 0082a233  8bcf                 mov ecx, edi
// 0082a235  e876330400           call 0x86d5b0
// 0082a23a  8bc8                 mov ecx, eax
// 0082a23c  e80fdaffff           call 0x827c50
// 0082a241  8bcf                 mov ecx, edi
// 0082a243  43                   inc ebx
// 0082a244  e827b6caff           call 0x4d5870
// 0082a249  3bd8                 cmp ebx, eax
// 0082a24b  7ce3                 jl 0x82a230
// 0082a24d  8bcf                 mov ecx, edi
// 0082a24f  e8cc390400           call 0x86dc20
// 0082a254  55                   push ebp
// 0082a255  8bcf                 mov ecx, edi
// 0082a257  e8a4390400           call 0x86dc00
// 0082a25c  837c243400           cmp dword ptr [esp + 0x34], 0
// 0082a261  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 0082a267  742e                 je 0x82a297
// 0082a269  33d2                 xor edx, edx
// 0082a26b  395540               cmp dword ptr [ebp + 0x40], edx
// 0082a26e  0f94c2               sete dl
// 0082a271  895540               mov dword ptr [ebp + 0x40], edx
// 0082a274  eb21                 jmp 0x82a297
// 0082a276  395c2434             cmp dword ptr [esp + 0x34], ebx
// 0082a27a  75ed                 jne 0x82a269
// 0082a27c  55                   push ebp
// 0082a27d  8bcf                 mov ecx, edi
// 0082a27f  e87c390400           call 0x86dc00
// 0082a284  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 0082a28a  eb0b                 jmp 0x82a297
// 0082a28c  33c0                 xor eax, eax
// 0082a28e  395d40               cmp dword ptr [ebp + 0x40], ebx
// 0082a291  0f94c0               sete al
// 0082a294  894540               mov dword ptr [ebp + 0x40], eax
// 0082a297  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a29a  6a00                 push 0
// 0082a29c  6abd                 push -0x43
// 0082a29e  e8cd8fffff           call 0x823270
// 0082a2a3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a2a6  8b11                 mov edx, dword ptr [ecx]
// 0082a2a8  85db                 test ebx, ebx
// 0082a2aa  7408                 je 0x82a2b4
// 0082a2ac  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0082a2b2  eb06                 jmp 0x82a2ba
// 0082a2b4  8b82bc010000         mov eax, dword ptr [edx + 0x1bc]
// 0082a2ba  ffd0                 call eax
// 0082a2bc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a2bf  6a00                 push 0
// 0082a2c1  6ac8                 push -0x38
// 0082a2c3  e8a88fffff           call 0x823270
// 0082a2c8  85db                 test ebx, ebx
// 0082a2ca  740c                 je 0x82a2d8
// 0082a2cc  8b16                 mov edx, dword ptr [esi]
// 0082a2ce  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0082a2d4  8bce                 mov ecx, esi
// 0082a2d6  ffd0                 call eax
// 0082a2d8  33db                 xor ebx, ebx
// 0082a2da  895e40               mov dword ptr [esi + 0x40], ebx
// 0082a2dd  895e44               mov dword ptr [esi + 0x44], ebx
// 0082a2e0  5f                   pop edi
// 0082a2e1  5e                   pop esi
// 0082a2e2  5d                   pop ebp
// 0082a2e3  5b                   pop ebx
// 0082a2e4  83c420               add esp, 0x20
// 0082a2e7  c20c00               ret 0xc
// 0082a2ea  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a2ed  e88e51ffff           call 0x81f480
// 0082a2f2  5f                   pop edi
// 0082a2f3  895e40               mov dword ptr [esi + 0x40], ebx
// 0082a2f6  895e44               mov dword ptr [esi + 0x44], ebx
// 0082a2f9  5e                   pop esi
// 0082a2fa  5d                   pop ebp
// 0082a2fb  5b                   pop ebx
// 0082a2fc  83c420               add esp, 0x20
// 0082a2ff  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPReportHeader@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp