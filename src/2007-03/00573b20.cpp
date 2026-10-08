// roc 2007-03 00573b20  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573b20
//
// 00573b20  51                   push ecx
// 00573b21  6a28                 push 0x28
// 00573b23  c744240400000000     mov dword ptr [esp + 4], 0
// 00573b2b  e8d8a50a00           call 0x61e108
// 00573b30  83c404               add esp, 4
// 00573b33  85c0                 test eax, eax
// 00573b35  7432                 je 0x573b69
// 00573b37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573b3b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573b3f  894808               mov dword ptr [eax + 8], ecx
// 00573b42  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573b46  89500c               mov dword ptr [eax + 0xc], edx
// 00573b49  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573b4d  895018               mov dword ptr [eax + 0x18], edx
// 00573b50  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573b54  894810               mov dword ptr [eax + 0x10], ecx
// 00573b57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573b5b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573b5e  c700d4c07a00         mov dword ptr [eax], 0x7ac0d4
// 00573b64  895020               mov dword ptr [eax + 0x20], edx
// 00573b67  eb02                 jmp 0x573b6b
// 00573b69  33c0                 xor eax, eax
// 00573b6b  56                   push esi
// 00573b6c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573b70  6a00                 push 0
// 00573b72  c744240800000000     mov dword ptr [esp + 8], 0
// 00573b7a  8906                 mov dword ptr [esi], eax
// 00573b7c  e86fa50a00           call 0x61e0f0
// 00573b81  83c404               add esp, 4
// 00573b84  8bc6                 mov eax, esi
// 00573b86  5e                   pop esi
// 00573b87  59                   pop ecx
// 00573b88  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
