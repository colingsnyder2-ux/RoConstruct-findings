// roc 2009-06 006a0af0  unit: RBX::VSparkles::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a0af0
//
// 006a0af0  6aff                 push -1
// 006a0af2  6868eb8600           push 0x86eb68
// 006a0af7  64a100000000         mov eax, dword ptr fs:[0]
// 006a0afd  50                   push eax
// 006a0afe  64892500000000       mov dword ptr fs:[0], esp
// 006a0b05  83ec08               sub esp, 8
// 006a0b08  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a0b0c  56                   push esi
// 006a0b0d  57                   push edi
// 006a0b0e  8bf1                 mov esi, ecx
// 006a0b10  89742408             mov dword ptr [esp + 8], esi
// 006a0b14  50                   push eax
// 006a0b15  51                   push ecx
// 006a0b16  8bc4                 mov eax, esp
// 006a0b18  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006a0b20  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006a0b28  89642414             mov dword ptr [esp + 0x14], esp
// 006a0b2c  c70000000000         mov dword ptr [eax], 0
// 006a0b32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006a0b36  8b542428             mov edx, dword ptr [esp + 0x28]
// 006a0b3a  51                   push ecx
// 006a0b3b  52                   push edx
// 006a0b3c  c644242801           mov byte ptr [esp + 0x28], 1
// 006a0b41  e8cab4f4ff           call 0x5ec010
// 006a0b46  50                   push eax
// 006a0b47  8bce                 mov ecx, esi
// 006a0b49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006a0b4e  e8ed8bd6ff           call 0x409740
// 006a0b53  6a00                 push 0
// 006a0b55  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006a0b5a  e8d37e0700           call 0x718a32
// 006a0b5f  6a18                 push 0x18
// 006a0b61  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 006a0b67  e8cc7e0700           call 0x718a38
// 006a0b6c  83c408               add esp, 8
// 006a0b6f  85c0                 test eax, eax
// 006a0b71  741e                 je 0x6a0b91
// 006a0b73  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006a0b77  33c9                 xor ecx, ecx
// 006a0b79  33d2                 xor edx, edx
// 006a0b7b  897808               mov dword ptr [eax + 8], edi
// 006a0b7e  c700ac928e00         mov dword ptr [eax], 0x8e92ac
// 006a0b84  897004               mov dword ptr [eax + 4], esi
// 006a0b87  894810               mov dword ptr [eax + 0x10], ecx
// 006a0b8a  895014               mov dword ptr [eax + 0x14], edx
// 006a0b8d  8bf8                 mov edi, eax
// 006a0b8f  eb02                 jmp 0x6a0b93
// 006a0b91  33ff                 xor edi, edi
// 006a0b93  8b4618               mov eax, dword ptr [esi + 0x18]
// 006a0b96  3bf8                 cmp edi, eax
// 006a0b98  7409                 je 0x6a0ba3
// 006a0b9a  50                   push eax
// 006a0b9b  e8927e0700           call 0x718a32
// 006a0ba0  83c404               add esp, 4
// 006a0ba3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a0ba7  897e18               mov dword ptr [esi + 0x18], edi
// 006a0baa  5f                   pop edi
// 006a0bab  8bc6                 mov eax, esi
// 006a0bad  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0bb4  5e                   pop esi
// 006a0bb5  83c414               add esp, 0x14
// 006a0bb8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
