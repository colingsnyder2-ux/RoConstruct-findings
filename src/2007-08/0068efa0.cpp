// roc 2007-08 0068efa0  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068efa0
//
// 0068efa0  6aff                 push -1
// 0068efa2  68d92d7600           push 0x762dd9
// 0068efa7  64a100000000         mov eax, dword ptr fs:[0]
// 0068efad  50                   push eax
// 0068efae  83ec18               sub esp, 0x18
// 0068efb1  53                   push ebx
// 0068efb2  55                   push ebp
// 0068efb3  56                   push esi
// 0068efb4  57                   push edi
// 0068efb5  a188518b00           mov eax, dword ptr [0x8b5188]
// 0068efba  33c4                 xor eax, esp
// 0068efbc  50                   push eax
// 0068efbd  8d44242c             lea eax, [esp + 0x2c]
// 0068efc1  64a300000000         mov dword ptr fs:[0], eax
// 0068efc7  8bf1                 mov esi, ecx
// 0068efc9  e87012faff           call 0x63023e
// 0068efce  83f8ff               cmp eax, -1
// 0068efd1  7508                 jne 0x68efdb
// 0068efd3  83c8ff               or eax, 0xffffffff
// 0068efd6  e9bc000000           jmp 0x68f097
// 0068efdb  33db                 xor ebx, ebx
// 0068efdd  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 0068efe4  747f                 je 0x68f065
// 0068efe6  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0068efec  50                   push eax
// 0068efed  8d4c241c             lea ecx, [esp + 0x1c]
// 0068eff1  51                   push ecx
// 0068eff2  e849f5ffff           call 0x68e540
// 0068eff7  83c408               add esp, 8
// 0068effa  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 0068f000  53                   push ebx
// 0068f001  6a65                 push 0x65
// 0068f003  56                   push esi
// 0068f004  8d542428             lea edx, [esp + 0x28]
// 0068f008  52                   push edx
// 0068f009  8dbeb0000000         lea edi, [esi + 0xb0]
// 0068f00f  6800080050           push 0x50000800
// 0068f014  8bc8                 mov ecx, eax
// 0068f016  895c2448             mov dword ptr [esp + 0x48], ebx
// 0068f01a  895c2430             mov dword ptr [esp + 0x30], ebx
// 0068f01e  895c2434             mov dword ptr [esp + 0x34], ebx
// 0068f022  895c2438             mov dword ptr [esp + 0x38], ebx
// 0068f026  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0068f02a  ff1598dd7700         call dword ptr [0x77dd98]
// 0068f030  50                   push eax
// 0068f031  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0068f034  68dc037d00           push 0x7d03dc
// 0068f039  6800000200           push 0x20000
// 0068f03e  8bcf                 mov ecx, edi
// 0068f040  ffd0                 call eax
// 0068f042  85c0                 test eax, eax
// 0068f044  8d4c2418             lea ecx, [esp + 0x18]
// 0068f048  0f94442417           sete byte ptr [esp + 0x17]
// 0068f04d  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0068f055  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0068f05b  385c2417             cmp byte ptr [esp + 0x17], bl
// 0068f05f  0f856effffff         jne 0x68efd3
// 0068f065  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 0068f06b  7f05                 jg 0x68f072
// 0068f06d  e8ae0efaff           call 0x62ff20
// 0068f072  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0068f078  8b01                 mov eax, dword ptr [ecx]
// 0068f07a  3bc3                 cmp eax, ebx
// 0068f07c  7505                 jne 0x68f083
// 0068f07e  e89d0efaff           call 0x62ff20
// 0068f083  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0068f089  52                   push edx
// 0068f08a  8d8888000000         lea ecx, [eax + 0x88]
// 0068f090  e82bb10700           call 0x70a1c0
// 0068f095  33c0                 xor eax, eax
// 0068f097  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068f09b  64890d00000000       mov dword ptr fs:[0], ecx
// 0068f0a2  59                   pop ecx
// 0068f0a3  5f                   pop edi
// 0068f0a4  5e                   pop esi
// 0068f0a5  5d                   pop ebp
// 0068f0a6  5b                   pop ebx
// 0068f0a7  83c424               add esp, 0x24
// 0068f0aa  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp