// roc 2007-03 005dcb30  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dcb30
//
// 005dcb30  6aff                 push -1
// 005dcb32  68089c7500           push 0x759c08
// 005dcb37  64a100000000         mov eax, dword ptr fs:[0]
// 005dcb3d  50                   push eax
// 005dcb3e  64892500000000       mov dword ptr fs:[0], esp
// 005dcb45  83ec08               sub esp, 8
// 005dcb48  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dcb4c  56                   push esi
// 005dcb4d  57                   push edi
// 005dcb4e  8bf1                 mov esi, ecx
// 005dcb50  89742408             mov dword ptr [esp + 8], esi
// 005dcb54  50                   push eax
// 005dcb55  51                   push ecx
// 005dcb56  8bc4                 mov eax, esp
// 005dcb58  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dcb60  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dcb68  89642414             mov dword ptr [esp + 0x14], esp
// 005dcb6c  c70000000000         mov dword ptr [eax], 0
// 005dcb72  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dcb76  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dcb7a  51                   push ecx
// 005dcb7b  52                   push edx
// 005dcb7c  c644242801           mov byte ptr [esp + 0x28], 1
// 005dcb81  e89afaffff           call 0x5dc620
// 005dcb86  50                   push eax
// 005dcb87  8bce                 mov ecx, esi
// 005dcb89  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dcb8e  e82d7de6ff           call 0x4448c0
// 005dcb93  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcb97  50                   push eax
// 005dcb98  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dcb9d  e84e150400           call 0x61e0f0
// 005dcba2  6a18                 push 0x18
// 005dcba4  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005dcbaa  e859150400           call 0x61e108
// 005dcbaf  83c408               add esp, 8
// 005dcbb2  85c0                 test eax, eax
// 005dcbb4  741e                 je 0x5dcbd4
// 005dcbb6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dcbba  33c9                 xor ecx, ecx
// 005dcbbc  33d2                 xor edx, edx
// 005dcbbe  897808               mov dword ptr [eax + 8], edi
// 005dcbc1  c700b0cc7b00         mov dword ptr [eax], 0x7bccb0
// 005dcbc7  897004               mov dword ptr [eax + 4], esi
// 005dcbca  894810               mov dword ptr [eax + 0x10], ecx
// 005dcbcd  895014               mov dword ptr [eax + 0x14], edx
// 005dcbd0  8bf8                 mov edi, eax
// 005dcbd2  eb02                 jmp 0x5dcbd6
// 005dcbd4  33ff                 xor edi, edi
// 005dcbd6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dcbd9  3bf8                 cmp edi, eax
// 005dcbdb  7409                 je 0x5dcbe6
// 005dcbdd  50                   push eax
// 005dcbde  e80d150400           call 0x61e0f0
// 005dcbe3  83c404               add esp, 4
// 005dcbe6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dcbea  897e18               mov dword ptr [esi + 0x18], edi
// 005dcbed  5f                   pop edi
// 005dcbee  8bc6                 mov eax, esi
// 005dcbf0  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcbf7  5e                   pop esi
// 005dcbf8  83c414               add esp, 0x14
// 005dcbfb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
