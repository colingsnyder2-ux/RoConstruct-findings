// roc 2007-03 005dca60  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dca60
//
// 005dca60  6aff                 push -1
// 005dca62  68089c7500           push 0x759c08
// 005dca67  64a100000000         mov eax, dword ptr fs:[0]
// 005dca6d  50                   push eax
// 005dca6e  64892500000000       mov dword ptr fs:[0], esp
// 005dca75  83ec08               sub esp, 8
// 005dca78  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dca7c  56                   push esi
// 005dca7d  57                   push edi
// 005dca7e  8bf1                 mov esi, ecx
// 005dca80  89742408             mov dword ptr [esp + 8], esi
// 005dca84  50                   push eax
// 005dca85  51                   push ecx
// 005dca86  8bc4                 mov eax, esp
// 005dca88  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dca90  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dca98  89642414             mov dword ptr [esp + 0x14], esp
// 005dca9c  c70000000000         mov dword ptr [eax], 0
// 005dcaa2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dcaa6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dcaaa  51                   push ecx
// 005dcaab  52                   push edx
// 005dcaac  c644242801           mov byte ptr [esp + 0x28], 1
// 005dcab1  e8fafaffff           call 0x5dc5b0
// 005dcab6  50                   push eax
// 005dcab7  8bce                 mov ecx, esi
// 005dcab9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dcabe  e82d6ef9ff           call 0x5738f0
// 005dcac3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcac7  50                   push eax
// 005dcac8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dcacd  e81e160400           call 0x61e0f0
// 005dcad2  6a18                 push 0x18
// 005dcad4  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005dcada  e829160400           call 0x61e108
// 005dcadf  83c408               add esp, 8
// 005dcae2  85c0                 test eax, eax
// 005dcae4  741e                 je 0x5dcb04
// 005dcae6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dcaea  33c9                 xor ecx, ecx
// 005dcaec  33d2                 xor edx, edx
// 005dcaee  897808               mov dword ptr [eax + 8], edi
// 005dcaf1  c700a0cc7b00         mov dword ptr [eax], 0x7bcca0
// 005dcaf7  897004               mov dword ptr [eax + 4], esi
// 005dcafa  894810               mov dword ptr [eax + 0x10], ecx
// 005dcafd  895014               mov dword ptr [eax + 0x14], edx
// 005dcb00  8bf8                 mov edi, eax
// 005dcb02  eb02                 jmp 0x5dcb06
// 005dcb04  33ff                 xor edi, edi
// 005dcb06  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dcb09  3bf8                 cmp edi, eax
// 005dcb0b  7409                 je 0x5dcb16
// 005dcb0d  50                   push eax
// 005dcb0e  e8dd150400           call 0x61e0f0
// 005dcb13  83c404               add esp, 4
// 005dcb16  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dcb1a  897e18               mov dword ptr [esi + 0x18], edi
// 005dcb1d  5f                   pop edi
// 005dcb1e  8bc6                 mov eax, esi
// 005dcb20  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcb27  5e                   pop esi
// 005dcb28  83c414               add esp, 0x14
// 005dcb2b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
