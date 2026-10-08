// roc 2009-06 00693880  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693880
//
// 00693880  6aff                 push -1
// 00693882  6868eb8600           push 0x86eb68
// 00693887  64a100000000         mov eax, dword ptr fs:[0]
// 0069388d  50                   push eax
// 0069388e  64892500000000       mov dword ptr fs:[0], esp
// 00693895  83ec08               sub esp, 8
// 00693898  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069389c  56                   push esi
// 0069389d  57                   push edi
// 0069389e  8bf1                 mov esi, ecx
// 006938a0  89742408             mov dword ptr [esp + 8], esi
// 006938a4  50                   push eax
// 006938a5  51                   push ecx
// 006938a6  8bc4                 mov eax, esp
// 006938a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006938b0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006938b8  89642414             mov dword ptr [esp + 0x14], esp
// 006938bc  c70000000000         mov dword ptr [eax], 0
// 006938c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006938c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006938ca  51                   push ecx
// 006938cb  52                   push edx
// 006938cc  c644242801           mov byte ptr [esp + 0x28], 1
// 006938d1  e86a82f5ff           call 0x5ebb40
// 006938d6  50                   push eax
// 006938d7  8bce                 mov ecx, esi
// 006938d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006938de  e86d3bf9ff           call 0x627450
// 006938e3  6a00                 push 0
// 006938e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006938ea  e843510800           call 0x718a32
// 006938ef  6a18                 push 0x18
// 006938f1  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 006938f7  e83c510800           call 0x718a38
// 006938fc  83c408               add esp, 8
// 006938ff  85c0                 test eax, eax
// 00693901  741e                 je 0x693921
// 00693903  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693907  33c9                 xor ecx, ecx
// 00693909  33d2                 xor edx, edx
// 0069390b  897808               mov dword ptr [eax + 8], edi
// 0069390e  c70028708e00         mov dword ptr [eax], 0x8e7028
// 00693914  897004               mov dword ptr [eax + 4], esi
// 00693917  894810               mov dword ptr [eax + 0x10], ecx
// 0069391a  895014               mov dword ptr [eax + 0x14], edx
// 0069391d  8bf8                 mov edi, eax
// 0069391f  eb02                 jmp 0x693923
// 00693921  33ff                 xor edi, edi
// 00693923  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693926  3bf8                 cmp edi, eax
// 00693928  7409                 je 0x693933
// 0069392a  50                   push eax
// 0069392b  e802510800           call 0x718a32
// 00693930  83c404               add esp, 4
// 00693933  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693937  897e18               mov dword ptr [esi + 0x18], edi
// 0069393a  5f                   pop edi
// 0069393b  8bc6                 mov eax, esi
// 0069393d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693944  5e                   pop esi
// 00693945  83c414               add esp, 0x14
// 00693948  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
