// roc 2009-06 006933a0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006933a0
//
// 006933a0  6aff                 push -1
// 006933a2  6868eb8600           push 0x86eb68
// 006933a7  64a100000000         mov eax, dword ptr fs:[0]
// 006933ad  50                   push eax
// 006933ae  64892500000000       mov dword ptr fs:[0], esp
// 006933b5  83ec08               sub esp, 8
// 006933b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006933bc  56                   push esi
// 006933bd  57                   push edi
// 006933be  8bf1                 mov esi, ecx
// 006933c0  89742408             mov dword ptr [esp + 8], esi
// 006933c4  50                   push eax
// 006933c5  51                   push ecx
// 006933c6  8bc4                 mov eax, esp
// 006933c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006933d0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006933d8  89642414             mov dword ptr [esp + 0x14], esp
// 006933dc  c70000000000         mov dword ptr [eax], 0
// 006933e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006933e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006933ea  51                   push ecx
// 006933eb  52                   push edx
// 006933ec  c644242801           mov byte ptr [esp + 0x28], 1
// 006933f1  e88a85f5ff           call 0x5eb980
// 006933f6  50                   push eax
// 006933f7  8bce                 mov ecx, esi
// 006933f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006933fe  e8fdccdaff           call 0x440100
// 00693403  6a00                 push 0
// 00693405  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069340a  e823560800           call 0x718a32
// 0069340f  6a18                 push 0x18
// 00693411  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 00693417  e81c560800           call 0x718a38
// 0069341c  83c408               add esp, 8
// 0069341f  85c0                 test eax, eax
// 00693421  741e                 je 0x693441
// 00693423  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693427  33c9                 xor ecx, ecx
// 00693429  33d2                 xor edx, edx
// 0069342b  897808               mov dword ptr [eax + 8], edi
// 0069342e  c700b06f8e00         mov dword ptr [eax], 0x8e6fb0
// 00693434  897004               mov dword ptr [eax + 4], esi
// 00693437  894810               mov dword ptr [eax + 0x10], ecx
// 0069343a  895014               mov dword ptr [eax + 0x14], edx
// 0069343d  8bf8                 mov edi, eax
// 0069343f  eb02                 jmp 0x693443
// 00693441  33ff                 xor edi, edi
// 00693443  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693446  3bf8                 cmp edi, eax
// 00693448  7409                 je 0x693453
// 0069344a  50                   push eax
// 0069344b  e8e2550800           call 0x718a32
// 00693450  83c404               add esp, 4
// 00693453  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693457  897e18               mov dword ptr [esi + 0x18], edi
// 0069345a  5f                   pop edi
// 0069345b  8bc6                 mov eax, esi
// 0069345d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693464  5e                   pop esi
// 00693465  83c414               add esp, 0x14
// 00693468  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
