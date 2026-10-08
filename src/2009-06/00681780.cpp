// roc 2009-06 00681780  unit: RBX::VSky::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00681780
//
// 00681780  6aff                 push -1
// 00681782  6868eb8600           push 0x86eb68
// 00681787  64a100000000         mov eax, dword ptr fs:[0]
// 0068178d  50                   push eax
// 0068178e  64892500000000       mov dword ptr fs:[0], esp
// 00681795  83ec08               sub esp, 8
// 00681798  8b442424             mov eax, dword ptr [esp + 0x24]
// 0068179c  56                   push esi
// 0068179d  57                   push edi
// 0068179e  8bf1                 mov esi, ecx
// 006817a0  89742408             mov dword ptr [esp + 8], esi
// 006817a4  50                   push eax
// 006817a5  51                   push ecx
// 006817a6  8bc4                 mov eax, esp
// 006817a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006817b0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006817b8  89642414             mov dword ptr [esp + 0x14], esp
// 006817bc  c70000000000         mov dword ptr [eax], 0
// 006817c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006817c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006817ca  51                   push ecx
// 006817cb  52                   push edx
// 006817cc  c644242801           mov byte ptr [esp + 0x28], 1
// 006817d1  e8caa7f6ff           call 0x5ebfa0
// 006817d6  50                   push eax
// 006817d7  8bce                 mov ecx, esi
// 006817d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006817de  e8ed33faff           call 0x624bd0
// 006817e3  6a00                 push 0
// 006817e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006817ea  e843720900           call 0x718a32
// 006817ef  6a18                 push 0x18
// 006817f1  c70618408e00         mov dword ptr [esi], 0x8e4018
// 006817f7  e83c720900           call 0x718a38
// 006817fc  83c408               add esp, 8
// 006817ff  85c0                 test eax, eax
// 00681801  741e                 je 0x681821
// 00681803  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00681807  33c9                 xor ecx, ecx
// 00681809  33d2                 xor edx, edx
// 0068180b  897808               mov dword ptr [eax + 8], edi
// 0068180e  c700cc5c8e00         mov dword ptr [eax], 0x8e5ccc
// 00681814  897004               mov dword ptr [eax + 4], esi
// 00681817  894810               mov dword ptr [eax + 0x10], ecx
// 0068181a  895014               mov dword ptr [eax + 0x14], edx
// 0068181d  8bf8                 mov edi, eax
// 0068181f  eb02                 jmp 0x681823
// 00681821  33ff                 xor edi, edi
// 00681823  8b4618               mov eax, dword ptr [esi + 0x18]
// 00681826  3bf8                 cmp edi, eax
// 00681828  7409                 je 0x681833
// 0068182a  50                   push eax
// 0068182b  e802720900           call 0x718a32
// 00681830  83c404               add esp, 4
// 00681833  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00681837  897e18               mov dword ptr [esi + 0x18], edi
// 0068183a  5f                   pop edi
// 0068183b  8bc6                 mov eax, esi
// 0068183d  64890d00000000       mov dword ptr fs:[0], ecx
// 00681844  5e                   pop esi
// 00681845  83c414               add esp, 0x14
// 00681848  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
