// roc 2007-03 005dc760  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc760
//
// 005dc760  6aff                 push -1
// 005dc762  68089c7500           push 0x759c08
// 005dc767  64a100000000         mov eax, dword ptr fs:[0]
// 005dc76d  50                   push eax
// 005dc76e  64892500000000       mov dword ptr fs:[0], esp
// 005dc775  83ec08               sub esp, 8
// 005dc778  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dc77c  56                   push esi
// 005dc77d  57                   push edi
// 005dc77e  8bf1                 mov esi, ecx
// 005dc780  89742408             mov dword ptr [esp + 8], esi
// 005dc784  50                   push eax
// 005dc785  51                   push ecx
// 005dc786  8bc4                 mov eax, esp
// 005dc788  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dc790  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dc798  89642414             mov dword ptr [esp + 0x14], esp
// 005dc79c  c70000000000         mov dword ptr [eax], 0
// 005dc7a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dc7a6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc7aa  51                   push ecx
// 005dc7ab  52                   push edx
// 005dc7ac  c644242801           mov byte ptr [esp + 0x28], 1
// 005dc7b1  e8caf9ffff           call 0x5dc180
// 005dc7b6  50                   push eax
// 005dc7b7  8bce                 mov ecx, esi
// 005dc7b9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dc7be  e82d71f9ff           call 0x5738f0
// 005dc7c3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc7c7  50                   push eax
// 005dc7c8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dc7cd  e81e190400           call 0x61e0f0
// 005dc7d2  6a18                 push 0x18
// 005dc7d4  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005dc7da  e829190400           call 0x61e108
// 005dc7df  83c408               add esp, 8
// 005dc7e2  85c0                 test eax, eax
// 005dc7e4  741e                 je 0x5dc804
// 005dc7e6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dc7ea  33c9                 xor ecx, ecx
// 005dc7ec  33d2                 xor edx, edx
// 005dc7ee  897808               mov dword ptr [eax + 8], edi
// 005dc7f1  c70070cc7b00         mov dword ptr [eax], 0x7bcc70
// 005dc7f7  897004               mov dword ptr [eax + 4], esi
// 005dc7fa  894810               mov dword ptr [eax + 0x10], ecx
// 005dc7fd  895014               mov dword ptr [eax + 0x14], edx
// 005dc800  8bf8                 mov edi, eax
// 005dc802  eb02                 jmp 0x5dc806
// 005dc804  33ff                 xor edi, edi
// 005dc806  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dc809  3bf8                 cmp edi, eax
// 005dc80b  7409                 je 0x5dc816
// 005dc80d  50                   push eax
// 005dc80e  e8dd180400           call 0x61e0f0
// 005dc813  83c404               add esp, 4
// 005dc816  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dc81a  897e18               mov dword ptr [esi + 0x18], edi
// 005dc81d  5f                   pop edi
// 005dc81e  8bc6                 mov eax, esi
// 005dc820  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc827  5e                   pop esi
// 005dc828  83c414               add esp, 0x14
// 005dc82b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
