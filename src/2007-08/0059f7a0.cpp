// roc 2007-08 0059f7a0  unit: RBX::VGameSettings::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f7a0
//
// 0059f7a0  6aff                 push -1
// 0059f7a2  6828b27500           push 0x75b228
// 0059f7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0059f7ad  50                   push eax
// 0059f7ae  64892500000000       mov dword ptr fs:[0], esp
// 0059f7b5  83ec08               sub esp, 8
// 0059f7b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f7bc  56                   push esi
// 0059f7bd  57                   push edi
// 0059f7be  8bf1                 mov esi, ecx
// 0059f7c0  89742408             mov dword ptr [esp + 8], esi
// 0059f7c4  50                   push eax
// 0059f7c5  51                   push ecx
// 0059f7c6  8bc4                 mov eax, esp
// 0059f7c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059f7d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059f7d8  89642414             mov dword ptr [esp + 0x14], esp
// 0059f7dc  c70000000000         mov dword ptr [eax], 0
// 0059f7e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059f7e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059f7ea  51                   push ecx
// 0059f7eb  52                   push edx
// 0059f7ec  c644242801           mov byte ptr [esp + 0x28], 1
// 0059f7f1  e86ae9feff           call 0x58e160
// 0059f7f6  50                   push eax
// 0059f7f7  8bce                 mov ecx, esi
// 0059f7f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059f7fe  e85d35eaff           call 0x442d60
// 0059f803  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f807  50                   push eax
// 0059f808  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059f80d  e850040900           call 0x62fc62
// 0059f812  6a18                 push 0x18
// 0059f814  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 0059f81a  e8d7060900           call 0x62fef6
// 0059f81f  83c408               add esp, 8
// 0059f822  85c0                 test eax, eax
// 0059f824  741e                 je 0x59f844
// 0059f826  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0059f82a  33c9                 xor ecx, ecx
// 0059f82c  33d2                 xor edx, edx
// 0059f82e  897808               mov dword ptr [eax + 8], edi
// 0059f831  c700f4307b00         mov dword ptr [eax], 0x7b30f4
// 0059f837  897004               mov dword ptr [eax + 4], esi
// 0059f83a  894810               mov dword ptr [eax + 0x10], ecx
// 0059f83d  895014               mov dword ptr [eax + 0x14], edx
// 0059f840  8bf8                 mov edi, eax
// 0059f842  eb02                 jmp 0x59f846
// 0059f844  33ff                 xor edi, edi
// 0059f846  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059f849  3bf8                 cmp edi, eax
// 0059f84b  7409                 je 0x59f856
// 0059f84d  50                   push eax
// 0059f84e  e80f040900           call 0x62fc62
// 0059f853  83c404               add esp, 4
// 0059f856  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059f85a  897e18               mov dword ptr [esi + 0x18], edi
// 0059f85d  5f                   pop edi
// 0059f85e  8bc6                 mov eax, esi
// 0059f860  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f867  5e                   pop esi
// 0059f868  83c414               add esp, 0x14
// 0059f86b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
