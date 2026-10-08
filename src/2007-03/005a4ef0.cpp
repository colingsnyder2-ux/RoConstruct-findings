// roc 2007-03 005a4ef0  unit: seg_005a0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4ef0
//
// 005a4ef0  6aff                 push -1
// 005a4ef2  68089c7500           push 0x759c08
// 005a4ef7  64a100000000         mov eax, dword ptr fs:[0]
// 005a4efd  50                   push eax
// 005a4efe  64892500000000       mov dword ptr fs:[0], esp
// 005a4f05  83ec08               sub esp, 8
// 005a4f08  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4f0c  56                   push esi
// 005a4f0d  57                   push edi
// 005a4f0e  8bf1                 mov esi, ecx
// 005a4f10  89742408             mov dword ptr [esp + 8], esi
// 005a4f14  50                   push eax
// 005a4f15  51                   push ecx
// 005a4f16  8bc4                 mov eax, esp
// 005a4f18  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005a4f20  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a4f28  89642414             mov dword ptr [esp + 0x14], esp
// 005a4f2c  c70000000000         mov dword ptr [eax], 0
// 005a4f32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4f36  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a4f3a  51                   push ecx
// 005a4f3b  52                   push edx
// 005a4f3c  c644242801           mov byte ptr [esp + 0x28], 1
// 005a4f41  e88a34feff           call 0x5883d0
// 005a4f46  50                   push eax
// 005a4f47  8bce                 mov ecx, esi
// 005a4f49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a4f4e  e86df9e9ff           call 0x4448c0
// 005a4f53  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4f57  50                   push eax
// 005a4f58  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a4f5d  e88e910700           call 0x61e0f0
// 005a4f62  6a18                 push 0x18
// 005a4f64  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005a4f6a  e899910700           call 0x61e108
// 005a4f6f  83c408               add esp, 8
// 005a4f72  85c0                 test eax, eax
// 005a4f74  741e                 je 0x5a4f94
// 005a4f76  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005a4f7a  33c9                 xor ecx, ecx
// 005a4f7c  33d2                 xor edx, edx
// 005a4f7e  897808               mov dword ptr [eax + 8], edi
// 005a4f81  c70058547b00         mov dword ptr [eax], 0x7b5458
// 005a4f87  897004               mov dword ptr [eax + 4], esi
// 005a4f8a  894810               mov dword ptr [eax + 0x10], ecx
// 005a4f8d  895014               mov dword ptr [eax + 0x14], edx
// 005a4f90  8bf8                 mov edi, eax
// 005a4f92  eb02                 jmp 0x5a4f96
// 005a4f94  33ff                 xor edi, edi
// 005a4f96  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a4f99  3bf8                 cmp edi, eax
// 005a4f9b  7409                 je 0x5a4fa6
// 005a4f9d  50                   push eax
// 005a4f9e  e84d910700           call 0x61e0f0
// 005a4fa3  83c404               add esp, 4
// 005a4fa6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a4faa  897e18               mov dword ptr [esi + 0x18], edi
// 005a4fad  5f                   pop edi
// 005a4fae  8bc6                 mov eax, esi
// 005a4fb0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4fb7  5e                   pop esi
// 005a4fb8  83c414               add esp, 0x14
// 005a4fbb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
