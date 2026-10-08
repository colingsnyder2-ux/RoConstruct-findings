// roc 2009-06 0064e580  unit: RBX::VExplosion::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064e580
//
// 0064e580  6aff                 push -1
// 0064e582  6868eb8600           push 0x86eb68
// 0064e587  64a100000000         mov eax, dword ptr fs:[0]
// 0064e58d  50                   push eax
// 0064e58e  64892500000000       mov dword ptr fs:[0], esp
// 0064e595  83ec08               sub esp, 8
// 0064e598  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e59c  56                   push esi
// 0064e59d  57                   push edi
// 0064e59e  8bf1                 mov esi, ecx
// 0064e5a0  89742408             mov dword ptr [esp + 8], esi
// 0064e5a4  50                   push eax
// 0064e5a5  51                   push ecx
// 0064e5a6  8bc4                 mov eax, esp
// 0064e5a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0064e5b0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064e5b8  89642414             mov dword ptr [esp + 0x14], esp
// 0064e5bc  c70000000000         mov dword ptr [eax], 0
// 0064e5c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064e5c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064e5ca  51                   push ecx
// 0064e5cb  52                   push edx
// 0064e5cc  c644242801           mov byte ptr [esp + 0x28], 1
// 0064e5d1  e80acaf9ff           call 0x5eafe0
// 0064e5d6  50                   push eax
// 0064e5d7  8bce                 mov ecx, esi
// 0064e5d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0064e5de  e86d8efdff           call 0x627450
// 0064e5e3  6a00                 push 0
// 0064e5e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0064e5ea  e843a40c00           call 0x718a32
// 0064e5ef  6a18                 push 0x18
// 0064e5f1  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 0064e5f7  e83ca40c00           call 0x718a38
// 0064e5fc  83c408               add esp, 8
// 0064e5ff  85c0                 test eax, eax
// 0064e601  741e                 je 0x64e621
// 0064e603  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064e607  33c9                 xor ecx, ecx
// 0064e609  33d2                 xor edx, edx
// 0064e60b  897808               mov dword ptr [eax + 8], edi
// 0064e60e  c70018f78d00         mov dword ptr [eax], 0x8df718
// 0064e614  897004               mov dword ptr [eax + 4], esi
// 0064e617  894810               mov dword ptr [eax + 0x10], ecx
// 0064e61a  895014               mov dword ptr [eax + 0x14], edx
// 0064e61d  8bf8                 mov edi, eax
// 0064e61f  eb02                 jmp 0x64e623
// 0064e621  33ff                 xor edi, edi
// 0064e623  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064e626  3bf8                 cmp edi, eax
// 0064e628  7409                 je 0x64e633
// 0064e62a  50                   push eax
// 0064e62b  e802a40c00           call 0x718a32
// 0064e630  83c404               add esp, 4
// 0064e633  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064e637  897e18               mov dword ptr [esi + 0x18], edi
// 0064e63a  5f                   pop edi
// 0064e63b  8bc6                 mov eax, esi
// 0064e63d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e644  5e                   pop esi
// 0064e645  83c414               add esp, 0x14
// 0064e648  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
