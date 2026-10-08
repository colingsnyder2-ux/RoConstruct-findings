// roc 2007-03 0059fcf0  unit: seg_00590000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059fcf0
//
// 0059fcf0  6aff                 push -1
// 0059fcf2  68089c7500           push 0x759c08
// 0059fcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0059fcfd  50                   push eax
// 0059fcfe  64892500000000       mov dword ptr fs:[0], esp
// 0059fd05  83ec08               sub esp, 8
// 0059fd08  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059fd0c  56                   push esi
// 0059fd0d  57                   push edi
// 0059fd0e  8bf1                 mov esi, ecx
// 0059fd10  89742408             mov dword ptr [esp + 8], esi
// 0059fd14  50                   push eax
// 0059fd15  51                   push ecx
// 0059fd16  8bc4                 mov eax, esp
// 0059fd18  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059fd20  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059fd28  89642414             mov dword ptr [esp + 0x14], esp
// 0059fd2c  c70000000000         mov dword ptr [eax], 0
// 0059fd32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059fd36  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059fd3a  51                   push ecx
// 0059fd3b  52                   push edx
// 0059fd3c  c644242801           mov byte ptr [esp + 0x28], 1
// 0059fd41  e84a88feff           call 0x588590
// 0059fd46  50                   push eax
// 0059fd47  8bce                 mov ecx, esi
// 0059fd49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059fd4e  e84d2ceaff           call 0x4429a0
// 0059fd53  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059fd57  50                   push eax
// 0059fd58  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059fd5d  e88ee30700           call 0x61e0f0
// 0059fd62  6a18                 push 0x18
// 0059fd64  c70610e77800         mov dword ptr [esi], 0x78e710
// 0059fd6a  e899e30700           call 0x61e108
// 0059fd6f  83c408               add esp, 8
// 0059fd72  85c0                 test eax, eax
// 0059fd74  741e                 je 0x59fd94
// 0059fd76  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0059fd7a  33c9                 xor ecx, ecx
// 0059fd7c  33d2                 xor edx, edx
// 0059fd7e  897808               mov dword ptr [eax + 8], edi
// 0059fd81  c70054387b00         mov dword ptr [eax], 0x7b3854
// 0059fd87  897004               mov dword ptr [eax + 4], esi
// 0059fd8a  894810               mov dword ptr [eax + 0x10], ecx
// 0059fd8d  895014               mov dword ptr [eax + 0x14], edx
// 0059fd90  8bf8                 mov edi, eax
// 0059fd92  eb02                 jmp 0x59fd96
// 0059fd94  33ff                 xor edi, edi
// 0059fd96  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059fd99  3bf8                 cmp edi, eax
// 0059fd9b  7409                 je 0x59fda6
// 0059fd9d  50                   push eax
// 0059fd9e  e84de30700           call 0x61e0f0
// 0059fda3  83c404               add esp, 4
// 0059fda6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059fdaa  897e18               mov dword ptr [esi + 0x18], edi
// 0059fdad  5f                   pop edi
// 0059fdae  8bc6                 mov eax, esi
// 0059fdb0  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fdb7  5e                   pop esi
// 0059fdb8  83c414               add esp, 0x14
// 0059fdbb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
