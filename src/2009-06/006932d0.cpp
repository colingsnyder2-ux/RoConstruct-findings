// roc 2009-06 006932d0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006932d0
//
// 006932d0  6aff                 push -1
// 006932d2  6868eb8600           push 0x86eb68
// 006932d7  64a100000000         mov eax, dword ptr fs:[0]
// 006932dd  50                   push eax
// 006932de  64892500000000       mov dword ptr fs:[0], esp
// 006932e5  83ec08               sub esp, 8
// 006932e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006932ec  56                   push esi
// 006932ed  57                   push edi
// 006932ee  8bf1                 mov esi, ecx
// 006932f0  89742408             mov dword ptr [esp + 8], esi
// 006932f4  50                   push eax
// 006932f5  51                   push ecx
// 006932f6  8bc4                 mov eax, esp
// 006932f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693300  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693308  89642414             mov dword ptr [esp + 0x14], esp
// 0069330c  c70000000000         mov dword ptr [eax], 0
// 00693312  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693316  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069331a  51                   push ecx
// 0069331b  52                   push edx
// 0069331c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693321  e8fa88f5ff           call 0x5ebc20
// 00693326  50                   push eax
// 00693327  8bce                 mov ecx, esi
// 00693329  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069332e  e81d41f9ff           call 0x627450
// 00693333  6a00                 push 0
// 00693335  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069333a  e8f3560800           call 0x718a32
// 0069333f  6a18                 push 0x18
// 00693341  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 00693347  e8ec560800           call 0x718a38
// 0069334c  83c408               add esp, 8
// 0069334f  85c0                 test eax, eax
// 00693351  741e                 je 0x693371
// 00693353  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693357  33c9                 xor ecx, ecx
// 00693359  33d2                 xor edx, edx
// 0069335b  897808               mov dword ptr [eax + 8], edi
// 0069335e  c700886f8e00         mov dword ptr [eax], 0x8e6f88
// 00693364  897004               mov dword ptr [eax + 4], esi
// 00693367  894810               mov dword ptr [eax + 0x10], ecx
// 0069336a  895014               mov dword ptr [eax + 0x14], edx
// 0069336d  8bf8                 mov edi, eax
// 0069336f  eb02                 jmp 0x693373
// 00693371  33ff                 xor edi, edi
// 00693373  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693376  3bf8                 cmp edi, eax
// 00693378  7409                 je 0x693383
// 0069337a  50                   push eax
// 0069337b  e8b2560800           call 0x718a32
// 00693380  83c404               add esp, 4
// 00693383  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693387  897e18               mov dword ptr [esi + 0x18], edi
// 0069338a  5f                   pop edi
// 0069338b  8bc6                 mov eax, esi
// 0069338d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693394  5e                   pop esi
// 00693395  83c414               add esp, 0x14
// 00693398  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
