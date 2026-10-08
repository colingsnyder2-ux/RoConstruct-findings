// roc 2007-08 00575340  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575340
//
// 00575340  51                   push ecx
// 00575341  6a28                 push 0x28
// 00575343  c744240400000000     mov dword ptr [esp + 4], 0
// 0057534b  e8a6ab0b00           call 0x62fef6
// 00575350  83c404               add esp, 4
// 00575353  85c0                 test eax, eax
// 00575355  7432                 je 0x575389
// 00575357  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057535b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057535f  894808               mov dword ptr [eax + 8], ecx
// 00575362  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575366  89500c               mov dword ptr [eax + 0xc], edx
// 00575369  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057536d  895018               mov dword ptr [eax + 0x18], edx
// 00575370  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575374  894810               mov dword ptr [eax + 0x10], ecx
// 00575377  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057537b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057537e  c70044aa7a00         mov dword ptr [eax], 0x7aaa44
// 00575384  895020               mov dword ptr [eax + 0x20], edx
// 00575387  eb02                 jmp 0x57538b
// 00575389  33c0                 xor eax, eax
// 0057538b  56                   push esi
// 0057538c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575390  6a00                 push 0
// 00575392  c744240800000000     mov dword ptr [esp + 8], 0
// 0057539a  8906                 mov dword ptr [esi], eax
// 0057539c  e8c1a80b00           call 0x62fc62
// 005753a1  83c404               add esp, 4
// 005753a4  8bc6                 mov eax, esi
// 005753a6  5e                   pop esi
// 005753a7  59                   pop ecx
// 005753a8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
