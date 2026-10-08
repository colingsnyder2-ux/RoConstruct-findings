// roc 2009-06 004d5440  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d5440
//
// 004d5440  6aff                 push -1
// 004d5442  6868eb8600           push 0x86eb68
// 004d5447  64a100000000         mov eax, dword ptr fs:[0]
// 004d544d  50                   push eax
// 004d544e  64892500000000       mov dword ptr fs:[0], esp
// 004d5455  83ec08               sub esp, 8
// 004d5458  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d545c  56                   push esi
// 004d545d  57                   push edi
// 004d545e  8bf1                 mov esi, ecx
// 004d5460  89742408             mov dword ptr [esp + 8], esi
// 004d5464  50                   push eax
// 004d5465  51                   push ecx
// 004d5466  8bc4                 mov eax, esp
// 004d5468  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d5470  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d5478  89642414             mov dword ptr [esp + 0x14], esp
// 004d547c  c70000000000         mov dword ptr [eax], 0
// 004d5482  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d5486  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d548a  51                   push ecx
// 004d548b  52                   push edx
// 004d548c  c644242801           mov byte ptr [esp + 0x28], 1
// 004d5491  e85aa8ffff           call 0x4cfcf0
// 004d5496  50                   push eax
// 004d5497  8bce                 mov ecx, esi
// 004d5499  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004d549e  e86dfbffff           call 0x4d5010
// 004d54a3  6a00                 push 0
// 004d54a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d54aa  e883352400           call 0x718a32
// 004d54af  6a18                 push 0x18
// 004d54b1  c706205b8c00         mov dword ptr [esi], 0x8c5b20
// 004d54b7  e87c352400           call 0x718a38
// 004d54bc  83c408               add esp, 8
// 004d54bf  85c0                 test eax, eax
// 004d54c1  741e                 je 0x4d54e1
// 004d54c3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d54c7  33c9                 xor ecx, ecx
// 004d54c9  33d2                 xor edx, edx
// 004d54cb  897808               mov dword ptr [eax + 8], edi
// 004d54ce  c700385a8c00         mov dword ptr [eax], 0x8c5a38
// 004d54d4  897004               mov dword ptr [eax + 4], esi
// 004d54d7  894810               mov dword ptr [eax + 0x10], ecx
// 004d54da  895014               mov dword ptr [eax + 0x14], edx
// 004d54dd  8bf8                 mov edi, eax
// 004d54df  eb02                 jmp 0x4d54e3
// 004d54e1  33ff                 xor edi, edi
// 004d54e3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d54e6  3bf8                 cmp edi, eax
// 004d54e8  7409                 je 0x4d54f3
// 004d54ea  50                   push eax
// 004d54eb  e842352400           call 0x718a32
// 004d54f0  83c404               add esp, 4
// 004d54f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d54f7  897e18               mov dword ptr [esi + 0x18], edi
// 004d54fa  5f                   pop edi
// 004d54fb  8bc6                 mov eax, esi
// 004d54fd  64890d00000000       mov dword ptr fs:[0], ecx
// 004d5504  5e                   pop esi
// 004d5505  83c414               add esp, 0x14
// 004d5508  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
