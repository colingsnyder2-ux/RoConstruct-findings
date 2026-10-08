// roc 2007-08 005ee2d0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee2d0
//
// 005ee2d0  6aff                 push -1
// 005ee2d2  6828b27500           push 0x75b228
// 005ee2d7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee2dd  50                   push eax
// 005ee2de  64892500000000       mov dword ptr fs:[0], esp
// 005ee2e5  83ec08               sub esp, 8
// 005ee2e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee2ec  56                   push esi
// 005ee2ed  57                   push edi
// 005ee2ee  8bf1                 mov esi, ecx
// 005ee2f0  89742408             mov dword ptr [esp + 8], esi
// 005ee2f4  50                   push eax
// 005ee2f5  51                   push ecx
// 005ee2f6  8bc4                 mov eax, esp
// 005ee2f8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee300  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee308  89642414             mov dword ptr [esp + 0x14], esp
// 005ee30c  c70000000000         mov dword ptr [eax], 0
// 005ee312  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee316  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee31a  51                   push ecx
// 005ee31b  52                   push edx
// 005ee31c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee321  e8faf3ffff           call 0x5ed720
// 005ee326  50                   push eax
// 005ee327  8bce                 mov ecx, esi
// 005ee329  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee32e  e88d6cf8ff           call 0x574fc0
// 005ee333  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee337  50                   push eax
// 005ee338  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee33d  e820190400           call 0x62fc62
// 005ee342  6a18                 push 0x18
// 005ee344  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ee34a  e8a71b0400           call 0x62fef6
// 005ee34f  83c408               add esp, 8
// 005ee352  85c0                 test eax, eax
// 005ee354  741e                 je 0x5ee374
// 005ee356  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee35a  33c9                 xor ecx, ecx
// 005ee35c  33d2                 xor edx, edx
// 005ee35e  897808               mov dword ptr [eax + 8], edi
// 005ee361  c70040ec7b00         mov dword ptr [eax], 0x7bec40
// 005ee367  897004               mov dword ptr [eax + 4], esi
// 005ee36a  894810               mov dword ptr [eax + 0x10], ecx
// 005ee36d  895014               mov dword ptr [eax + 0x14], edx
// 005ee370  8bf8                 mov edi, eax
// 005ee372  eb02                 jmp 0x5ee376
// 005ee374  33ff                 xor edi, edi
// 005ee376  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee379  3bf8                 cmp edi, eax
// 005ee37b  7409                 je 0x5ee386
// 005ee37d  50                   push eax
// 005ee37e  e8df180400           call 0x62fc62
// 005ee383  83c404               add esp, 4
// 005ee386  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee38a  897e18               mov dword ptr [esi + 0x18], edi
// 005ee38d  5f                   pop edi
// 005ee38e  8bc6                 mov eax, esi
// 005ee390  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee397  5e                   pop esi
// 005ee398  83c414               add esp, 0x14
// 005ee39b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
