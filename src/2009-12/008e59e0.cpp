// roc 2009-12 008e59e0  unit: CXTColorSelectorCtrl  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e59e0
//
// 008e59e0  83ec20               sub esp, 0x20
// 008e59e3  56                   push esi
// 008e59e4  8bf1                 mov esi, ecx
// 008e59e6  e815fbffff           call 0x8e5500
// 008e59eb  3c07                 cmp al, 7
// 008e59ed  747a                 je 0x8e5a69
// 008e59ef  8bce                 mov ecx, esi
// 008e59f1  e83ae4f0ff           call 0x7f3e30
// 008e59f6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e59f9  8d442414             lea eax, [esp + 0x14]
// 008e59fd  50                   push eax
// 008e59fe  51                   push ecx
// 008e59ff  ff1550cc9800         call dword ptr [0x98cc50]
// 008e5a05  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e5a09  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e5a0d  52                   push edx
// 008e5a0e  50                   push eax
// 008e5a0f  8d4c241c             lea ecx, [esp + 0x1c]
// 008e5a13  51                   push ecx
// 008e5a14  ff155cca9800         call dword ptr [0x98ca5c]
// 008e5a1a  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 008e5a20  7447                 je 0x8e5a69
// 008e5a22  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e5a25  6a00                 push 0
// 008e5a27  6a00                 push 0
// 008e5a29  52                   push edx
// 008e5a2a  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 008e5a30  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e5a36  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008e5a3d  742a                 je 0x8e5a69
// 008e5a3f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5a42  8d4c2404             lea ecx, [esp + 4]
// 008e5a46  51                   push ecx
// 008e5a47  c744240810000000     mov dword ptr [esp + 8], 0x10
// 008e5a4f  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 008e5a57  89442410             mov dword ptr [esp + 0x10], eax
// 008e5a5b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008e5a63  ff1564b09800         call dword ptr [0x98b064]
// 008e5a69  5e                   pop esi
// 008e5a6a  83c420               add esp, 0x20
// 008e5a6d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp