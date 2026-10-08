// roc 2007-08 005b6050  unit: RBX::VSky::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6050
//
// 005b6050  6aff                 push -1
// 005b6052  6828b27500           push 0x75b228
// 005b6057  64a100000000         mov eax, dword ptr fs:[0]
// 005b605d  50                   push eax
// 005b605e  64892500000000       mov dword ptr fs:[0], esp
// 005b6065  83ec08               sub esp, 8
// 005b6068  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b606c  56                   push esi
// 005b606d  57                   push edi
// 005b606e  8bf1                 mov esi, ecx
// 005b6070  89742408             mov dword ptr [esp + 8], esi
// 005b6074  50                   push eax
// 005b6075  51                   push ecx
// 005b6076  8bc4                 mov eax, esp
// 005b6078  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b6080  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005b6088  89642414             mov dword ptr [esp + 0x14], esp
// 005b608c  c70000000000         mov dword ptr [eax], 0
// 005b6092  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b6096  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b609a  51                   push ecx
// 005b609b  52                   push edx
// 005b609c  c644242801           mov byte ptr [esp + 0x28], 1
// 005b60a1  e83affffff           call 0x5b5fe0
// 005b60a6  50                   push eax
// 005b60a7  8bce                 mov ecx, esi
// 005b60a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005b60ae  e86dc6fbff           call 0x572720
// 005b60b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b60b7  50                   push eax
// 005b60b8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005b60bd  e8a09b0700           call 0x62fc62
// 005b60c2  6a18                 push 0x18
// 005b60c4  c706f8417b00         mov dword ptr [esi], 0x7b41f8
// 005b60ca  e8279e0700           call 0x62fef6
// 005b60cf  83c408               add esp, 8
// 005b60d2  85c0                 test eax, eax
// 005b60d4  741e                 je 0x5b60f4
// 005b60d6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005b60da  33c9                 xor ecx, ecx
// 005b60dc  33d2                 xor edx, edx
// 005b60de  897808               mov dword ptr [eax + 8], edi
// 005b60e1  c70054807b00         mov dword ptr [eax], 0x7b8054
// 005b60e7  897004               mov dword ptr [eax + 4], esi
// 005b60ea  894810               mov dword ptr [eax + 0x10], ecx
// 005b60ed  895014               mov dword ptr [eax + 0x14], edx
// 005b60f0  8bf8                 mov edi, eax
// 005b60f2  eb02                 jmp 0x5b60f6
// 005b60f4  33ff                 xor edi, edi
// 005b60f6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b60f9  3bf8                 cmp edi, eax
// 005b60fb  7409                 je 0x5b6106
// 005b60fd  50                   push eax
// 005b60fe  e85f9b0700           call 0x62fc62
// 005b6103  83c404               add esp, 4
// 005b6106  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b610a  897e18               mov dword ptr [esi + 0x18], edi
// 005b610d  5f                   pop edi
// 005b610e  8bc6                 mov eax, esi
// 005b6110  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6117  5e                   pop esi
// 005b6118  83c414               add esp, 0x14
// 005b611b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
