// roc 2009-06 004d52a0  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d52a0
//
// 004d52a0  6aff                 push -1
// 004d52a2  6868eb8600           push 0x86eb68
// 004d52a7  64a100000000         mov eax, dword ptr fs:[0]
// 004d52ad  50                   push eax
// 004d52ae  64892500000000       mov dword ptr fs:[0], esp
// 004d52b5  83ec08               sub esp, 8
// 004d52b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d52bc  56                   push esi
// 004d52bd  57                   push edi
// 004d52be  8bf1                 mov esi, ecx
// 004d52c0  89742408             mov dword ptr [esp + 8], esi
// 004d52c4  50                   push eax
// 004d52c5  51                   push ecx
// 004d52c6  8bc4                 mov eax, esp
// 004d52c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d52d0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d52d8  89642414             mov dword ptr [esp + 0x14], esp
// 004d52dc  c70000000000         mov dword ptr [eax], 0
// 004d52e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d52e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d52ea  51                   push ecx
// 004d52eb  52                   push edx
// 004d52ec  c644242801           mov byte ptr [esp + 0x28], 1
// 004d52f1  e8faa9ffff           call 0x4cfcf0
// 004d52f6  50                   push eax
// 004d52f7  8bce                 mov ecx, esi
// 004d52f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004d52fe  e8ed89f6ff           call 0x43dcf0
// 004d5303  6a00                 push 0
// 004d5305  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d530a  e823372400           call 0x718a32
// 004d530f  6a18                 push 0x18
// 004d5311  c7063c5f8b00         mov dword ptr [esi], 0x8b5f3c
// 004d5317  e81c372400           call 0x718a38
// 004d531c  83c408               add esp, 8
// 004d531f  85c0                 test eax, eax
// 004d5321  741e                 je 0x4d5341
// 004d5323  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d5327  33c9                 xor ecx, ecx
// 004d5329  33d2                 xor edx, edx
// 004d532b  897808               mov dword ptr [eax + 8], edi
// 004d532e  c700105a8c00         mov dword ptr [eax], 0x8c5a10
// 004d5334  897004               mov dword ptr [eax + 4], esi
// 004d5337  894810               mov dword ptr [eax + 0x10], ecx
// 004d533a  895014               mov dword ptr [eax + 0x14], edx
// 004d533d  8bf8                 mov edi, eax
// 004d533f  eb02                 jmp 0x4d5343
// 004d5341  33ff                 xor edi, edi
// 004d5343  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d5346  3bf8                 cmp edi, eax
// 004d5348  7409                 je 0x4d5353
// 004d534a  50                   push eax
// 004d534b  e8e2362400           call 0x718a32
// 004d5350  83c404               add esp, 4
// 004d5353  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5357  897e18               mov dword ptr [esi + 0x18], edi
// 004d535a  5f                   pop edi
// 004d535b  8bc6                 mov eax, esi
// 004d535d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d5364  5e                   pop esi
// 004d5365  83c414               add esp, 0x14
// 004d5368  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
