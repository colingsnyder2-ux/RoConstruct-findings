// roc 2007-03 005dc830  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc830
//
// 005dc830  6aff                 push -1
// 005dc832  68089c7500           push 0x759c08
// 005dc837  64a100000000         mov eax, dword ptr fs:[0]
// 005dc83d  50                   push eax
// 005dc83e  64892500000000       mov dword ptr fs:[0], esp
// 005dc845  83ec08               sub esp, 8
// 005dc848  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dc84c  56                   push esi
// 005dc84d  57                   push edi
// 005dc84e  8bf1                 mov esi, ecx
// 005dc850  89742408             mov dword ptr [esp + 8], esi
// 005dc854  50                   push eax
// 005dc855  51                   push ecx
// 005dc856  8bc4                 mov eax, esp
// 005dc858  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dc860  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dc868  89642414             mov dword ptr [esp + 0x14], esp
// 005dc86c  c70000000000         mov dword ptr [eax], 0
// 005dc872  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dc876  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc87a  51                   push ecx
// 005dc87b  52                   push edx
// 005dc87c  c644242801           mov byte ptr [esp + 0x28], 1
// 005dc881  e8faf8ffff           call 0x5dc180
// 005dc886  50                   push eax
// 005dc887  8bce                 mov ecx, esi
// 005dc889  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dc88e  e85d83f5ff           call 0x534bf0
// 005dc893  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc897  50                   push eax
// 005dc898  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dc89d  e84e180400           call 0x61e0f0
// 005dc8a2  6a18                 push 0x18
// 005dc8a4  c706b8cf7b00         mov dword ptr [esi], 0x7bcfb8
// 005dc8aa  e859180400           call 0x61e108
// 005dc8af  83c408               add esp, 8
// 005dc8b2  85c0                 test eax, eax
// 005dc8b4  741e                 je 0x5dc8d4
// 005dc8b6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dc8ba  33c9                 xor ecx, ecx
// 005dc8bc  33d2                 xor edx, edx
// 005dc8be  897808               mov dword ptr [eax + 8], edi
// 005dc8c1  c70080cc7b00         mov dword ptr [eax], 0x7bcc80
// 005dc8c7  897004               mov dword ptr [eax + 4], esi
// 005dc8ca  894810               mov dword ptr [eax + 0x10], ecx
// 005dc8cd  895014               mov dword ptr [eax + 0x14], edx
// 005dc8d0  8bf8                 mov edi, eax
// 005dc8d2  eb02                 jmp 0x5dc8d6
// 005dc8d4  33ff                 xor edi, edi
// 005dc8d6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dc8d9  3bf8                 cmp edi, eax
// 005dc8db  7409                 je 0x5dc8e6
// 005dc8dd  50                   push eax
// 005dc8de  e80d180400           call 0x61e0f0
// 005dc8e3  83c404               add esp, 4
// 005dc8e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dc8ea  897e18               mov dword ptr [esi + 0x18], edi
// 005dc8ed  5f                   pop edi
// 005dc8ee  8bc6                 mov eax, esi
// 005dc8f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc8f7  5e                   pop esi
// 005dc8f8  83c414               add esp, 0x14
// 005dc8fb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
