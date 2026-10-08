// roc 2009-06 004d5370  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d5370
//
// 004d5370  6aff                 push -1
// 004d5372  6868eb8600           push 0x86eb68
// 004d5377  64a100000000         mov eax, dword ptr fs:[0]
// 004d537d  50                   push eax
// 004d537e  64892500000000       mov dword ptr fs:[0], esp
// 004d5385  83ec08               sub esp, 8
// 004d5388  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d538c  56                   push esi
// 004d538d  57                   push edi
// 004d538e  8bf1                 mov esi, ecx
// 004d5390  89742408             mov dword ptr [esp + 8], esi
// 004d5394  50                   push eax
// 004d5395  51                   push ecx
// 004d5396  8bc4                 mov eax, esp
// 004d5398  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d53a0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d53a8  89642414             mov dword ptr [esp + 0x14], esp
// 004d53ac  c70000000000         mov dword ptr [eax], 0
// 004d53b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d53b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d53ba  51                   push ecx
// 004d53bb  52                   push edx
// 004d53bc  c644242801           mov byte ptr [esp + 0x28], 1
// 004d53c1  e82aa9ffff           call 0x4cfcf0
// 004d53c6  50                   push eax
// 004d53c7  8bce                 mov ecx, esi
// 004d53c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004d53ce  e82dadf6ff           call 0x440100
// 004d53d3  6a00                 push 0
// 004d53d5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d53da  e853362400           call 0x718a32
// 004d53df  6a18                 push 0x18
// 004d53e1  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 004d53e7  e84c362400           call 0x718a38
// 004d53ec  83c408               add esp, 8
// 004d53ef  85c0                 test eax, eax
// 004d53f1  741e                 je 0x4d5411
// 004d53f3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d53f7  33c9                 xor ecx, ecx
// 004d53f9  33d2                 xor edx, edx
// 004d53fb  897808               mov dword ptr [eax + 8], edi
// 004d53fe  c700245a8c00         mov dword ptr [eax], 0x8c5a24
// 004d5404  897004               mov dword ptr [eax + 4], esi
// 004d5407  894810               mov dword ptr [eax + 0x10], ecx
// 004d540a  895014               mov dword ptr [eax + 0x14], edx
// 004d540d  8bf8                 mov edi, eax
// 004d540f  eb02                 jmp 0x4d5413
// 004d5411  33ff                 xor edi, edi
// 004d5413  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d5416  3bf8                 cmp edi, eax
// 004d5418  7409                 je 0x4d5423
// 004d541a  50                   push eax
// 004d541b  e812362400           call 0x718a32
// 004d5420  83c404               add esp, 4
// 004d5423  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5427  897e18               mov dword ptr [esi + 0x18], edi
// 004d542a  5f                   pop edi
// 004d542b  8bc6                 mov eax, esi
// 004d542d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d5434  5e                   pop esi
// 004d5435  83c414               add esp, 0x14
// 004d5438  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
