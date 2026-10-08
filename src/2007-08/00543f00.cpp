// roc 2007-08 00543f00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543f00
//
// 00543f00  6aff                 push -1
// 00543f02  6828b27500           push 0x75b228
// 00543f07  64a100000000         mov eax, dword ptr fs:[0]
// 00543f0d  50                   push eax
// 00543f0e  64892500000000       mov dword ptr fs:[0], esp
// 00543f15  83ec08               sub esp, 8
// 00543f18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543f1c  56                   push esi
// 00543f1d  57                   push edi
// 00543f1e  8bf1                 mov esi, ecx
// 00543f20  89742408             mov dword ptr [esp + 8], esi
// 00543f24  50                   push eax
// 00543f25  51                   push ecx
// 00543f26  8bc4                 mov eax, esp
// 00543f28  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00543f30  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00543f38  89642414             mov dword ptr [esp + 0x14], esp
// 00543f3c  c70000000000         mov dword ptr [eax], 0
// 00543f42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00543f46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543f4a  51                   push ecx
// 00543f4b  52                   push edx
// 00543f4c  c644242801           mov byte ptr [esp + 0x28], 1
// 00543f51  e82afdffff           call 0x543c80
// 00543f56  50                   push eax
// 00543f57  8bce                 mov ecx, esi
// 00543f59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00543f5e  e8fdedefff           call 0x442d60
// 00543f63  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00543f67  50                   push eax
// 00543f68  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00543f6d  e8f0bc0e00           call 0x62fc62
// 00543f72  6a18                 push 0x18
// 00543f74  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 00543f7a  e877bf0e00           call 0x62fef6
// 00543f7f  83c408               add esp, 8
// 00543f82  85c0                 test eax, eax
// 00543f84  741e                 je 0x543fa4
// 00543f86  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00543f8a  33c9                 xor ecx, ecx
// 00543f8c  33d2                 xor edx, edx
// 00543f8e  897808               mov dword ptr [eax + 8], edi
// 00543f91  c700dc677a00         mov dword ptr [eax], 0x7a67dc
// 00543f97  897004               mov dword ptr [eax + 4], esi
// 00543f9a  894810               mov dword ptr [eax + 0x10], ecx
// 00543f9d  895014               mov dword ptr [eax + 0x14], edx
// 00543fa0  8bf8                 mov edi, eax
// 00543fa2  eb02                 jmp 0x543fa6
// 00543fa4  33ff                 xor edi, edi
// 00543fa6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00543fa9  3bf8                 cmp edi, eax
// 00543fab  7409                 je 0x543fb6
// 00543fad  50                   push eax
// 00543fae  e8afbc0e00           call 0x62fc62
// 00543fb3  83c404               add esp, 4
// 00543fb6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00543fba  897e18               mov dword ptr [esi + 0x18], edi
// 00543fbd  5f                   pop edi
// 00543fbe  8bc6                 mov eax, esi
// 00543fc0  64890d00000000       mov dword ptr fs:[0], ecx
// 00543fc7  5e                   pop esi
// 00543fc8  83c414               add esp, 0x14
// 00543fcb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
