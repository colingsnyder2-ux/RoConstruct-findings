// roc 2007-03 00678ad0  unit: seg_00670000  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678ad0
//
// 00678ad0  6aff                 push -1
// 00678ad2  68c9317600           push 0x7631c9
// 00678ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00678add  50                   push eax
// 00678ade  83ec18               sub esp, 0x18
// 00678ae1  53                   push ebx
// 00678ae2  55                   push ebp
// 00678ae3  56                   push esi
// 00678ae4  57                   push edi
// 00678ae5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00678aea  33c4                 xor eax, esp
// 00678aec  50                   push eax
// 00678aed  8d44242c             lea eax, [esp + 0x2c]
// 00678af1  64a300000000         mov dword ptr fs:[0], eax
// 00678af7  8bf1                 mov esi, ecx
// 00678af9  e8d45bfaff           call 0x61e6d2
// 00678afe  83f8ff               cmp eax, -1
// 00678b01  7508                 jne 0x678b0b
// 00678b03  83c8ff               or eax, 0xffffffff
// 00678b06  e9bc000000           jmp 0x678bc7
// 00678b0b  33db                 xor ebx, ebx
// 00678b0d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00678b14  747f                 je 0x678b95
// 00678b16  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00678b1c  50                   push eax
// 00678b1d  8d4c241c             lea ecx, [esp + 0x1c]
// 00678b21  51                   push ecx
// 00678b22  e849f5ffff           call 0x678070
// 00678b27  83c408               add esp, 8
// 00678b2a  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 00678b30  53                   push ebx
// 00678b31  6a65                 push 0x65
// 00678b33  56                   push esi
// 00678b34  8d542428             lea edx, [esp + 0x28]
// 00678b38  52                   push edx
// 00678b39  8dbeb0000000         lea edi, [esi + 0xb0]
// 00678b3f  6800080050           push 0x50000800
// 00678b44  8bc8                 mov ecx, eax
// 00678b46  895c2448             mov dword ptr [esp + 0x48], ebx
// 00678b4a  895c2430             mov dword ptr [esp + 0x30], ebx
// 00678b4e  895c2434             mov dword ptr [esp + 0x34], ebx
// 00678b52  895c2438             mov dword ptr [esp + 0x38], ebx
// 00678b56  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00678b5a  ff1554dd7700         call dword ptr [0x77dd54]
// 00678b60  50                   push eax
// 00678b61  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00678b64  680cd07c00           push 0x7cd00c
// 00678b69  6800000200           push 0x20000
// 00678b6e  8bcf                 mov ecx, edi
// 00678b70  ffd0                 call eax
// 00678b72  85c0                 test eax, eax
// 00678b74  8d4c2418             lea ecx, [esp + 0x18]
// 00678b78  0f94442417           sete byte ptr [esp + 0x17]
// 00678b7d  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00678b85  ff1578dd7700         call dword ptr [0x77dd78]
// 00678b8b  385c2417             cmp byte ptr [esp + 0x17], bl
// 00678b8f  0f856effffff         jne 0x678b03
// 00678b95  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 00678b9b  7f05                 jg 0x678ba2
// 00678b9d  e80c58faff           call 0x61e3ae
// 00678ba2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00678ba8  8b01                 mov eax, dword ptr [ecx]
// 00678baa  3bc3                 cmp eax, ebx
// 00678bac  7505                 jne 0x678bb3
// 00678bae  e8fb57faff           call 0x61e3ae
// 00678bb3  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00678bb9  52                   push edx
// 00678bba  8d8888000000         lea ecx, [eax + 0x88]
// 00678bc0  e85b470700           call 0x6ed320
// 00678bc5  33c0                 xor eax, eax
// 00678bc7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00678bcb  64890d00000000       mov dword ptr fs:[0], ecx
// 00678bd2  59                   pop ecx
// 00678bd3  5f                   pop edi
// 00678bd4  5e                   pop esi
// 00678bd5  5d                   pop ebp
// 00678bd6  5b                   pop ebx
// 00678bd7  83c424               add esp, 0x24
// 00678bda  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp