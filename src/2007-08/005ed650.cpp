// roc 2007-08 005ed650  unit: RBX::VRocket::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed650
//
// 005ed650  6aff                 push -1
// 005ed652  6828b27500           push 0x75b228
// 005ed657  64a100000000         mov eax, dword ptr fs:[0]
// 005ed65d  50                   push eax
// 005ed65e  64892500000000       mov dword ptr fs:[0], esp
// 005ed665  83ec08               sub esp, 8
// 005ed668  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ed66c  56                   push esi
// 005ed66d  57                   push edi
// 005ed66e  8bf1                 mov esi, ecx
// 005ed670  89742408             mov dword ptr [esp + 8], esi
// 005ed674  50                   push eax
// 005ed675  51                   push ecx
// 005ed676  8bc4                 mov eax, esp
// 005ed678  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ed680  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ed688  89642414             mov dword ptr [esp + 0x14], esp
// 005ed68c  c70000000000         mov dword ptr [eax], 0
// 005ed692  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed696  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ed69a  51                   push ecx
// 005ed69b  52                   push edx
// 005ed69c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ed6a1  e8cafcffff           call 0x5ed370
// 005ed6a6  50                   push eax
// 005ed6a7  8bce                 mov ecx, esi
// 005ed6a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ed6ae  e80d79f8ff           call 0x574fc0
// 005ed6b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ed6b7  50                   push eax
// 005ed6b8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ed6bd  e8a0250400           call 0x62fc62
// 005ed6c2  6a18                 push 0x18
// 005ed6c4  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ed6ca  e827280400           call 0x62fef6
// 005ed6cf  83c408               add esp, 8
// 005ed6d2  85c0                 test eax, eax
// 005ed6d4  741e                 je 0x5ed6f4
// 005ed6d6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ed6da  33c9                 xor ecx, ecx
// 005ed6dc  33d2                 xor edx, edx
// 005ed6de  897808               mov dword ptr [eax + 8], edi
// 005ed6e1  c70090ec7b00         mov dword ptr [eax], 0x7bec90
// 005ed6e7  897004               mov dword ptr [eax + 4], esi
// 005ed6ea  894810               mov dword ptr [eax + 0x10], ecx
// 005ed6ed  895014               mov dword ptr [eax + 0x14], edx
// 005ed6f0  8bf8                 mov edi, eax
// 005ed6f2  eb02                 jmp 0x5ed6f6
// 005ed6f4  33ff                 xor edi, edi
// 005ed6f6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ed6f9  3bf8                 cmp edi, eax
// 005ed6fb  7409                 je 0x5ed706
// 005ed6fd  50                   push eax
// 005ed6fe  e85f250400           call 0x62fc62
// 005ed703  83c404               add esp, 4
// 005ed706  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ed70a  897e18               mov dword ptr [esi + 0x18], edi
// 005ed70d  5f                   pop edi
// 005ed70e  8bc6                 mov eax, esi
// 005ed710  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed717  5e                   pop esi
// 005ed718  83c414               add esp, 0x14
// 005ed71b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
