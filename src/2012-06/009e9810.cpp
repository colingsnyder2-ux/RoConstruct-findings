// roc 2012-06 009e9810  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9810
//
// 009e9810  6aff                 push -1
// 009e9812  68b913ae00           push 0xae13b9
// 009e9817  64a100000000         mov eax, dword ptr fs:[0]
// 009e981d  50                   push eax
// 009e981e  83ec18               sub esp, 0x18
// 009e9821  53                   push ebx
// 009e9822  55                   push ebp
// 009e9823  56                   push esi
// 009e9824  57                   push edi
// 009e9825  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e982a  33c4                 xor eax, esp
// 009e982c  50                   push eax
// 009e982d  8d44242c             lea eax, [esp + 0x2c]
// 009e9831  64a300000000         mov dword ptr fs:[0], eax
// 009e9837  8bf1                 mov esi, ecx
// 009e9839  e8a08ef9ff           call 0x9826de
// 009e983e  83f8ff               cmp eax, -1
// 009e9841  7508                 jne 0x9e984b
// 009e9843  83c8ff               or eax, 0xffffffff
// 009e9846  e9bc000000           jmp 0x9e9907
// 009e984b  33db                 xor ebx, ebx
// 009e984d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 009e9854  747f                 je 0x9e98d5
// 009e9856  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 009e985c  50                   push eax
// 009e985d  8d4c241c             lea ecx, [esp + 0x1c]
// 009e9861  51                   push ecx
// 009e9862  e849f5ffff           call 0x9e8db0
// 009e9867  83c408               add esp, 8
// 009e986a  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 009e9870  53                   push ebx
// 009e9871  6a65                 push 0x65
// 009e9873  56                   push esi
// 009e9874  8d542428             lea edx, [esp + 0x28]
// 009e9878  52                   push edx
// 009e9879  8dbeb0000000         lea edi, [esi + 0xb0]
// 009e987f  6800080050           push 0x50000800
// 009e9884  8bc8                 mov ecx, eax
// 009e9886  895c2448             mov dword ptr [esp + 0x48], ebx
// 009e988a  895c2430             mov dword ptr [esp + 0x30], ebx
// 009e988e  895c2434             mov dword ptr [esp + 0x34], ebx
// 009e9892  895c2438             mov dword ptr [esp + 0x38], ebx
// 009e9896  895c243c             mov dword ptr [esp + 0x3c], ebx
// 009e989a  ff159847b200         call dword ptr [0xb24798]
// 009e98a0  50                   push eax
// 009e98a1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 009e98a4  682c7fc100           push 0xc17f2c
// 009e98a9  6800000200           push 0x20000
// 009e98ae  8bcf                 mov ecx, edi
// 009e98b0  ffd0                 call eax
// 009e98b2  85c0                 test eax, eax
// 009e98b4  8d4c2418             lea ecx, [esp + 0x18]
// 009e98b8  0f94442417           sete byte ptr [esp + 0x17]
// 009e98bd  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 009e98c5  ff15d047b200         call dword ptr [0xb247d0]
// 009e98cb  385c2417             cmp byte ptr [esp + 0x17], bl
// 009e98cf  0f856effffff         jne 0x9e9843
// 009e98d5  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 009e98db  7f05                 jg 0x9e98e2
// 009e98dd  e8de8af9ff           call 0x9823c0
// 009e98e2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e98e8  8b01                 mov eax, dword ptr [ecx]
// 009e98ea  3bc3                 cmp eax, ebx
// 009e98ec  7505                 jne 0x9e98f3
// 009e98ee  e8cd8af9ff           call 0x9823c0
// 009e98f3  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 009e98f9  52                   push edx
// 009e98fa  8d8888000000         lea ecx, [eax + 0x88]
// 009e9900  e8eb660700           call 0xa5fff0
// 009e9905  33c0                 xor eax, eax
// 009e9907  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009e990b  64890d00000000       mov dword ptr fs:[0], ecx
// 009e9912  59                   pop ecx
// 009e9913  5f                   pop edi
// 009e9914  5e                   pop esi
// 009e9915  5d                   pop ebp
// 009e9916  5b                   pop ebx
// 009e9917  83c424               add esp, 0x24
// 009e991a  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp