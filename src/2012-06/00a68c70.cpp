// roc 2012-06 00a68c70  unit: PAVCXTShadowWnd::?$CList  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68c70
//
// 00a68c70  6aff                 push -1
// 00a68c72  685985ae00           push 0xae8559
// 00a68c77  64a100000000         mov eax, dword ptr fs:[0]
// 00a68c7d  50                   push eax
// 00a68c7e  83ec24               sub esp, 0x24
// 00a68c81  53                   push ebx
// 00a68c82  56                   push esi
// 00a68c83  57                   push edi
// 00a68c84  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a68c89  33c4                 xor eax, esp
// 00a68c8b  50                   push eax
// 00a68c8c  8d442434             lea eax, [esp + 0x34]
// 00a68c90  64a300000000         mov dword ptr fs:[0], eax
// 00a68c96  8bf1                 mov esi, ecx
// 00a68c98  e813feffff           call 0xa68ab0
// 00a68c9d  8bc8                 mov ecx, eax
// 00a68c9f  e89cf4ffff           call 0xa68140
// 00a68ca4  894660               mov dword ptr [esi + 0x60], eax
// 00a68ca7  e804feffff           call 0xa68ab0
// 00a68cac  8bc8                 mov ecx, eax
// 00a68cae  e89df4ffff           call 0xa68150
// 00a68cb3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a68cb7  894664               mov dword ptr [esi + 0x64], eax
// 00a68cba  0f85b7000000         jne 0xa68d77
// 00a68cc0  33ff                 xor edi, edi
// 00a68cc2  397e60               cmp dword ptr [esi + 0x60], edi
// 00a68cc5  7405                 je 0xa68ccc
// 00a68cc7  bf00000800           mov edi, 0x80000
// 00a68ccc  e80197f1ff           call 0x9823d2
// 00a68cd1  68007f0000           push 0x7f00
// 00a68cd6  6a00                 push 0
// 00a68cd8  ff159c3ab200         call dword ptr [0xb23a9c]
// 00a68cde  6a00                 push 0
// 00a68ce0  6a00                 push 0
// 00a68ce2  50                   push eax
// 00a68ce3  6a00                 push 0
// 00a68ce5  e8c69df1ff           call 0x982ab0
// 00a68cea  50                   push eax
// 00a68ceb  8d4c2414             lea ecx, [esp + 0x14]
// 00a68cef  ff15c847b200         call dword ptr [0xb247c8]
// 00a68cf5  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a68cfd  e8929bf1ff           call 0x982894
// 00a68d02  85c0                 test eax, eax
// 00a68d04  740b                 je 0xa68d11
// 00a68d06  8b10                 mov edx, dword ptr [eax]
// 00a68d08  8bc8                 mov ecx, eax
// 00a68d0a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a68d0d  ffd0                 call eax
// 00a68d0f  eb02                 jmp 0xa68d13
// 00a68d11  33c0                 xor eax, eax
// 00a68d13  8b1e                 mov ebx, dword ptr [esi]
// 00a68d15  6a00                 push 0
// 00a68d17  6a00                 push 0
// 00a68d19  50                   push eax
// 00a68d1a  8d4c2430             lea ecx, [esp + 0x30]
// 00a68d1e  e8ddc3f6ff           call 0x9d5100
// 00a68d23  50                   push eax
// 00a68d24  6800000080           push 0x80000000
// 00a68d29  6a00                 push 0
// 00a68d2b  8d4c2428             lea ecx, [esp + 0x28]
// 00a68d2f  ff159847b200         call dword ptr [0xb24798]
// 00a68d35  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00a68d38  50                   push eax
// 00a68d39  81cf80000000         or edi, 0x80
// 00a68d3f  57                   push edi
// 00a68d40  8bce                 mov ecx, esi
// 00a68d42  ffd2                 call edx
// 00a68d44  8d4c2410             lea ecx, [esp + 0x10]
// 00a68d48  85c0                 test eax, eax
// 00a68d4a  751d                 jne 0xa68d69
// 00a68d4c  ff15d047b200         call dword ptr [0xb247d0]
// 00a68d52  33c0                 xor eax, eax
// 00a68d54  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a68d58  64890d00000000       mov dword ptr fs:[0], ecx
// 00a68d5f  59                   pop ecx
// 00a68d60  5f                   pop edi
// 00a68d61  5e                   pop esi
// 00a68d62  5b                   pop ebx
// 00a68d63  83c430               add esp, 0x30
// 00a68d66  c21400               ret 0x14
// 00a68d69  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00a68d71  ff15d047b200         call dword ptr [0xb247d0]
// 00a68d77  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a68d7a  6a00                 push 0
// 00a68d7c  6a00                 push 0
// 00a68d7e  50                   push eax
// 00a68d7f  ff15983cb200         call dword ptr [0xb23c98]
// 00a68d85  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a68d89  750b                 jne 0xa68d96
// 00a68d8b  837e6400             cmp dword ptr [esi + 0x64], 0
// 00a68d8f  b802000000           mov eax, 2
// 00a68d94  7405                 je 0xa68d9b
// 00a68d96  b804000000           mov eax, 4
// 00a68d9b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a68d9f  8d4c2448             lea ecx, [esp + 0x48]
// 00a68da3  51                   push ecx
// 00a68da4  894654               mov dword ptr [esi + 0x54], eax
// 00a68da7  897e5c               mov dword ptr [esi + 0x5c], edi
// 00a68daa  ff15f03ab200         call dword ptr [0xb23af0]
// 00a68db0  85c0                 test eax, eax
// 00a68db2  740d                 je 0xa68dc1
// 00a68db4  8d542414             lea edx, [esp + 0x14]
// 00a68db8  52                   push edx
// 00a68db9  ff15903ab200         call dword ptr [0xb23a90]
// 00a68dbf  eb41                 jmp 0xa68e02
// 00a68dc1  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a68dc4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a68dc8  85ff                 test edi, edi
// 00a68dca  741a                 je 0xa68de6
// 00a68dcc  8d1408               lea edx, [eax + ecx]
// 00a68dcf  52                   push edx
// 00a68dd0  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a68dd4  03d0                 add edx, eax
// 00a68dd6  52                   push edx
// 00a68dd7  51                   push ecx
// 00a68dd8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a68ddc  03c1                 add eax, ecx
// 00a68dde  50                   push eax
// 00a68ddf  8d542424             lea edx, [esp + 0x24]
// 00a68de3  52                   push edx
// 00a68de4  eb16                 jmp 0xa68dfc
// 00a68de6  51                   push ecx
// 00a68de7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a68deb  8d1408               lea edx, [eax + ecx]
// 00a68dee  52                   push edx
// 00a68def  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a68df3  03c2                 add eax, edx
// 00a68df5  50                   push eax
// 00a68df6  51                   push ecx
// 00a68df7  8d442424             lea eax, [esp + 0x24]
// 00a68dfb  50                   push eax
// 00a68dfc  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a68e02  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a68e06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a68e0a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a68e0e  6a00                 push 0
// 00a68e10  2bc8                 sub ecx, eax
// 00a68e12  51                   push ecx
// 00a68e13  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a68e17  2bd1                 sub edx, ecx
// 00a68e19  52                   push edx
// 00a68e1a  50                   push eax
// 00a68e1b  51                   push ecx
// 00a68e1c  8bce                 mov ecx, esi
// 00a68e1e  e8b796f1ff           call 0x9824da
// 00a68e23  b801000000           mov eax, 1
// 00a68e28  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a68e2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a68e33  59                   pop ecx
// 00a68e34  5f                   pop edi
// 00a68e35  5e                   pop esi
// 00a68e36  5b                   pop ebx
// 00a68e37  83c430               add esp, 0x30
// 00a68e3a  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTShadowWnd@@IAEHHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp