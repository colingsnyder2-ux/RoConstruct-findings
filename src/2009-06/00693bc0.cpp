// roc 2009-06 00693bc0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693bc0
//
// 00693bc0  6aff                 push -1
// 00693bc2  6868eb8600           push 0x86eb68
// 00693bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00693bcd  50                   push eax
// 00693bce  64892500000000       mov dword ptr fs:[0], esp
// 00693bd5  83ec08               sub esp, 8
// 00693bd8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00693bdc  56                   push esi
// 00693bdd  57                   push edi
// 00693bde  8bf1                 mov esi, ecx
// 00693be0  89742408             mov dword ptr [esp + 8], esi
// 00693be4  50                   push eax
// 00693be5  51                   push ecx
// 00693be6  8bc4                 mov eax, esp
// 00693be8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693bf0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693bf8  89642414             mov dword ptr [esp + 0x14], esp
// 00693bfc  c70000000000         mov dword ptr [eax], 0
// 00693c02  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693c06  8b542428             mov edx, dword ptr [esp + 0x28]
// 00693c0a  51                   push ecx
// 00693c0b  52                   push edx
// 00693c0c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693c11  e84a7ef5ff           call 0x5eba60
// 00693c16  50                   push eax
// 00693c17  8bce                 mov ecx, esi
// 00693c19  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00693c1e  e82d38f9ff           call 0x627450
// 00693c23  6a00                 push 0
// 00693c25  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00693c2a  e8034e0800           call 0x718a32
// 00693c2f  6a18                 push 0x18
// 00693c31  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 00693c37  e8fc4d0800           call 0x718a38
// 00693c3c  83c408               add esp, 8
// 00693c3f  85c0                 test eax, eax
// 00693c41  741e                 je 0x693c61
// 00693c43  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693c47  33c9                 xor ecx, ecx
// 00693c49  33d2                 xor edx, edx
// 00693c4b  897808               mov dword ptr [eax + 8], edi
// 00693c4e  c70078708e00         mov dword ptr [eax], 0x8e7078
// 00693c54  897004               mov dword ptr [eax + 4], esi
// 00693c57  894810               mov dword ptr [eax + 0x10], ecx
// 00693c5a  895014               mov dword ptr [eax + 0x14], edx
// 00693c5d  8bf8                 mov edi, eax
// 00693c5f  eb02                 jmp 0x693c63
// 00693c61  33ff                 xor edi, edi
// 00693c63  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693c66  3bf8                 cmp edi, eax
// 00693c68  7409                 je 0x693c73
// 00693c6a  50                   push eax
// 00693c6b  e8c24d0800           call 0x718a32
// 00693c70  83c404               add esp, 4
// 00693c73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693c77  897e18               mov dword ptr [esi + 0x18], edi
// 00693c7a  5f                   pop edi
// 00693c7b  8bc6                 mov eax, esi
// 00693c7d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693c84  5e                   pop esi
// 00693c85  83c414               add esp, 0x14
// 00693c88  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
