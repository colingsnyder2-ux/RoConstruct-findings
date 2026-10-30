// roc 2009-12 008e5b50  unit: CXTCaptionButton  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5b50
//
// 008e5b50  83ec40               sub esp, 0x40
// 008e5b53  56                   push esi
// 008e5b54  57                   push edi
// 008e5b55  6a30                 push 0x30
// 008e5b57  8d44241c             lea eax, [esp + 0x1c]
// 008e5b5b  6a00                 push 0
// 008e5b5d  50                   push eax
// 008e5b5e  8bf1                 mov esi, ecx
// 008e5b60  e83feff0ff           call 0x7f4aa4
// 008e5b65  83c40c               add esp, 0xc
// 008e5b68  8bce                 mov ecx, esi
// 008e5b6a  c744241804000000     mov dword ptr [esp + 0x18], 4
// 008e5b72  e8530b0400           call 0x9266ca
// 008e5b77  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008e5b7a  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e5b7e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008e5b86  ff15eccb9800         call dword ptr [0x98cbec]
// 008e5b8c  3bc7                 cmp eax, edi
// 008e5b8e  7505                 jne 0x8e5b95
// 008e5b90  834c242810           or dword ptr [esp + 0x28], 0x10
// 008e5b95  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 008e5b9c  7405                 je 0x8e5ba3
// 008e5b9e  834c242801           or dword ptr [esp + 0x28], 1
// 008e5ba3  6a00                 push 0
// 008e5ba5  6a00                 push 0
// 008e5ba7  6829010000           push 0x129
// 008e5bac  57                   push edi
// 008e5bad  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008e5bb3  a802                 test al, 2
// 008e5bb5  7408                 je 0x8e5bbf
// 008e5bb7  814c242800010000     or dword ptr [esp + 0x28], 0x100
// 008e5bbf  a801                 test al, 1
// 008e5bc1  7408                 je 0x8e5bcb
// 008e5bc3  814c242800020000     or dword ptr [esp + 0x28], 0x200
// 008e5bcb  8bce                 mov ecx, esi
// 008e5bcd  e8d40a0400           call 0x9266a6
// 008e5bd2  85c0                 test eax, eax
// 008e5bd4  7505                 jne 0x8e5bdb
// 008e5bd6  834c242804           or dword ptr [esp + 0x28], 4
// 008e5bdb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008e5bdf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e5be2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e5be6  85c0                 test eax, eax
// 008e5be8  7506                 jne 0x8e5bf0
// 008e5bea  89442430             mov dword ptr [esp + 0x30], eax
// 008e5bee  eb07                 jmp 0x8e5bf7
// 008e5bf0  8b5004               mov edx, dword ptr [eax + 4]
// 008e5bf3  89542430             mov dword ptr [esp + 0x30], edx
// 008e5bf7  56                   push esi
// 008e5bf8  8d4c240c             lea ecx, [esp + 0xc]
// 008e5bfc  e8cf56f6ff           call 0x84b2d0
// 008e5c01  8b08                 mov ecx, dword ptr [eax]
// 008e5c03  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e5c07  8b5004               mov edx, dword ptr [eax + 4]
// 008e5c0a  89542438             mov dword ptr [esp + 0x38], edx
// 008e5c0e  8b4808               mov ecx, dword ptr [eax + 8]
// 008e5c11  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e5c15  8b500c               mov edx, dword ptr [eax + 0xc]
// 008e5c18  8b06                 mov eax, dword ptr [esi]
// 008e5c1a  8d4c2418             lea ecx, [esp + 0x18]
// 008e5c1e  89542440             mov dword ptr [esp + 0x40], edx
// 008e5c22  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008e5c28  51                   push ecx
// 008e5c29  8bce                 mov ecx, esi
// 008e5c2b  ffd2                 call edx
// 008e5c2d  5f                   pop edi
// 008e5c2e  5e                   pop esi
// 008e5c2f  83c440               add esp, 0x40
// 008e5c32  c20400               ret 4
// copied from an identical function in another client (function ?OnDraw@CXTButton@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp