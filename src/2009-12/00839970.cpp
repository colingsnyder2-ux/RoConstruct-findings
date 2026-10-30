// roc 2009-12 00839970  unit: PAVCXTPDockingPaneBase::?$CList  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839970
//
// 00839970  83ec08               sub esp, 8
// 00839973  53                   push ebx
// 00839974  55                   push ebp
// 00839975  56                   push esi
// 00839976  57                   push edi
// 00839977  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0083997b  33ed                 xor ebp, ebp
// 0083997d  8bf1                 mov esi, ecx
// 0083997f  89742410             mov dword ptr [esp + 0x10], esi
// 00839983  3bfd                 cmp edi, ebp
// 00839985  741e                 je 0x8399a5
// 00839987  396f18               cmp dword ptr [edi + 0x18], ebp
// 0083998a  7522                 jne 0x8399ae
// 0083998c  8d5fe0               lea ebx, [edi - 0x20]
// 0083998f  53                   push ebx
// 00839990  e85becffff           call 0x8385f0
// 00839995  85c0                 test eax, eax
// 00839997  750c                 jne 0x8399a5
// 00839999  53                   push ebx
// 0083999a  8bce                 mov ecx, esi
// 0083999c  e82fecffff           call 0x8385d0
// 008399a1  85c0                 test eax, eax
// 008399a3  7409                 je 0x8399ae
// 008399a5  8bce                 mov ecx, esi
// 008399a7  e804edffff           call 0x8386b0
// 008399ac  8bf8                 mov edi, eax
// 008399ae  3bfd                 cmp edi, ebp
// 008399b0  0f84e3010000         je 0x839b99
// 008399b6  8b07                 mov eax, dword ptr [edi]
// 008399b8  8b5018               mov edx, dword ptr [eax + 0x18]
// 008399bb  8bcf                 mov ecx, edi
// 008399bd  ffd2                 call edx
// 008399bf  89442414             mov dword ptr [esp + 0x14], eax
// 008399c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008399c7  3bc5                 cmp eax, ebp
// 008399c9  7409                 je 0x8399d4
// 008399cb  896c2424             mov dword ptr [esp + 0x24], ebp
// 008399cf  83f801               cmp eax, 1
// 008399d2  750d                 jne 0x8399e1
// 008399d4  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008399dc  83f801               cmp eax, 1
// 008399df  7409                 je 0x8399ea
// 008399e1  896c2420             mov dword ptr [esp + 0x20], ebp
// 008399e5  83f803               cmp eax, 3
// 008399e8  7508                 jne 0x8399f2
// 008399ea  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008399f2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008399f6  837d1800             cmp dword ptr [ebp + 0x18], 0
// 008399fa  753f                 jne 0x839a3b
// 008399fc  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00839a02  8b06                 mov eax, dword ptr [esi]
// 00839a04  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00839a0a  51                   push ecx
// 00839a0b  6a01                 push 1
// 00839a0d  8bce                 mov ecx, esi
// 00839a0f  ffd2                 call edx
// 00839a11  85c0                 test eax, eax
// 00839a13  7405                 je 0x839a1a
// 00839a15  8d70ac               lea esi, [eax - 0x54]
// 00839a18  eb02                 jmp 0x839a1c
// 00839a1a  33f6                 xor esi, esi
// 00839a1c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00839a20  50                   push eax
// 00839a21  83c5e0               add ebp, -0x20
// 00839a24  55                   push ebp
// 00839a25  8bce                 mov ecx, esi
// 00839a27  e8049e0700           call 0x8b3830
// 00839a2c  85f6                 test esi, esi
// 00839a2e  7405                 je 0x839a35
// 00839a30  8d6e54               lea ebp, [esi + 0x54]
// 00839a33  eb02                 jmp 0x839a37
// 00839a35  33ed                 xor ebp, ebp
// 00839a37  8b742410             mov esi, dword ptr [esp + 0x10]
// 00839a3b  8bce                 mov ecx, esi
// 00839a3d  e86eecffff           call 0x8386b0
// 00839a42  3bf8                 cmp edi, eax
// 00839a44  0f8594000000         jne 0x839ade
// 00839a4a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00839a4e  394f70               cmp dword ptr [edi + 0x70], ecx
// 00839a51  8d5fe0               lea ebx, [edi - 0x20]
// 00839a54  7523                 jne 0x839a79
// 00839a56  8b542420             mov edx, dword ptr [esp + 0x20]
// 00839a5a  52                   push edx
// 00839a5b  6a00                 push 0
// 00839a5d  55                   push ebp
// 00839a5e  8bcb                 mov ecx, ebx
// 00839a60  e83bb20700           call 0x8b4ca0
// 00839a65  6a01                 push 1
// 00839a67  57                   push edi
// 00839a68  8bce                 mov ecx, esi
// 00839a6a  e861f8ffff           call 0x8392d0
// 00839a6f  5f                   pop edi
// 00839a70  5e                   pop esi
// 00839a71  5d                   pop ebp
// 00839a72  5b                   pop ebx
// 00839a73  83c408               add esp, 8
// 00839a76  c20c00               ret 0xc
// 00839a79  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00839a7f  8b06                 mov eax, dword ptr [esi]
// 00839a81  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00839a87  51                   push ecx
// 00839a88  6a02                 push 2
// 00839a8a  8bce                 mov ecx, esi
// 00839a8c  ffd2                 call edx
// 00839a8e  85c0                 test eax, eax
// 00839a90  7405                 je 0x839a97
// 00839a92  8d70e0               lea esi, [eax - 0x20]
// 00839a95  eb02                 jmp 0x839a99
// 00839a97  33f6                 xor esi, esi
// 00839a99  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00839a9d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00839aa1  51                   push ecx
// 00839aa2  8d4320               lea eax, [ebx + 0x20]
// 00839aa5  52                   push edx
// 00839aa6  50                   push eax
// 00839aa7  8bce                 mov ecx, esi
// 00839aa9  e842bb0700           call 0x8b55f0
// 00839aae  8b442420             mov eax, dword ptr [esp + 0x20]
// 00839ab2  50                   push eax
// 00839ab3  6a00                 push 0
// 00839ab5  55                   push ebp
// 00839ab6  8bce                 mov ecx, esi
// 00839ab8  e8e3b10700           call 0x8b4ca0
// 00839abd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00839ac1  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00839ac7  6a01                 push 1
// 00839ac9  897220               mov dword ptr [edx + 0x20], esi
// 00839acc  57                   push edi
// 00839acd  8bf1                 mov esi, ecx
// 00839acf  e8fcf7ffff           call 0x8392d0
// 00839ad4  5f                   pop edi
// 00839ad5  5e                   pop esi
// 00839ad6  5d                   pop ebp
// 00839ad7  5b                   pop ebx
// 00839ad8  83c408               add esp, 8
// 00839adb  c20c00               ret 0xc
// 00839ade  8b4710               mov eax, dword ptr [edi + 0x10]
// 00839ae1  85c0                 test eax, eax
// 00839ae3  0f84b0000000         je 0x839b99
// 00839ae9  83781801             cmp dword ptr [eax + 0x18], 1
// 00839aed  750c                 jne 0x839afb
// 00839aef  8bf8                 mov edi, eax
// 00839af1  837f1000             cmp dword ptr [edi + 0x10], 0
// 00839af5  0f849e000000         je 0x839b99
// 00839afb  8b4710               mov eax, dword ptr [edi + 0x10]
// 00839afe  85c0                 test eax, eax
// 00839b00  7405                 je 0x839b07
// 00839b02  8d58e0               lea ebx, [eax - 0x20]
// 00839b05  eb02                 jmp 0x839b09
// 00839b07  33db                 xor ebx, ebx
// 00839b09  8b442424             mov eax, dword ptr [esp + 0x24]
// 00839b0d  398390000000         cmp dword ptr [ebx + 0x90], eax
// 00839b13  7522                 jne 0x839b37
// 00839b15  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00839b19  51                   push ecx
// 00839b1a  57                   push edi
// 00839b1b  55                   push ebp
// 00839b1c  8bcb                 mov ecx, ebx
// 00839b1e  e87db10700           call 0x8b4ca0
// 00839b23  6a01                 push 1
// 00839b25  57                   push edi
// 00839b26  8bce                 mov ecx, esi
// 00839b28  e8a3f7ffff           call 0x8392d0
// 00839b2d  5f                   pop edi
// 00839b2e  5e                   pop esi
// 00839b2f  5d                   pop ebp
// 00839b30  5b                   pop ebx
// 00839b31  83c408               add esp, 8
// 00839b34  c20c00               ret 0xc
// 00839b37  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00839b3d  8b16                 mov edx, dword ptr [esi]
// 00839b3f  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00839b45  50                   push eax
// 00839b46  6a02                 push 2
// 00839b48  8bce                 mov ecx, esi
// 00839b4a  ffd2                 call edx
// 00839b4c  85c0                 test eax, eax
// 00839b4e  7405                 je 0x839b55
// 00839b50  8d70e0               lea esi, [eax - 0x20]
// 00839b53  eb02                 jmp 0x839b57
// 00839b55  33f6                 xor esi, esi
// 00839b57  8b442414             mov eax, dword ptr [esp + 0x14]
// 00839b5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00839b5f  50                   push eax
// 00839b60  51                   push ecx
// 00839b61  57                   push edi
// 00839b62  8bce                 mov ecx, esi
// 00839b64  e887ba0700           call 0x8b55f0
// 00839b69  8b542420             mov edx, dword ptr [esp + 0x20]
// 00839b6d  52                   push edx
// 00839b6e  57                   push edi
// 00839b6f  55                   push ebp
// 00839b70  8bce                 mov ecx, esi
// 00839b72  e829b10700           call 0x8b4ca0
// 00839b77  85f6                 test esi, esi
// 00839b79  7405                 je 0x839b80
// 00839b7b  8d4620               lea eax, [esi + 0x20]
// 00839b7e  eb02                 jmp 0x839b82
// 00839b80  33c0                 xor eax, eax
// 00839b82  50                   push eax
// 00839b83  57                   push edi
// 00839b84  8bcb                 mov ecx, ebx
// 00839b86  e8b5b00700           call 0x8b4c40
// 00839b8b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00839b8f  6a01                 push 1
// 00839b91  57                   push edi
// 00839b92  8bce                 mov ecx, esi
// 00839b94  e837f7ffff           call 0x8392d0
// 00839b99  5f                   pop edi
// 00839b9a  5e                   pop esi
// 00839b9b  5d                   pop ebp
// 00839b9c  5b                   pop ebx
// 00839b9d  83c408               add esp, 8
// 00839ba0  c20c00               ret 0xc
// copied from an identical function in another client (function ?_InsertPane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp