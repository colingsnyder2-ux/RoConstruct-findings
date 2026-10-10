// roc 2008-06 006c3a30  unit: CXTPToolBar  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3a30
//
// 006c3a30  83ec18               sub esp, 0x18
// 006c3a33  55                   push ebp
// 006c3a34  8be9                 mov ebp, ecx
// 006c3a36  e8cf850f00           call 0x7bc00a
// 006c3a3b  a900000010           test eax, 0x10000000
// 006c3a40  0f84cd000000         je 0x6c3b13
// 006c3a46  53                   push ebx
// 006c3a47  56                   push esi
// 006c3a48  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006c3a4c  57                   push edi
// 006c3a4d  8d4604               lea eax, [esi + 4]
// 006c3a50  50                   push eax
// 006c3a51  8d4c241c             lea ecx, [esp + 0x1c]
// 006c3a55  51                   push ecx
// 006c3a56  ff15702d8000         call dword ptr [0x802d70]
// 006c3a5c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006c3a60  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c3a64  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 006c3a6a  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 006c3a6e  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 006c3a72  b84a000000           mov eax, 0x4a
// 006c3a77  f6c140               test cl, 0x40
// 006c3a7a  7405                 je 0x6c3a81
// 006c3a7c  b84b000000           mov eax, 0x4b
// 006c3a81  f6c120               test cl, 0x20
// 006c3a84  7405                 je 0x6c3a8b
// 006c3a86  0d80000000           or eax, 0x80
// 006c3a8b  833e00               cmp dword ptr [esi], 0
// 006c3a8e  7503                 jne 0x6c3a93
// 006c3a90  83e0bf               and eax, 0xffffffbf
// 006c3a93  8b5500               mov edx, dword ptr [ebp]
// 006c3a96  8b9204020000         mov edx, dword ptr [edx + 0x204]
// 006c3a9c  6a00                 push 0
// 006c3a9e  50                   push eax
// 006c3a9f  57                   push edi
// 006c3aa0  8d44241c             lea eax, [esp + 0x1c]
// 006c3aa4  50                   push eax
// 006c3aa5  8bcd                 mov ecx, ebp
// 006c3aa7  ffd2                 call edx
// 006c3aa9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c3aad  3bcf                 cmp ecx, edi
// 006c3aaf  7c06                 jl 0x6c3ab7
// 006c3ab1  8bcf                 mov ecx, edi
// 006c3ab3  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c3ab7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c3abb  3bc3                 cmp eax, ebx
// 006c3abd  7c06                 jl 0x6c3ac5
// 006c3abf  8bc3                 mov eax, ebx
// 006c3ac1  89442414             mov dword ptr [esp + 0x14], eax
// 006c3ac5  8b5614               mov edx, dword ptr [esi + 0x14]
// 006c3ac8  014618               add dword ptr [esi + 0x18], eax
// 006c3acb  3bd1                 cmp edx, ecx
// 006c3acd  7f02                 jg 0x6c3ad1
// 006c3acf  8bd1                 mov edx, ecx
// 006c3ad1  014608               add dword ptr [esi + 8], eax
// 006c3ad4  895614               mov dword ptr [esi + 0x14], edx
// 006c3ad7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c3adb  03d1                 add edx, ecx
// 006c3add  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c3ae1  03c8                 add ecx, eax
// 006c3ae3  833e00               cmp dword ptr [esi], 0
// 006c3ae6  89542420             mov dword ptr [esp + 0x20], edx
// 006c3aea  894c2424             mov dword ptr [esp + 0x24], ecx
// 006c3aee  740f                 je 0x6c3aff
// 006c3af0  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006c3af3  8d542418             lea edx, [esp + 0x18]
// 006c3af7  52                   push edx
// 006c3af8  50                   push eax
// 006c3af9  56                   push esi
// 006c3afa  e879860f00           call 0x7bc178
// 006c3aff  8b5500               mov edx, dword ptr [ebp]
// 006c3b02  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006c3b08  6a01                 push 1
// 006c3b0a  6a00                 push 0
// 006c3b0c  8bcd                 mov ecx, ebp
// 006c3b0e  ffd0                 call eax
// 006c3b10  5f                   pop edi
// 006c3b11  5e                   pop esi
// 006c3b12  5b                   pop ebx
// 006c3b13  33c0                 xor eax, eax
// 006c3b15  5d                   pop ebp
// 006c3b16  83c418               add esp, 0x18
// 006c3b19  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnSizeParent@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
