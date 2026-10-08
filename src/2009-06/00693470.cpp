// roc 2009-06 00693470  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693470
//
// 00693470  6aff                 push -1
// 00693472  6868eb8600           push 0x86eb68
// 00693477  64a100000000         mov eax, dword ptr fs:[0]
// 0069347d  50                   push eax
// 0069347e  64892500000000       mov dword ptr fs:[0], esp
// 00693485  83ec08               sub esp, 8
// 00693488  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069348c  56                   push esi
// 0069348d  57                   push edi
// 0069348e  8bf1                 mov esi, ecx
// 00693490  89742408             mov dword ptr [esp + 8], esi
// 00693494  50                   push eax
// 00693495  51                   push ecx
// 00693496  8bc4                 mov eax, esp
// 00693498  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006934a0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006934a8  89642414             mov dword ptr [esp + 0x14], esp
// 006934ac  c70000000000         mov dword ptr [eax], 0
// 006934b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006934b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006934ba  51                   push ecx
// 006934bb  52                   push edx
// 006934bc  c644242801           mov byte ptr [esp + 0x28], 1
// 006934c1  e8ba84f5ff           call 0x5eb980
// 006934c6  50                   push eax
// 006934c7  8bce                 mov ecx, esi
// 006934c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006934ce  e87d3ff9ff           call 0x627450
// 006934d3  6a00                 push 0
// 006934d5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006934da  e853550800           call 0x718a32
// 006934df  6a18                 push 0x18
// 006934e1  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 006934e7  e84c550800           call 0x718a38
// 006934ec  83c408               add esp, 8
// 006934ef  85c0                 test eax, eax
// 006934f1  741e                 je 0x693511
// 006934f3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006934f7  33c9                 xor ecx, ecx
// 006934f9  33d2                 xor edx, edx
// 006934fb  897808               mov dword ptr [eax + 8], edi
// 006934fe  c700c46f8e00         mov dword ptr [eax], 0x8e6fc4
// 00693504  897004               mov dword ptr [eax + 4], esi
// 00693507  894810               mov dword ptr [eax + 0x10], ecx
// 0069350a  895014               mov dword ptr [eax + 0x14], edx
// 0069350d  8bf8                 mov edi, eax
// 0069350f  eb02                 jmp 0x693513
// 00693511  33ff                 xor edi, edi
// 00693513  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693516  3bf8                 cmp edi, eax
// 00693518  7409                 je 0x693523
// 0069351a  50                   push eax
// 0069351b  e812550800           call 0x718a32
// 00693520  83c404               add esp, 4
// 00693523  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693527  897e18               mov dword ptr [esi + 0x18], edi
// 0069352a  5f                   pop edi
// 0069352b  8bc6                 mov eax, esi
// 0069352d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693534  5e                   pop esi
// 00693535  83c414               add esp, 0x14
// 00693538  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
