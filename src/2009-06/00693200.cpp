// roc 2009-06 00693200  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693200
//
// 00693200  6aff                 push -1
// 00693202  6868eb8600           push 0x86eb68
// 00693207  64a100000000         mov eax, dword ptr fs:[0]
// 0069320d  50                   push eax
// 0069320e  64892500000000       mov dword ptr fs:[0], esp
// 00693215  83ec08               sub esp, 8
// 00693218  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069321c  56                   push esi
// 0069321d  57                   push edi
// 0069321e  8bf1                 mov esi, ecx
// 00693220  89742408             mov dword ptr [esp + 8], esi
// 00693224  50                   push eax
// 00693225  51                   push ecx
// 00693226  8bc4                 mov eax, esp
// 00693228  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693230  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693238  89642414             mov dword ptr [esp + 0x14], esp
// 0069323c  c70000000000         mov dword ptr [eax], 0
// 00693242  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693246  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069324a  51                   push ecx
// 0069324b  52                   push edx
// 0069324c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693251  e8ca89f5ff           call 0x5ebc20
// 00693256  50                   push eax
// 00693257  8bce                 mov ecx, esi
// 00693259  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069325e  e89dcedaff           call 0x440100
// 00693263  6a00                 push 0
// 00693265  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069326a  e8c3570800           call 0x718a32
// 0069326f  6a18                 push 0x18
// 00693271  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 00693277  e8bc570800           call 0x718a38
// 0069327c  83c408               add esp, 8
// 0069327f  85c0                 test eax, eax
// 00693281  741e                 je 0x6932a1
// 00693283  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693287  33c9                 xor ecx, ecx
// 00693289  33d2                 xor edx, edx
// 0069328b  897808               mov dword ptr [eax + 8], edi
// 0069328e  c7009c6f8e00         mov dword ptr [eax], 0x8e6f9c
// 00693294  897004               mov dword ptr [eax + 4], esi
// 00693297  894810               mov dword ptr [eax + 0x10], ecx
// 0069329a  895014               mov dword ptr [eax + 0x14], edx
// 0069329d  8bf8                 mov edi, eax
// 0069329f  eb02                 jmp 0x6932a3
// 006932a1  33ff                 xor edi, edi
// 006932a3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006932a6  3bf8                 cmp edi, eax
// 006932a8  7409                 je 0x6932b3
// 006932aa  50                   push eax
// 006932ab  e882570800           call 0x718a32
// 006932b0  83c404               add esp, 4
// 006932b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006932b7  897e18               mov dword ptr [esi + 0x18], edi
// 006932ba  5f                   pop edi
// 006932bb  8bc6                 mov eax, esi
// 006932bd  64890d00000000       mov dword ptr fs:[0], ecx
// 006932c4  5e                   pop esi
// 006932c5  83c414               add esp, 0x14
// 006932c8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
