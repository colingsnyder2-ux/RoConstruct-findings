// roc 2009-06 005d8840  unit: RBX::VTeam::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8840
//
// 005d8840  6aff                 push -1
// 005d8842  6868eb8600           push 0x86eb68
// 005d8847  64a100000000         mov eax, dword ptr fs:[0]
// 005d884d  50                   push eax
// 005d884e  64892500000000       mov dword ptr fs:[0], esp
// 005d8855  83ec08               sub esp, 8
// 005d8858  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d885c  56                   push esi
// 005d885d  57                   push edi
// 005d885e  8bf1                 mov esi, ecx
// 005d8860  89742408             mov dword ptr [esp + 8], esi
// 005d8864  50                   push eax
// 005d8865  51                   push ecx
// 005d8866  8bc4                 mov eax, esp
// 005d8868  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d8870  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d8878  89642414             mov dword ptr [esp + 0x14], esp
// 005d887c  c70000000000         mov dword ptr [eax], 0
// 005d8882  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d8886  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d888a  51                   push ecx
// 005d888b  52                   push edx
// 005d888c  c644242801           mov byte ptr [esp + 0x28], 1
// 005d8891  e85afdffff           call 0x5d85f0
// 005d8896  50                   push eax
// 005d8897  8bce                 mov ecx, esi
// 005d8899  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d889e  e89d0ee3ff           call 0x409740
// 005d88a3  6a00                 push 0
// 005d88a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005d88aa  e883011400           call 0x718a32
// 005d88af  6a18                 push 0x18
// 005d88b1  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 005d88b7  e87c011400           call 0x718a38
// 005d88bc  83c408               add esp, 8
// 005d88bf  85c0                 test eax, eax
// 005d88c1  741e                 je 0x5d88e1
// 005d88c3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005d88c7  33c9                 xor ecx, ecx
// 005d88c9  33d2                 xor edx, edx
// 005d88cb  897808               mov dword ptr [eax + 8], edi
// 005d88ce  c70070558d00         mov dword ptr [eax], 0x8d5570
// 005d88d4  897004               mov dword ptr [eax + 4], esi
// 005d88d7  894810               mov dword ptr [eax + 0x10], ecx
// 005d88da  895014               mov dword ptr [eax + 0x14], edx
// 005d88dd  8bf8                 mov edi, eax
// 005d88df  eb02                 jmp 0x5d88e3
// 005d88e1  33ff                 xor edi, edi
// 005d88e3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d88e6  3bf8                 cmp edi, eax
// 005d88e8  7409                 je 0x5d88f3
// 005d88ea  50                   push eax
// 005d88eb  e842011400           call 0x718a32
// 005d88f0  83c404               add esp, 4
// 005d88f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d88f7  897e18               mov dword ptr [esi + 0x18], edi
// 005d88fa  5f                   pop edi
// 005d88fb  8bc6                 mov eax, esi
// 005d88fd  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8904  5e                   pop esi
// 005d8905  83c414               add esp, 0x14
// 005d8908  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
