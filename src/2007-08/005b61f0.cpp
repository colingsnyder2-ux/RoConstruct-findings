// roc 2007-08 005b61f0  unit: RBX::VSky::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b61f0
//
// 005b61f0  6aff                 push -1
// 005b61f2  6828b27500           push 0x75b228
// 005b61f7  64a100000000         mov eax, dword ptr fs:[0]
// 005b61fd  50                   push eax
// 005b61fe  64892500000000       mov dword ptr fs:[0], esp
// 005b6205  83ec08               sub esp, 8
// 005b6208  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b620c  56                   push esi
// 005b620d  57                   push edi
// 005b620e  8bf1                 mov esi, ecx
// 005b6210  89742408             mov dword ptr [esp + 8], esi
// 005b6214  50                   push eax
// 005b6215  51                   push ecx
// 005b6216  8bc4                 mov eax, esp
// 005b6218  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b6220  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005b6228  89642414             mov dword ptr [esp + 0x14], esp
// 005b622c  c70000000000         mov dword ptr [eax], 0
// 005b6232  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b6236  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b623a  51                   push ecx
// 005b623b  52                   push edx
// 005b623c  c644242801           mov byte ptr [esp + 0x28], 1
// 005b6241  e89afdffff           call 0x5b5fe0
// 005b6246  50                   push eax
// 005b6247  8bce                 mov ecx, esi
// 005b6249  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005b624e  e80dcbe8ff           call 0x442d60
// 005b6253  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b6257  50                   push eax
// 005b6258  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005b625d  e8009a0700           call 0x62fc62
// 005b6262  6a18                 push 0x18
// 005b6264  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 005b626a  e8879c0700           call 0x62fef6
// 005b626f  83c408               add esp, 8
// 005b6272  85c0                 test eax, eax
// 005b6274  741e                 je 0x5b6294
// 005b6276  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005b627a  33c9                 xor ecx, ecx
// 005b627c  33d2                 xor edx, edx
// 005b627e  897808               mov dword ptr [eax + 8], edi
// 005b6281  c70074807b00         mov dword ptr [eax], 0x7b8074
// 005b6287  897004               mov dword ptr [eax + 4], esi
// 005b628a  894810               mov dword ptr [eax + 0x10], ecx
// 005b628d  895014               mov dword ptr [eax + 0x14], edx
// 005b6290  8bf8                 mov edi, eax
// 005b6292  eb02                 jmp 0x5b6296
// 005b6294  33ff                 xor edi, edi
// 005b6296  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b6299  3bf8                 cmp edi, eax
// 005b629b  7409                 je 0x5b62a6
// 005b629d  50                   push eax
// 005b629e  e8bf990700           call 0x62fc62
// 005b62a3  83c404               add esp, 4
// 005b62a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b62aa  897e18               mov dword ptr [esi + 0x18], edi
// 005b62ad  5f                   pop edi
// 005b62ae  8bc6                 mov eax, esi
// 005b62b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b62b7  5e                   pop esi
// 005b62b8  83c414               add esp, 0x14
// 005b62bb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
