// roc 2009-06 00693af0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693af0
//
// 00693af0  6aff                 push -1
// 00693af2  6868eb8600           push 0x86eb68
// 00693af7  64a100000000         mov eax, dword ptr fs:[0]
// 00693afd  50                   push eax
// 00693afe  64892500000000       mov dword ptr fs:[0], esp
// 00693b05  83ec08               sub esp, 8
// 00693b08  8b442424             mov eax, dword ptr [esp + 0x24]
// 00693b0c  56                   push esi
// 00693b0d  57                   push edi
// 00693b0e  8bf1                 mov esi, ecx
// 00693b10  89742408             mov dword ptr [esp + 8], esi
// 00693b14  50                   push eax
// 00693b15  51                   push ecx
// 00693b16  8bc4                 mov eax, esp
// 00693b18  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693b20  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693b28  89642414             mov dword ptr [esp + 0x14], esp
// 00693b2c  c70000000000         mov dword ptr [eax], 0
// 00693b32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693b36  8b542428             mov edx, dword ptr [esp + 0x28]
// 00693b3a  51                   push ecx
// 00693b3b  52                   push edx
// 00693b3c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693b41  e8aa7ef5ff           call 0x5eb9f0
// 00693b46  50                   push eax
// 00693b47  8bce                 mov ecx, esi
// 00693b49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00693b4e  e8fd38f9ff           call 0x627450
// 00693b53  6a00                 push 0
// 00693b55  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00693b5a  e8d34e0800           call 0x718a32
// 00693b5f  6a18                 push 0x18
// 00693b61  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 00693b67  e8cc4e0800           call 0x718a38
// 00693b6c  83c408               add esp, 8
// 00693b6f  85c0                 test eax, eax
// 00693b71  741e                 je 0x693b91
// 00693b73  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693b77  33c9                 xor ecx, ecx
// 00693b79  33d2                 xor edx, edx
// 00693b7b  897808               mov dword ptr [eax + 8], edi
// 00693b7e  c70064708e00         mov dword ptr [eax], 0x8e7064
// 00693b84  897004               mov dword ptr [eax + 4], esi
// 00693b87  894810               mov dword ptr [eax + 0x10], ecx
// 00693b8a  895014               mov dword ptr [eax + 0x14], edx
// 00693b8d  8bf8                 mov edi, eax
// 00693b8f  eb02                 jmp 0x693b93
// 00693b91  33ff                 xor edi, edi
// 00693b93  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693b96  3bf8                 cmp edi, eax
// 00693b98  7409                 je 0x693ba3
// 00693b9a  50                   push eax
// 00693b9b  e8924e0800           call 0x718a32
// 00693ba0  83c404               add esp, 4
// 00693ba3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693ba7  897e18               mov dword ptr [esi + 0x18], edi
// 00693baa  5f                   pop edi
// 00693bab  8bc6                 mov eax, esi
// 00693bad  64890d00000000       mov dword ptr fs:[0], ecx
// 00693bb4  5e                   pop esi
// 00693bb5  83c414               add esp, 0x14
// 00693bb8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
