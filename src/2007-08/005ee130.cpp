// roc 2007-08 005ee130  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee130
//
// 005ee130  6aff                 push -1
// 005ee132  6828b27500           push 0x75b228
// 005ee137  64a100000000         mov eax, dword ptr fs:[0]
// 005ee13d  50                   push eax
// 005ee13e  64892500000000       mov dword ptr fs:[0], esp
// 005ee145  83ec08               sub esp, 8
// 005ee148  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee14c  56                   push esi
// 005ee14d  57                   push edi
// 005ee14e  8bf1                 mov esi, ecx
// 005ee150  89742408             mov dword ptr [esp + 8], esi
// 005ee154  50                   push eax
// 005ee155  51                   push ecx
// 005ee156  8bc4                 mov eax, esp
// 005ee158  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee160  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee168  89642414             mov dword ptr [esp + 0x14], esp
// 005ee16c  c70000000000         mov dword ptr [eax], 0
// 005ee172  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee176  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee17a  51                   push ecx
// 005ee17b  52                   push edx
// 005ee17c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee181  e82afbffff           call 0x5edcb0
// 005ee186  50                   push eax
// 005ee187  8bce                 mov ecx, esi
// 005ee189  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee18e  e82d6ef8ff           call 0x574fc0
// 005ee193  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee197  50                   push eax
// 005ee198  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee19d  e8c01a0400           call 0x62fc62
// 005ee1a2  6a18                 push 0x18
// 005ee1a4  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ee1aa  e8471d0400           call 0x62fef6
// 005ee1af  83c408               add esp, 8
// 005ee1b2  85c0                 test eax, eax
// 005ee1b4  741e                 je 0x5ee1d4
// 005ee1b6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee1ba  33c9                 xor ecx, ecx
// 005ee1bc  33d2                 xor edx, edx
// 005ee1be  897808               mov dword ptr [eax + 8], edi
// 005ee1c1  c70010ec7b00         mov dword ptr [eax], 0x7bec10
// 005ee1c7  897004               mov dword ptr [eax + 4], esi
// 005ee1ca  894810               mov dword ptr [eax + 0x10], ecx
// 005ee1cd  895014               mov dword ptr [eax + 0x14], edx
// 005ee1d0  8bf8                 mov edi, eax
// 005ee1d2  eb02                 jmp 0x5ee1d6
// 005ee1d4  33ff                 xor edi, edi
// 005ee1d6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee1d9  3bf8                 cmp edi, eax
// 005ee1db  7409                 je 0x5ee1e6
// 005ee1dd  50                   push eax
// 005ee1de  e87f1a0400           call 0x62fc62
// 005ee1e3  83c404               add esp, 4
// 005ee1e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee1ea  897e18               mov dword ptr [esi + 0x18], edi
// 005ee1ed  5f                   pop edi
// 005ee1ee  8bc6                 mov eax, esi
// 005ee1f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee1f7  5e                   pop esi
// 005ee1f8  83c414               add esp, 0x14
// 005ee1fb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
