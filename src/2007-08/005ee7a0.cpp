// roc 2007-08 005ee7a0  unit: RBX::VBodyForce::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee7a0
//
// 005ee7a0  6aff                 push -1
// 005ee7a2  6828b27500           push 0x75b228
// 005ee7a7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee7ad  50                   push eax
// 005ee7ae  64892500000000       mov dword ptr fs:[0], esp
// 005ee7b5  83ec08               sub esp, 8
// 005ee7b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee7bc  56                   push esi
// 005ee7bd  57                   push edi
// 005ee7be  8bf1                 mov esi, ecx
// 005ee7c0  89742408             mov dword ptr [esp + 8], esi
// 005ee7c4  50                   push eax
// 005ee7c5  51                   push ecx
// 005ee7c6  8bc4                 mov eax, esp
// 005ee7c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee7d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee7d8  89642414             mov dword ptr [esp + 0x14], esp
// 005ee7dc  c70000000000         mov dword ptr [eax], 0
// 005ee7e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee7e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee7ea  51                   push ecx
// 005ee7eb  52                   push edx
// 005ee7ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee7f1  e80af0ffff           call 0x5ed800
// 005ee7f6  50                   push eax
// 005ee7f7  8bce                 mov ecx, esi
// 005ee7f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee7fe  e8bd67f8ff           call 0x574fc0
// 005ee803  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee807  50                   push eax
// 005ee808  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee80d  e850140400           call 0x62fc62
// 005ee812  6a18                 push 0x18
// 005ee814  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ee81a  e8d7160400           call 0x62fef6
// 005ee81f  83c408               add esp, 8
// 005ee822  85c0                 test eax, eax
// 005ee824  741e                 je 0x5ee844
// 005ee826  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee82a  33c9                 xor ecx, ecx
// 005ee82c  33d2                 xor edx, edx
// 005ee82e  897808               mov dword ptr [eax + 8], edi
// 005ee831  c700b0ec7b00         mov dword ptr [eax], 0x7becb0
// 005ee837  897004               mov dword ptr [eax + 4], esi
// 005ee83a  894810               mov dword ptr [eax + 0x10], ecx
// 005ee83d  895014               mov dword ptr [eax + 0x14], edx
// 005ee840  8bf8                 mov edi, eax
// 005ee842  eb02                 jmp 0x5ee846
// 005ee844  33ff                 xor edi, edi
// 005ee846  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee849  3bf8                 cmp edi, eax
// 005ee84b  7409                 je 0x5ee856
// 005ee84d  50                   push eax
// 005ee84e  e80f140400           call 0x62fc62
// 005ee853  83c404               add esp, 4
// 005ee856  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee85a  897e18               mov dword ptr [esi + 0x18], edi
// 005ee85d  5f                   pop edi
// 005ee85e  8bc6                 mov eax, esi
// 005ee860  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee867  5e                   pop esi
// 005ee868  83c414               add esp, 0x14
// 005ee86b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
