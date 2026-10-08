// roc 2009-06 00693610  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693610
//
// 00693610  6aff                 push -1
// 00693612  6868eb8600           push 0x86eb68
// 00693617  64a100000000         mov eax, dword ptr fs:[0]
// 0069361d  50                   push eax
// 0069361e  64892500000000       mov dword ptr fs:[0], esp
// 00693625  83ec08               sub esp, 8
// 00693628  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069362c  56                   push esi
// 0069362d  57                   push edi
// 0069362e  8bf1                 mov esi, ecx
// 00693630  89742408             mov dword ptr [esp + 8], esi
// 00693634  50                   push eax
// 00693635  51                   push ecx
// 00693636  8bc4                 mov eax, esp
// 00693638  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693640  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693648  89642414             mov dword ptr [esp + 0x14], esp
// 0069364c  c70000000000         mov dword ptr [eax], 0
// 00693652  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693656  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069365a  51                   push ecx
// 0069365b  52                   push edx
// 0069365c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693661  e86a84f5ff           call 0x5ebad0
// 00693666  50                   push eax
// 00693667  8bce                 mov ecx, esi
// 00693669  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069366e  e88dcadaff           call 0x440100
// 00693673  6a00                 push 0
// 00693675  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069367a  e8b3530800           call 0x718a32
// 0069367f  6a18                 push 0x18
// 00693681  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 00693687  e8ac530800           call 0x718a38
// 0069368c  83c408               add esp, 8
// 0069368f  85c0                 test eax, eax
// 00693691  741e                 je 0x6936b1
// 00693693  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693697  33c9                 xor ecx, ecx
// 00693699  33d2                 xor edx, edx
// 0069369b  897808               mov dword ptr [eax + 8], edi
// 0069369e  c700ec6f8e00         mov dword ptr [eax], 0x8e6fec
// 006936a4  897004               mov dword ptr [eax + 4], esi
// 006936a7  894810               mov dword ptr [eax + 0x10], ecx
// 006936aa  895014               mov dword ptr [eax + 0x14], edx
// 006936ad  8bf8                 mov edi, eax
// 006936af  eb02                 jmp 0x6936b3
// 006936b1  33ff                 xor edi, edi
// 006936b3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006936b6  3bf8                 cmp edi, eax
// 006936b8  7409                 je 0x6936c3
// 006936ba  50                   push eax
// 006936bb  e872530800           call 0x718a32
// 006936c0  83c404               add esp, 4
// 006936c3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006936c7  897e18               mov dword ptr [esi + 0x18], edi
// 006936ca  5f                   pop edi
// 006936cb  8bc6                 mov eax, esi
// 006936cd  64890d00000000       mov dword ptr fs:[0], ecx
// 006936d4  5e                   pop esi
// 006936d5  83c414               add esp, 0x14
// 006936d8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
