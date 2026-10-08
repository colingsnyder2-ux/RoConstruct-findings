// roc 2012-06 009c1bf0  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1bf0
//
// 009c1bf0  83ec08               sub esp, 8
// 009c1bf3  56                   push esi
// 009c1bf4  8bf1                 mov esi, ecx
// 009c1bf6  837e0400             cmp dword ptr [esi + 4], 0
// 009c1bfa  750f                 jne 0x9c1c0b
// 009c1bfc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1bff  e8da0afcff           call 0x9826de
// 009c1c04  5e                   pop esi
// 009c1c05  83c408               add esp, 8
// 009c1c08  c20c00               ret 0xc
// 009c1c0b  53                   push ebx
// 009c1c0c  57                   push edi
// 009c1c0d  8b3d843ab200         mov edi, dword ptr [0xb23a84]
// 009c1c13  6a11                 push 0x11
// 009c1c15  ffd7                 call edi
// 009c1c17  33db                 xor ebx, ebx
// 009c1c19  6685c0               test ax, ax
// 009c1c1c  0f9cc3               setl bl
// 009c1c1f  6a10                 push 0x10
// 009c1c21  895c2414             mov dword ptr [esp + 0x14], ebx
// 009c1c25  ffd7                 call edi
// 009c1c27  33c9                 xor ecx, ecx
// 009c1c29  6685c0               test ax, ax
// 009c1c2c  0f9cc1               setl cl
// 009c1c2f  8bc1                 mov eax, ecx
// 009c1c31  8944240c             mov dword ptr [esp + 0xc], eax
// 009c1c35  85db                 test ebx, ebx
// 009c1c37  7530                 jne 0x9c1c69
// 009c1c39  85c0                 test eax, eax
// 009c1c3b  752c                 jne 0x9c1c69
// 009c1c3d  8bce                 mov ecx, esi
// 009c1c3f  e8ccf8ffff           call 0x9c1510
// 009c1c44  83f801               cmp eax, 1
// 009c1c47  7715                 ja 0x9c1c5e
// 009c1c49  751e                 jne 0x9c1c69
// 009c1c4b  8bce                 mov ecx, esi
// 009c1c4d  e87edbffff           call 0x9bf7d0
// 009c1c52  50                   push eax
// 009c1c53  8bce                 mov ecx, esi
// 009c1c55  e8e6d7ffff           call 0x9bf440
// 009c1c5a  85c0                 test eax, eax
// 009c1c5c  750b                 jne 0x9c1c69
// 009c1c5e  6a00                 push 0
// 009c1c60  6a00                 push 0
// 009c1c62  8bce                 mov ecx, esi
// 009c1c64  e837e8ffff           call 0x9c04a0
// 009c1c69  55                   push ebp
// 009c1c6a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009c1c6e  8d45df               lea eax, [ebp - 0x21]
// 009c1c71  33ff                 xor edi, edi
// 009c1c73  83f807               cmp eax, 7
// 009c1c76  773c                 ja 0x9c1cb4
// 009c1c78  0fb690641d9c00       movzx edx, byte ptr [eax + 0x9c1d64]
// 009c1c7f  ff24955c1d9c00       jmp dword ptr [edx*4 + 0x9c1d5c]
// 009c1c86  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1c89  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c1c8c  6a00                 push 0
// 009c1c8e  6a09                 push 9
// 009c1c90  680a110000           push 0x110a
// 009c1c95  50                   push eax
// 009c1c96  ff15043cb200         call dword ptr [0xb23c04]
// 009c1c9c  837e0c00             cmp dword ptr [esi + 0xc], 0
// 009c1ca0  8bf8                 mov edi, eax
// 009c1ca2  7503                 jne 0x9c1ca7
// 009c1ca4  897e0c               mov dword ptr [esi + 0xc], edi
// 009c1ca7  85db                 test ebx, ebx
// 009c1ca9  7509                 jne 0x9c1cb4
// 009c1cab  395c2410             cmp dword ptr [esp + 0x10], ebx
// 009c1caf  7503                 jne 0x9c1cb4
// 009c1cb1  895e0c               mov dword ptr [esi + 0xc], ebx
// 009c1cb4  83fd26               cmp ebp, 0x26
// 009c1cb7  7409                 je 0x9c1cc2
// 009c1cb9  83fd21               cmp ebp, 0x21
// 009c1cbc  7404                 je 0x9c1cc2
// 009c1cbe  33db                 xor ebx, ebx
// 009c1cc0  eb05                 jmp 0x9c1cc7
// 009c1cc2  bb01000000           mov ebx, 1
// 009c1cc7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1cca  e80f0afcff           call 0x9826de
// 009c1ccf  85ff                 test edi, edi
// 009c1cd1  747c                 je 0x9c1d4f
// 009c1cd3  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c1cd8  7507                 jne 0x9c1ce1
// 009c1cda  837c241000           cmp dword ptr [esp + 0x10], 0
// 009c1cdf  746e                 je 0x9c1d4f
// 009c1ce1  83fd22               cmp ebp, 0x22
// 009c1ce4  741b                 je 0x9c1d01
// 009c1ce6  83fd21               cmp ebp, 0x21
// 009c1ce9  7416                 je 0x9c1d01
// 009c1ceb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1cee  57                   push edi
// 009c1cef  85db                 test ebx, ebx
// 009c1cf1  7407                 je 0x9c1cfa
// 009c1cf3  e868daffff           call 0x9bf760
// 009c1cf8  eb1d                 jmp 0x9c1d17
// 009c1cfa  e841daffff           call 0x9bf740
// 009c1cff  eb16                 jmp 0x9c1d17
// 009c1d01  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1d04  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c1d07  6a00                 push 0
// 009c1d09  6a09                 push 9
// 009c1d0b  680a110000           push 0x110a
// 009c1d10  51                   push ecx
// 009c1d11  ff15043cb200         call dword ptr [0xb23c04]
// 009c1d17  85c0                 test eax, eax
// 009c1d19  7502                 jne 0x9c1d1d
// 009c1d1b  8bc7                 mov eax, edi
// 009c1d1d  837c241000           cmp dword ptr [esp + 0x10], 0
// 009c1d22  7418                 je 0x9c1d3c
// 009c1d24  8b560c               mov edx, dword ptr [esi + 0xc]
// 009c1d27  6a01                 push 1
// 009c1d29  50                   push eax
// 009c1d2a  52                   push edx
// 009c1d2b  8bce                 mov ecx, esi
// 009c1d2d  e87ee8ffff           call 0x9c05b0
// 009c1d32  5d                   pop ebp
// 009c1d33  5f                   pop edi
// 009c1d34  5b                   pop ebx
// 009c1d35  5e                   pop esi
// 009c1d36  83c408               add esp, 8
// 009c1d39  c20c00               ret 0xc
// 009c1d3c  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c1d41  740c                 je 0x9c1d4f
// 009c1d43  6a01                 push 1
// 009c1d45  6a01                 push 1
// 009c1d47  50                   push eax
// 009c1d48  8bce                 mov ecx, esi
// 009c1d4a  e891e2ffff           call 0x9bffe0
// 009c1d4f  5d                   pop ebp
// 009c1d50  5f                   pop edi
// 009c1d51  5b                   pop ebx
// 009c1d52  5e                   pop esi
// 009c1d53  83c408               add esp, 8
// 009c1d56  c20c00               ret 0xc
// 009c1d59  8d4900               lea ecx, [ecx]
// 009c1d5c  861c9c               xchg byte ptr [esp + ebx*4], bl
// 009c1d5f  00b41c9c000000       add byte ptr [esp + ebx + 0x9c], dh
// 009c1d66  0101                 add dword ptr [ecx], eax
// 009c1d68  0100                 add dword ptr [eax], eax
// 009c1d6a  0100                 add dword ptr [eax], eax
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
