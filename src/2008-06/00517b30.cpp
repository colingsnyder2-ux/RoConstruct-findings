// roc 2008-06 00517b30  unit: G3D::TextInput::WrongSymbol  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00517b30
//
// 00517b30  6aff                 push -1
// 00517b32  6868c77c00           push 0x7cc768
// 00517b37  64a100000000         mov eax, dword ptr fs:[0]
// 00517b3d  50                   push eax
// 00517b3e  64892500000000       mov dword ptr fs:[0], esp
// 00517b45  83ec34               sub esp, 0x34
// 00517b48  53                   push ebx
// 00517b49  56                   push esi
// 00517b4a  33db                 xor ebx, ebx
// 00517b4c  8bf1                 mov esi, ecx
// 00517b4e  895c2408             mov dword ptr [esp + 8], ebx
// 00517b52  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00517b55  57                   push edi
// 00517b56  3bc3                 cmp eax, ebx
// 00517b58  0f86cd000000         jbe 0x517c2b
// 00517b5e  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00517b61  03c7                 add eax, edi
// 00517b63  3bf8                 cmp edi, eax
// 00517b65  7606                 jbe 0x517b6d
// 00517b67  ff1590288000         call dword ptr [0x802890]
// 00517b6d  8b0e                 mov ecx, dword ptr [esi]
// 00517b6f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00517b73  8d4c240c             lea ecx, [esp + 0xc]
// 00517b77  897c2410             mov dword ptr [esp + 0x10], edi
// 00517b7b  e8a0e4f7ff           call 0x496020
// 00517b80  8bf8                 mov edi, eax
// 00517b82  57                   push edi
// 00517b83  8d4c2418             lea ecx, [esp + 0x18]
// 00517b87  ff155c248000         call dword ptr [0x80245c]
// 00517b8d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00517b90  89542430             mov dword ptr [esp + 0x30], edx
// 00517b94  8b4720               mov eax, dword ptr [edi + 0x20]
// 00517b97  89442434             mov dword ptr [esp + 0x34], eax
// 00517b9b  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00517b9e  894c2438             mov dword ptr [esp + 0x38], ecx
// 00517ba2  8b5728               mov edx, dword ptr [edi + 0x28]
// 00517ba5  8954243c             mov dword ptr [esp + 0x3c], edx
// 00517ba9  83cfff               or edi, 0xffffffff
// 00517bac  895c2448             mov dword ptr [esp + 0x48], ebx
// 00517bb0  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 00517bb3  7425                 je 0x517bda
// 00517bb5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00517bb8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00517bbb  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00517bbe  ff1568248000         call dword ptr [0x802468]
// 00517bc4  ff4618               inc dword ptr [esi + 0x18]
// 00517bc7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00517bca  394614               cmp dword ptr [esi + 0x14], eax
// 00517bcd  7703                 ja 0x517bd2
// 00517bcf  895e18               mov dword ptr [esi + 0x18], ebx
// 00517bd2  017e1c               add dword ptr [esi + 0x1c], edi
// 00517bd5  7503                 jne 0x517bda
// 00517bd7  895e18               mov dword ptr [esi + 0x18], ebx
// 00517bda  8b742450             mov esi, dword ptr [esp + 0x50]
// 00517bde  8d542414             lea edx, [esp + 0x14]
// 00517be2  52                   push edx
// 00517be3  8bce                 mov ecx, esi
// 00517be5  ff155c248000         call dword ptr [0x80245c]
// 00517beb  8b442430             mov eax, dword ptr [esp + 0x30]
// 00517bef  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00517bf3  8b542438             mov edx, dword ptr [esp + 0x38]
// 00517bf7  89461c               mov dword ptr [esi + 0x1c], eax
// 00517bfa  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00517bfe  894e20               mov dword ptr [esi + 0x20], ecx
// 00517c01  8d4c2414             lea ecx, [esp + 0x14]
// 00517c05  895624               mov dword ptr [esi + 0x24], edx
// 00517c08  894628               mov dword ptr [esi + 0x28], eax
// 00517c0b  897c2448             mov dword ptr [esp + 0x48], edi
// 00517c0f  ff1568248000         call dword ptr [0x802468]
// 00517c15  5f                   pop edi
// 00517c16  8bc6                 mov eax, esi
// 00517c18  5e                   pop esi
// 00517c19  5b                   pop ebx
// 00517c1a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00517c1e  64890d00000000       mov dword ptr fs:[0], ecx
// 00517c25  83c440               add esp, 0x40
// 00517c28  c20400               ret 4
// 00517c2b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00517c2f  57                   push edi
// 00517c30  e81bf1ffff           call 0x516d50
// 00517c35  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00517c39  8bc7                 mov eax, edi
// 00517c3b  5f                   pop edi
// 00517c3c  5e                   pop esi
// 00517c3d  5b                   pop ebx
// 00517c3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00517c45  83c440               add esp, 0x40
// 00517c48  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
