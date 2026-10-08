// roc 2009-06 006a0bc0  unit: RBX::VSparkles::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a0bc0
//
// 006a0bc0  6aff                 push -1
// 006a0bc2  6868eb8600           push 0x86eb68
// 006a0bc7  64a100000000         mov eax, dword ptr fs:[0]
// 006a0bcd  50                   push eax
// 006a0bce  64892500000000       mov dword ptr fs:[0], esp
// 006a0bd5  83ec08               sub esp, 8
// 006a0bd8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a0bdc  56                   push esi
// 006a0bdd  57                   push edi
// 006a0bde  8bf1                 mov esi, ecx
// 006a0be0  89742408             mov dword ptr [esp + 8], esi
// 006a0be4  50                   push eax
// 006a0be5  51                   push ecx
// 006a0be6  8bc4                 mov eax, esp
// 006a0be8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006a0bf0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006a0bf8  89642414             mov dword ptr [esp + 0x14], esp
// 006a0bfc  c70000000000         mov dword ptr [eax], 0
// 006a0c02  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006a0c06  8b542428             mov edx, dword ptr [esp + 0x28]
// 006a0c0a  51                   push ecx
// 006a0c0b  52                   push edx
// 006a0c0c  c644242801           mov byte ptr [esp + 0x28], 1
// 006a0c11  e8fab3f4ff           call 0x5ec010
// 006a0c16  50                   push eax
// 006a0c17  8bce                 mov ecx, esi
// 006a0c19  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006a0c1e  e85dc3fbff           call 0x65cf80
// 006a0c23  6a00                 push 0
// 006a0c25  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006a0c2a  e8037e0700           call 0x718a32
// 006a0c2f  6a18                 push 0x18
// 006a0c31  c7063c668e00         mov dword ptr [esi], 0x8e663c
// 006a0c37  e8fc7d0700           call 0x718a38
// 006a0c3c  83c408               add esp, 8
// 006a0c3f  85c0                 test eax, eax
// 006a0c41  741e                 je 0x6a0c61
// 006a0c43  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006a0c47  33c9                 xor ecx, ecx
// 006a0c49  33d2                 xor edx, edx
// 006a0c4b  897808               mov dword ptr [eax + 8], edi
// 006a0c4e  c700c0928e00         mov dword ptr [eax], 0x8e92c0
// 006a0c54  897004               mov dword ptr [eax + 4], esi
// 006a0c57  894810               mov dword ptr [eax + 0x10], ecx
// 006a0c5a  895014               mov dword ptr [eax + 0x14], edx
// 006a0c5d  8bf8                 mov edi, eax
// 006a0c5f  eb02                 jmp 0x6a0c63
// 006a0c61  33ff                 xor edi, edi
// 006a0c63  8b4618               mov eax, dword ptr [esi + 0x18]
// 006a0c66  3bf8                 cmp edi, eax
// 006a0c68  7409                 je 0x6a0c73
// 006a0c6a  50                   push eax
// 006a0c6b  e8c27d0700           call 0x718a32
// 006a0c70  83c404               add esp, 4
// 006a0c73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a0c77  897e18               mov dword ptr [esi + 0x18], edi
// 006a0c7a  5f                   pop edi
// 006a0c7b  8bc6                 mov eax, esi
// 006a0c7d  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0c84  5e                   pop esi
// 006a0c85  83c414               add esp, 0x14
// 006a0c88  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
