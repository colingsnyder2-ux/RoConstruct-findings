// roc 2009-12 008e3a90  unit: PAVCXTShadowWnd::?$CList  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3a90
//
// 008e3a90  6aff                 push -1
// 008e3a92  68f95e9600           push 0x965ef9
// 008e3a97  64a100000000         mov eax, dword ptr fs:[0]
// 008e3a9d  50                   push eax
// 008e3a9e  83ec24               sub esp, 0x24
// 008e3aa1  53                   push ebx
// 008e3aa2  56                   push esi
// 008e3aa3  57                   push edi
// 008e3aa4  a10052b600           mov eax, dword ptr [0xb65200]
// 008e3aa9  33c4                 xor eax, esp
// 008e3aab  50                   push eax
// 008e3aac  8d442434             lea eax, [esp + 0x34]
// 008e3ab0  64a300000000         mov dword ptr fs:[0], eax
// 008e3ab6  8bf1                 mov esi, ecx
// 008e3ab8  e813feffff           call 0x8e38d0
// 008e3abd  8bc8                 mov ecx, eax
// 008e3abf  e8acf4ffff           call 0x8e2f70
// 008e3ac4  894660               mov dword ptr [esi + 0x60], eax
// 008e3ac7  e804feffff           call 0x8e38d0
// 008e3acc  8bc8                 mov ecx, eax
// 008e3ace  e8adf4ffff           call 0x8e2f80
// 008e3ad3  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e3ad7  894664               mov dword ptr [esi + 0x64], eax
// 008e3ada  0f85b7000000         jne 0x8e3b97
// 008e3ae0  33ff                 xor edi, edi
// 008e3ae2  397e60               cmp dword ptr [esi + 0x60], edi
// 008e3ae5  7405                 je 0x8e3aec
// 008e3ae7  bf00000800           mov edi, 0x80000
// 008e3aec  e82d00f1ff           call 0x7f3b1e
// 008e3af1  68007f0000           push 0x7f00
// 008e3af6  6a00                 push 0
// 008e3af8  ff1548ca9800         call dword ptr [0x98ca48]
// 008e3afe  6a00                 push 0
// 008e3b00  6a00                 push 0
// 008e3b02  50                   push eax
// 008e3b03  6a00                 push 0
// 008e3b05  e81c07f1ff           call 0x7f4226
// 008e3b0a  50                   push eax
// 008e3b0b  8d4c2414             lea ecx, [esp + 0x14]
// 008e3b0f  ff15b8de9800         call dword ptr [0x98deb8]
// 008e3b15  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008e3b1d  e8f404f1ff           call 0x7f4016
// 008e3b22  85c0                 test eax, eax
// 008e3b24  740b                 je 0x8e3b31
// 008e3b26  8b10                 mov edx, dword ptr [eax]
// 008e3b28  8bc8                 mov ecx, eax
// 008e3b2a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008e3b2d  ffd0                 call eax
// 008e3b2f  eb02                 jmp 0x8e3b33
// 008e3b31  33c0                 xor eax, eax
// 008e3b33  8b1e                 mov ebx, dword ptr [esi]
// 008e3b35  6a00                 push 0
// 008e3b37  6a00                 push 0
// 008e3b39  50                   push eax
// 008e3b3a  8d4c2430             lea ecx, [esp + 0x30]
// 008e3b3e  e8ed76f6ff           call 0x84b230
// 008e3b43  50                   push eax
// 008e3b44  6800000080           push 0x80000000
// 008e3b49  6a00                 push 0
// 008e3b4b  8d4c2428             lea ecx, [esp + 0x28]
// 008e3b4f  ff1580de9800         call dword ptr [0x98de80]
// 008e3b55  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008e3b58  50                   push eax
// 008e3b59  81cf80000000         or edi, 0x80
// 008e3b5f  57                   push edi
// 008e3b60  8bce                 mov ecx, esi
// 008e3b62  ffd2                 call edx
// 008e3b64  8d4c2410             lea ecx, [esp + 0x10]
// 008e3b68  85c0                 test eax, eax
// 008e3b6a  751d                 jne 0x8e3b89
// 008e3b6c  ff15c0de9800         call dword ptr [0x98dec0]
// 008e3b72  33c0                 xor eax, eax
// 008e3b74  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e3b78  64890d00000000       mov dword ptr fs:[0], ecx
// 008e3b7f  59                   pop ecx
// 008e3b80  5f                   pop edi
// 008e3b81  5e                   pop esi
// 008e3b82  5b                   pop ebx
// 008e3b83  83c430               add esp, 0x30
// 008e3b86  c21400               ret 0x14
// 008e3b89  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008e3b91  ff15c0de9800         call dword ptr [0x98dec0]
// 008e3b97  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e3b9a  6a00                 push 0
// 008e3b9c  6a00                 push 0
// 008e3b9e  50                   push eax
// 008e3b9f  ff1554cb9800         call dword ptr [0x98cb54]
// 008e3ba5  837e6000             cmp dword ptr [esi + 0x60], 0
// 008e3ba9  750b                 jne 0x8e3bb6
// 008e3bab  837e6400             cmp dword ptr [esi + 0x64], 0
// 008e3baf  b802000000           mov eax, 2
// 008e3bb4  7405                 je 0x8e3bbb
// 008e3bb6  b804000000           mov eax, 4
// 008e3bbb  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008e3bbf  8d4c2448             lea ecx, [esp + 0x48]
// 008e3bc3  51                   push ecx
// 008e3bc4  894654               mov dword ptr [esi + 0x54], eax
// 008e3bc7  897e5c               mov dword ptr [esi + 0x5c], edi
// 008e3bca  ff1568cc9800         call dword ptr [0x98cc68]
// 008e3bd0  85c0                 test eax, eax
// 008e3bd2  740d                 je 0x8e3be1
// 008e3bd4  8d542414             lea edx, [esp + 0x14]
// 008e3bd8  52                   push edx
// 008e3bd9  ff159cca9800         call dword ptr [0x98ca9c]
// 008e3bdf  eb41                 jmp 0x8e3c22
// 008e3be1  8b4654               mov eax, dword ptr [esi + 0x54]
// 008e3be4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e3be8  85ff                 test edi, edi
// 008e3bea  741a                 je 0x8e3c06
// 008e3bec  8d1408               lea edx, [eax + ecx]
// 008e3bef  52                   push edx
// 008e3bf0  8b542454             mov edx, dword ptr [esp + 0x54]
// 008e3bf4  03d0                 add edx, eax
// 008e3bf6  52                   push edx
// 008e3bf7  51                   push ecx
// 008e3bf8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e3bfc  03c1                 add eax, ecx
// 008e3bfe  50                   push eax
// 008e3bff  8d542424             lea edx, [esp + 0x24]
// 008e3c03  52                   push edx
// 008e3c04  eb16                 jmp 0x8e3c1c
// 008e3c06  51                   push ecx
// 008e3c07  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e3c0b  8d1408               lea edx, [eax + ecx]
// 008e3c0e  52                   push edx
// 008e3c0f  8b542454             mov edx, dword ptr [esp + 0x54]
// 008e3c13  03c2                 add eax, edx
// 008e3c15  50                   push eax
// 008e3c16  51                   push ecx
// 008e3c17  8d442424             lea eax, [esp + 0x24]
// 008e3c1b  50                   push eax
// 008e3c1c  ff1538ca9800         call dword ptr [0x98ca38]
// 008e3c22  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e3c26  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e3c2a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e3c2e  6a00                 push 0
// 008e3c30  2bc8                 sub ecx, eax
// 008e3c32  51                   push ecx
// 008e3c33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e3c37  2bd1                 sub edx, ecx
// 008e3c39  52                   push edx
// 008e3c3a  50                   push eax
// 008e3c3b  51                   push ecx
// 008e3c3c  8bce                 mov ecx, esi
// 008e3c3e  e8effff0ff           call 0x7f3c32
// 008e3c43  b801000000           mov eax, 1
// 008e3c48  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e3c4c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e3c53  59                   pop ecx
// 008e3c54  5f                   pop edi
// 008e3c55  5e                   pop esi
// 008e3c56  5b                   pop ebx
// 008e3c57  83c430               add esp, 0x30
// 008e3c5a  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTShadowWnd@@IAEHHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp