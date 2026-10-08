// roc 2009-06 006936e0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006936e0
//
// 006936e0  6aff                 push -1
// 006936e2  6868eb8600           push 0x86eb68
// 006936e7  64a100000000         mov eax, dword ptr fs:[0]
// 006936ed  50                   push eax
// 006936ee  64892500000000       mov dword ptr fs:[0], esp
// 006936f5  83ec08               sub esp, 8
// 006936f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006936fc  56                   push esi
// 006936fd  57                   push edi
// 006936fe  8bf1                 mov esi, ecx
// 00693700  89742408             mov dword ptr [esp + 8], esi
// 00693704  50                   push eax
// 00693705  51                   push ecx
// 00693706  8bc4                 mov eax, esp
// 00693708  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693710  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693718  89642414             mov dword ptr [esp + 0x14], esp
// 0069371c  c70000000000         mov dword ptr [eax], 0
// 00693722  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693726  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069372a  51                   push ecx
// 0069372b  52                   push edx
// 0069372c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693731  e89a83f5ff           call 0x5ebad0
// 00693736  50                   push eax
// 00693737  8bce                 mov ecx, esi
// 00693739  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069373e  e80d3df9ff           call 0x627450
// 00693743  6a00                 push 0
// 00693745  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069374a  e8e3520800           call 0x718a32
// 0069374f  6a18                 push 0x18
// 00693751  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 00693757  e8dc520800           call 0x718a38
// 0069375c  83c408               add esp, 8
// 0069375f  85c0                 test eax, eax
// 00693761  741e                 je 0x693781
// 00693763  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693767  33c9                 xor ecx, ecx
// 00693769  33d2                 xor edx, edx
// 0069376b  897808               mov dword ptr [eax + 8], edi
// 0069376e  c70000708e00         mov dword ptr [eax], 0x8e7000
// 00693774  897004               mov dword ptr [eax + 4], esi
// 00693777  894810               mov dword ptr [eax + 0x10], ecx
// 0069377a  895014               mov dword ptr [eax + 0x14], edx
// 0069377d  8bf8                 mov edi, eax
// 0069377f  eb02                 jmp 0x693783
// 00693781  33ff                 xor edi, edi
// 00693783  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693786  3bf8                 cmp edi, eax
// 00693788  7409                 je 0x693793
// 0069378a  50                   push eax
// 0069378b  e8a2520800           call 0x718a32
// 00693790  83c404               add esp, 4
// 00693793  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693797  897e18               mov dword ptr [esi + 0x18], edi
// 0069379a  5f                   pop edi
// 0069379b  8bc6                 mov eax, esi
// 0069379d  64890d00000000       mov dword ptr fs:[0], ecx
// 006937a4  5e                   pop esi
// 006937a5  83c414               add esp, 0x14
// 006937a8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
