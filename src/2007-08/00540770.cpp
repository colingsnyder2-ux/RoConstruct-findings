// roc 2007-08 00540770  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540770
//
// 00540770  6aff                 push -1
// 00540772  6828b27500           push 0x75b228
// 00540777  64a100000000         mov eax, dword ptr fs:[0]
// 0054077d  50                   push eax
// 0054077e  64892500000000       mov dword ptr fs:[0], esp
// 00540785  83ec08               sub esp, 8
// 00540788  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054078c  56                   push esi
// 0054078d  57                   push edi
// 0054078e  8bf1                 mov esi, ecx
// 00540790  89742408             mov dword ptr [esp + 8], esi
// 00540794  50                   push eax
// 00540795  51                   push ecx
// 00540796  8bc4                 mov eax, esp
// 00540798  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005407a0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005407a8  89642414             mov dword ptr [esp + 0x14], esp
// 005407ac  c70000000000         mov dword ptr [eax], 0
// 005407b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005407b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005407ba  51                   push ecx
// 005407bb  52                   push edx
// 005407bc  c644242801           mov byte ptr [esp + 0x28], 1
// 005407c1  e8ca7eedff           call 0x418690
// 005407c6  50                   push eax
// 005407c7  8bce                 mov ecx, esi
// 005407c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005407ce  e88d25f0ff           call 0x442d60
// 005407d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005407d7  50                   push eax
// 005407d8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005407dd  e880f40e00           call 0x62fc62
// 005407e2  6a18                 push 0x18
// 005407e4  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 005407ea  e807f70e00           call 0x62fef6
// 005407ef  83c408               add esp, 8
// 005407f2  85c0                 test eax, eax
// 005407f4  741e                 je 0x540814
// 005407f6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005407fa  33c9                 xor ecx, ecx
// 005407fc  33d2                 xor edx, edx
// 005407fe  897808               mov dword ptr [eax + 8], edi
// 00540801  c70078647a00         mov dword ptr [eax], 0x7a6478
// 00540807  897004               mov dword ptr [eax + 4], esi
// 0054080a  894810               mov dword ptr [eax + 0x10], ecx
// 0054080d  895014               mov dword ptr [eax + 0x14], edx
// 00540810  8bf8                 mov edi, eax
// 00540812  eb02                 jmp 0x540816
// 00540814  33ff                 xor edi, edi
// 00540816  8b4618               mov eax, dword ptr [esi + 0x18]
// 00540819  3bf8                 cmp edi, eax
// 0054081b  7409                 je 0x540826
// 0054081d  50                   push eax
// 0054081e  e83ff40e00           call 0x62fc62
// 00540823  83c404               add esp, 4
// 00540826  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054082a  897e18               mov dword ptr [esi + 0x18], edi
// 0054082d  5f                   pop edi
// 0054082e  8bc6                 mov eax, esi
// 00540830  64890d00000000       mov dword ptr fs:[0], ecx
// 00540837  5e                   pop esi
// 00540838  83c414               add esp, 0x14
// 0054083b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
