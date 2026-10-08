// roc 2007-08 00581890  unit: RBX::VHat::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581890
//
// 00581890  51                   push ecx
// 00581891  6a28                 push 0x28
// 00581893  c744240400000000     mov dword ptr [esp + 4], 0
// 0058189b  e856e60a00           call 0x62fef6
// 005818a0  83c404               add esp, 4
// 005818a3  85c0                 test eax, eax
// 005818a5  7432                 je 0x5818d9
// 005818a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005818ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005818af  894808               mov dword ptr [eax + 8], ecx
// 005818b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005818b6  89500c               mov dword ptr [eax + 0xc], edx
// 005818b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005818bd  895018               mov dword ptr [eax + 0x18], edx
// 005818c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005818c4  894810               mov dword ptr [eax + 0x10], ecx
// 005818c7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005818cb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005818ce  c70014c17a00         mov dword ptr [eax], 0x7ac114
// 005818d4  895020               mov dword ptr [eax + 0x20], edx
// 005818d7  eb02                 jmp 0x5818db
// 005818d9  33c0                 xor eax, eax
// 005818db  56                   push esi
// 005818dc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005818e0  6a00                 push 0
// 005818e2  c744240800000000     mov dword ptr [esp + 8], 0
// 005818ea  8906                 mov dword ptr [esi], eax
// 005818ec  e871e30a00           call 0x62fc62
// 005818f1  83c404               add esp, 4
// 005818f4  8bc6                 mov eax, esi
// 005818f6  5e                   pop esi
// 005818f7  59                   pop ecx
// 005818f8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
