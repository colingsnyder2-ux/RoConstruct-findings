// roc 2010-06 00899d00  unit: CXTColorSelectorCtrl  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899d00
//
// 00899d00  83ec20               sub esp, 0x20
// 00899d03  56                   push esi
// 00899d04  8bf1                 mov esi, ecx
// 00899d06  e805fbffff           call 0x899810
// 00899d0b  3c07                 cmp al, 7
// 00899d0d  747a                 je 0x899d89
// 00899d0f  8bce                 mov ecx, esi
// 00899d11  e85ae2f0ff           call 0x7a7f70
// 00899d16  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00899d19  8d442414             lea eax, [esp + 0x14]
// 00899d1d  50                   push eax
// 00899d1e  51                   push ecx
// 00899d1f  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 00899d25  8b542430             mov edx, dword ptr [esp + 0x30]
// 00899d29  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00899d2d  52                   push edx
// 00899d2e  50                   push eax
// 00899d2f  8d4c241c             lea ecx, [esp + 0x1c]
// 00899d33  51                   push ecx
// 00899d34  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00899d3a  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 00899d40  7447                 je 0x899d89
// 00899d42  8b5620               mov edx, dword ptr [esi + 0x20]
// 00899d45  6a00                 push 0
// 00899d47  6a00                 push 0
// 00899d49  52                   push edx
// 00899d4a  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00899d50  ff1578ba9e00         call dword ptr [0x9eba78]
// 00899d56  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00899d5d  742a                 je 0x899d89
// 00899d5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00899d62  8d4c2404             lea ecx, [esp + 4]
// 00899d66  51                   push ecx
// 00899d67  c744240810000000     mov dword ptr [esp + 8], 0x10
// 00899d6f  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00899d77  89442410             mov dword ptr [esp + 0x10], eax
// 00899d7b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00899d83  ff156ca09e00         call dword ptr [0x9ea06c]
// 00899d89  5e                   pop esi
// 00899d8a  83c420               add esp, 0x20
// 00899d8d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp