// roc 2009-06 0080aef0  unit: CXTCaptionButton  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080aef0
//
// 0080aef0  83ec20               sub esp, 0x20
// 0080aef3  56                   push esi
// 0080aef4  8bf1                 mov esi, ecx
// 0080aef6  e865fbffff           call 0x80aa60
// 0080aefb  3c07                 cmp al, 7
// 0080aefd  747a                 je 0x80af79
// 0080aeff  8bce                 mov ecx, esi
// 0080af01  e802e1f0ff           call 0x719008
// 0080af06  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080af09  8d442414             lea eax, [esp + 0x14]
// 0080af0d  50                   push eax
// 0080af0e  51                   push ecx
// 0080af0f  ff1514ee8900         call dword ptr [0x89ee14]
// 0080af15  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080af19  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080af1d  52                   push edx
// 0080af1e  50                   push eax
// 0080af1f  8d4c241c             lea ecx, [esp + 0x1c]
// 0080af23  51                   push ecx
// 0080af24  ff15c0ed8900         call dword ptr [0x89edc0]
// 0080af2a  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 0080af30  7447                 je 0x80af79
// 0080af32  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080af35  6a00                 push 0
// 0080af37  6a00                 push 0
// 0080af39  52                   push edx
// 0080af3a  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0080af40  ff157cee8900         call dword ptr [0x89ee7c]
// 0080af46  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0080af4d  742a                 je 0x80af79
// 0080af4f  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080af52  8d4c2404             lea ecx, [esp + 4]
// 0080af56  51                   push ecx
// 0080af57  c744240810000000     mov dword ptr [esp + 8], 0x10
// 0080af5f  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0080af67  89442410             mov dword ptr [esp + 0x10], eax
// 0080af6b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080af73  ff156ce08900         call dword ptr [0x89e06c]
// 0080af79  5e                   pop esi
// 0080af7a  83c420               add esp, 0x20
// 0080af7d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp