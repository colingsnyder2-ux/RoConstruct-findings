// roc 2007-03 00573c00  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573c00
//
// 00573c00  51                   push ecx
// 00573c01  6a28                 push 0x28
// 00573c03  c744240400000000     mov dword ptr [esp + 4], 0
// 00573c0b  e8f8a40a00           call 0x61e108
// 00573c10  83c404               add esp, 4
// 00573c13  85c0                 test eax, eax
// 00573c15  7432                 je 0x573c49
// 00573c17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573c1b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573c1f  894808               mov dword ptr [eax + 8], ecx
// 00573c22  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573c26  89500c               mov dword ptr [eax + 0xc], edx
// 00573c29  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573c2d  895018               mov dword ptr [eax + 0x18], edx
// 00573c30  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573c34  894810               mov dword ptr [eax + 0x10], ecx
// 00573c37  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573c3b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573c3e  c700f4c07a00         mov dword ptr [eax], 0x7ac0f4
// 00573c44  895020               mov dword ptr [eax + 0x20], edx
// 00573c47  eb02                 jmp 0x573c4b
// 00573c49  33c0                 xor eax, eax
// 00573c4b  56                   push esi
// 00573c4c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573c50  6a00                 push 0
// 00573c52  c744240800000000     mov dword ptr [esp + 8], 0
// 00573c5a  8906                 mov dword ptr [esi], eax
// 00573c5c  e88fa40a00           call 0x61e0f0
// 00573c61  83c404               add esp, 4
// 00573c64  8bc6                 mov eax, esi
// 00573c66  5e                   pop esi
// 00573c67  59                   pop ecx
// 00573c68  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
