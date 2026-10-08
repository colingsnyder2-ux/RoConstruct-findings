// roc 2007-08 005e88b0  unit: RBX::VExplosion::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e88b0
//
// 005e88b0  6aff                 push -1
// 005e88b2  6828b27500           push 0x75b228
// 005e88b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e88bd  50                   push eax
// 005e88be  64892500000000       mov dword ptr fs:[0], esp
// 005e88c5  83ec08               sub esp, 8
// 005e88c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e88cc  56                   push esi
// 005e88cd  57                   push edi
// 005e88ce  8bf1                 mov esi, ecx
// 005e88d0  89742408             mov dword ptr [esp + 8], esi
// 005e88d4  50                   push eax
// 005e88d5  51                   push ecx
// 005e88d6  8bc4                 mov eax, esp
// 005e88d8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e88e0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e88e8  89642414             mov dword ptr [esp + 0x14], esp
// 005e88ec  c70000000000         mov dword ptr [eax], 0
// 005e88f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e88f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e88fa  51                   push ecx
// 005e88fb  52                   push edx
// 005e88fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005e8901  e87a57faff           call 0x58e080
// 005e8906  50                   push eax
// 005e8907  8bce                 mov ecx, esi
// 005e8909  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e890e  e8adc6f8ff           call 0x574fc0
// 005e8913  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e8917  50                   push eax
// 005e8918  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e891d  e840730400           call 0x62fc62
// 005e8922  6a18                 push 0x18
// 005e8924  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005e892a  e8c7750400           call 0x62fef6
// 005e892f  83c408               add esp, 8
// 005e8932  85c0                 test eax, eax
// 005e8934  741e                 je 0x5e8954
// 005e8936  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e893a  33c9                 xor ecx, ecx
// 005e893c  33d2                 xor edx, edx
// 005e893e  897808               mov dword ptr [eax + 8], edi
// 005e8941  c70058d97b00         mov dword ptr [eax], 0x7bd958
// 005e8947  897004               mov dword ptr [eax + 4], esi
// 005e894a  894810               mov dword ptr [eax + 0x10], ecx
// 005e894d  895014               mov dword ptr [eax + 0x14], edx
// 005e8950  8bf8                 mov edi, eax
// 005e8952  eb02                 jmp 0x5e8956
// 005e8954  33ff                 xor edi, edi
// 005e8956  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e8959  3bf8                 cmp edi, eax
// 005e895b  7409                 je 0x5e8966
// 005e895d  50                   push eax
// 005e895e  e8ff720400           call 0x62fc62
// 005e8963  83c404               add esp, 4
// 005e8966  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e896a  897e18               mov dword ptr [esi + 0x18], edi
// 005e896d  5f                   pop edi
// 005e896e  8bc6                 mov eax, esi
// 005e8970  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8977  5e                   pop esi
// 005e8978  83c414               add esp, 0x14
// 005e897b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
