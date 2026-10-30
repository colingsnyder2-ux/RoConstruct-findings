// roc 2007-08 00714f10  unit: CXTCaptionButton  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714f10
//
// 00714f10  83ec20               sub esp, 0x20
// 00714f13  56                   push esi
// 00714f14  8bf1                 mov esi, ecx
// 00714f16  e865fbffff           call 0x714a80
// 00714f1b  3c07                 cmp al, 7
// 00714f1d  747a                 je 0x714f99
// 00714f1f  8bce                 mov ecx, esi
// 00714f21  e818b3f1ff           call 0x63023e
// 00714f26  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00714f29  8d442414             lea eax, [esp + 0x14]
// 00714f2d  50                   push eax
// 00714f2e  51                   push ecx
// 00714f2f  ff15f4ed7700         call dword ptr [0x77edf4]
// 00714f35  8b542430             mov edx, dword ptr [esp + 0x30]
// 00714f39  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00714f3d  52                   push edx
// 00714f3e  50                   push eax
// 00714f3f  8d4c241c             lea ecx, [esp + 0x1c]
// 00714f43  51                   push ecx
// 00714f44  ff1594ed7700         call dword ptr [0x77ed94]
// 00714f4a  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 00714f50  7447                 je 0x714f99
// 00714f52  8b5620               mov edx, dword ptr [esi + 0x20]
// 00714f55  6a00                 push 0
// 00714f57  6a00                 push 0
// 00714f59  52                   push edx
// 00714f5a  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00714f60  ff15dcec7700         call dword ptr [0x77ecdc]
// 00714f66  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00714f6d  742a                 je 0x714f99
// 00714f6f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00714f72  8d4c2404             lea ecx, [esp + 4]
// 00714f76  51                   push ecx
// 00714f77  c744240810000000     mov dword ptr [esp + 8], 0x10
// 00714f7f  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00714f87  89442410             mov dword ptr [esp + 0x10], eax
// 00714f8b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00714f93  ff1544d07700         call dword ptr [0x77d044]
// 00714f99  5e                   pop esi
// 00714f9a  83c420               add esp, 0x20
// 00714f9d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp