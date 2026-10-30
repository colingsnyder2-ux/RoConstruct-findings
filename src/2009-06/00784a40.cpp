// roc 2009-06 00784a40  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784a40
//
// 00784a40  6aff                 push -1
// 00784a42  68f9a48700           push 0x87a4f9
// 00784a47  64a100000000         mov eax, dword ptr fs:[0]
// 00784a4d  50                   push eax
// 00784a4e  83ec18               sub esp, 0x18
// 00784a51  53                   push ebx
// 00784a52  55                   push ebp
// 00784a53  56                   push esi
// 00784a54  57                   push edi
// 00784a55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00784a5a  33c4                 xor eax, esp
// 00784a5c  50                   push eax
// 00784a5d  8d44242c             lea eax, [esp + 0x2c]
// 00784a61  64a300000000         mov dword ptr fs:[0], eax
// 00784a67  8bf1                 mov esi, ecx
// 00784a69  e89a45f9ff           call 0x719008
// 00784a6e  83f8ff               cmp eax, -1
// 00784a71  7508                 jne 0x784a7b
// 00784a73  83c8ff               or eax, 0xffffffff
// 00784a76  e9bc000000           jmp 0x784b37
// 00784a7b  33db                 xor ebx, ebx
// 00784a7d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00784a84  747f                 je 0x784b05
// 00784a86  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00784a8c  50                   push eax
// 00784a8d  8d4c241c             lea ecx, [esp + 0x1c]
// 00784a91  51                   push ecx
// 00784a92  e849f5ffff           call 0x783fe0
// 00784a97  83c408               add esp, 8
// 00784a9a  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 00784aa0  53                   push ebx
// 00784aa1  6a65                 push 0x65
// 00784aa3  56                   push esi
// 00784aa4  8d542428             lea edx, [esp + 0x28]
// 00784aa8  52                   push edx
// 00784aa9  8dbeb0000000         lea edi, [esi + 0xb0]
// 00784aaf  6800080050           push 0x50000800
// 00784ab4  8bc8                 mov ecx, eax
// 00784ab6  895c2448             mov dword ptr [esp + 0x48], ebx
// 00784aba  895c2430             mov dword ptr [esp + 0x30], ebx
// 00784abe  895c2434             mov dword ptr [esp + 0x34], ebx
// 00784ac2  895c2438             mov dword ptr [esp + 0x38], ebx
// 00784ac6  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00784aca  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00784ad0  50                   push eax
// 00784ad1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00784ad4  68f4d78f00           push 0x8fd7f4
// 00784ad9  6800000200           push 0x20000
// 00784ade  8bcf                 mov ecx, edi
// 00784ae0  ffd0                 call eax
// 00784ae2  85c0                 test eax, eax
// 00784ae4  8d4c2418             lea ecx, [esp + 0x18]
// 00784ae8  0f94442417           sete byte ptr [esp + 0x17]
// 00784aed  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00784af5  ff1510fd8900         call dword ptr [0x89fd10]
// 00784afb  385c2417             cmp byte ptr [esp + 0x17], bl
// 00784aff  0f856effffff         jne 0x784a73
// 00784b05  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 00784b0b  7f05                 jg 0x784b12
// 00784b0d  e8d241f9ff           call 0x718ce4
// 00784b12  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00784b18  8b01                 mov eax, dword ptr [ecx]
// 00784b1a  3bc3                 cmp eax, ebx
// 00784b1c  7505                 jne 0x784b23
// 00784b1e  e8c141f9ff           call 0x718ce4
// 00784b23  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00784b29  52                   push edx
// 00784b2a  8d8888000000         lea ecx, [eax + 0x88]
// 00784b30  e88bb70700           call 0x8002c0
// 00784b35  33c0                 xor eax, eax
// 00784b37  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00784b3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00784b42  59                   pop ecx
// 00784b43  5f                   pop edi
// 00784b44  5e                   pop esi
// 00784b45  5d                   pop ebp
// 00784b46  5b                   pop ebx
// 00784b47  83c424               add esp, 0x24
// 00784b4a  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp