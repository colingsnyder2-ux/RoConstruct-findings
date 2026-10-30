// roc 2010-06 00813a40  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813a40
//
// 00813a40  6aff                 push -1
// 00813a42  68b9469b00           push 0x9b46b9
// 00813a47  64a100000000         mov eax, dword ptr fs:[0]
// 00813a4d  50                   push eax
// 00813a4e  83ec18               sub esp, 0x18
// 00813a51  53                   push ebx
// 00813a52  55                   push ebp
// 00813a53  56                   push esi
// 00813a54  57                   push edi
// 00813a55  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00813a5a  33c4                 xor eax, esp
// 00813a5c  50                   push eax
// 00813a5d  8d44242c             lea eax, [esp + 0x2c]
// 00813a61  64a300000000         mov dword ptr fs:[0], eax
// 00813a67  8bf1                 mov esi, ecx
// 00813a69  e80245f9ff           call 0x7a7f70
// 00813a6e  83f8ff               cmp eax, -1
// 00813a71  7508                 jne 0x813a7b
// 00813a73  83c8ff               or eax, 0xffffffff
// 00813a76  e9bc000000           jmp 0x813b37
// 00813a7b  33db                 xor ebx, ebx
// 00813a7d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00813a84  747f                 je 0x813b05
// 00813a86  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00813a8c  50                   push eax
// 00813a8d  8d4c241c             lea ecx, [esp + 0x1c]
// 00813a91  51                   push ecx
// 00813a92  e849f5ffff           call 0x812fe0
// 00813a97  83c408               add esp, 8
// 00813a9a  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 00813aa0  53                   push ebx
// 00813aa1  6a65                 push 0x65
// 00813aa3  56                   push esi
// 00813aa4  8d542428             lea edx, [esp + 0x28]
// 00813aa8  52                   push edx
// 00813aa9  8dbeb0000000         lea edi, [esi + 0xb0]
// 00813aaf  6800080050           push 0x50000800
// 00813ab4  8bc8                 mov ecx, eax
// 00813ab6  895c2448             mov dword ptr [esp + 0x48], ebx
// 00813aba  895c2430             mov dword ptr [esp + 0x30], ebx
// 00813abe  895c2434             mov dword ptr [esp + 0x34], ebx
// 00813ac2  895c2438             mov dword ptr [esp + 0x38], ebx
// 00813ac6  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00813aca  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00813ad0  50                   push eax
// 00813ad1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00813ad4  685c1fa600           push 0xa61f5c
// 00813ad9  6800000200           push 0x20000
// 00813ade  8bcf                 mov ecx, edi
// 00813ae0  ffd0                 call eax
// 00813ae2  85c0                 test eax, eax
// 00813ae4  8d4c2418             lea ecx, [esp + 0x18]
// 00813ae8  0f94442417           sete byte ptr [esp + 0x17]
// 00813aed  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00813af5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00813afb  385c2417             cmp byte ptr [esp + 0x17], bl
// 00813aff  0f856effffff         jne 0x813a73
// 00813b05  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 00813b0b  7f05                 jg 0x813b12
// 00813b0d  e83a41f9ff           call 0x7a7c4c
// 00813b12  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00813b18  8b01                 mov eax, dword ptr [ecx]
// 00813b1a  3bc3                 cmp eax, ebx
// 00813b1c  7505                 jne 0x813b23
// 00813b1e  e82941f9ff           call 0x7a7c4c
// 00813b23  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00813b29  52                   push edx
// 00813b2a  8d8888000000         lea ecx, [eax + 0x88]
// 00813b30  e81bb50700           call 0x88f050
// 00813b35  33c0                 xor eax, eax
// 00813b37  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813b3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00813b42  59                   pop ecx
// 00813b43  5f                   pop edi
// 00813b44  5e                   pop esi
// 00813b45  5d                   pop ebp
// 00813b46  5b                   pop ebx
// 00813b47  83c424               add esp, 0x24
// 00813b4a  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp