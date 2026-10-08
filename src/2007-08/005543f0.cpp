// roc 2007-08 005543f0  unit: RBX::VTeam::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005543f0
//
// 005543f0  6aff                 push -1
// 005543f2  6828b27500           push 0x75b228
// 005543f7  64a100000000         mov eax, dword ptr fs:[0]
// 005543fd  50                   push eax
// 005543fe  64892500000000       mov dword ptr fs:[0], esp
// 00554405  83ec08               sub esp, 8
// 00554408  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055440c  56                   push esi
// 0055440d  57                   push edi
// 0055440e  8bf1                 mov esi, ecx
// 00554410  89742408             mov dword ptr [esp + 8], esi
// 00554414  50                   push eax
// 00554415  51                   push ecx
// 00554416  8bc4                 mov eax, esp
// 00554418  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00554420  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00554428  89642414             mov dword ptr [esp + 0x14], esp
// 0055442c  c70000000000         mov dword ptr [eax], 0
// 00554432  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00554436  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055443a  51                   push ecx
// 0055443b  52                   push edx
// 0055443c  c644242801           mov byte ptr [esp + 0x28], 1
// 00554441  e85afdffff           call 0x5541a0
// 00554446  50                   push eax
// 00554447  8bce                 mov ecx, esi
// 00554449  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0055444e  e80de9eeff           call 0x442d60
// 00554453  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00554457  50                   push eax
// 00554458  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0055445d  e800b80d00           call 0x62fc62
// 00554462  6a18                 push 0x18
// 00554464  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 0055446a  e887ba0d00           call 0x62fef6
// 0055446f  83c408               add esp, 8
// 00554472  85c0                 test eax, eax
// 00554474  741e                 je 0x554494
// 00554476  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0055447a  33c9                 xor ecx, ecx
// 0055447c  33d2                 xor edx, edx
// 0055447e  897808               mov dword ptr [eax + 8], edi
// 00554481  c700dc7f7a00         mov dword ptr [eax], 0x7a7fdc
// 00554487  897004               mov dword ptr [eax + 4], esi
// 0055448a  894810               mov dword ptr [eax + 0x10], ecx
// 0055448d  895014               mov dword ptr [eax + 0x14], edx
// 00554490  8bf8                 mov edi, eax
// 00554492  eb02                 jmp 0x554496
// 00554494  33ff                 xor edi, edi
// 00554496  8b4618               mov eax, dword ptr [esi + 0x18]
// 00554499  3bf8                 cmp edi, eax
// 0055449b  7409                 je 0x5544a6
// 0055449d  50                   push eax
// 0055449e  e8bfb70d00           call 0x62fc62
// 005544a3  83c404               add esp, 4
// 005544a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005544aa  897e18               mov dword ptr [esi + 0x18], edi
// 005544ad  5f                   pop edi
// 005544ae  8bc6                 mov eax, esi
// 005544b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005544b7  5e                   pop esi
// 005544b8  83c414               add esp, 0x14
// 005544bb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
