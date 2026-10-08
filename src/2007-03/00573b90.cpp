// roc 2007-03 00573b90  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573b90
//
// 00573b90  51                   push ecx
// 00573b91  6a28                 push 0x28
// 00573b93  c744240400000000     mov dword ptr [esp + 4], 0
// 00573b9b  e868a50a00           call 0x61e108
// 00573ba0  83c404               add esp, 4
// 00573ba3  85c0                 test eax, eax
// 00573ba5  7432                 je 0x573bd9
// 00573ba7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573bab  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573baf  894808               mov dword ptr [eax + 8], ecx
// 00573bb2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573bb6  89500c               mov dword ptr [eax + 0xc], edx
// 00573bb9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573bbd  895018               mov dword ptr [eax + 0x18], edx
// 00573bc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573bc4  894810               mov dword ptr [eax + 0x10], ecx
// 00573bc7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573bcb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573bce  c700e4c07a00         mov dword ptr [eax], 0x7ac0e4
// 00573bd4  895020               mov dword ptr [eax + 0x20], edx
// 00573bd7  eb02                 jmp 0x573bdb
// 00573bd9  33c0                 xor eax, eax
// 00573bdb  56                   push esi
// 00573bdc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573be0  6a00                 push 0
// 00573be2  c744240800000000     mov dword ptr [esp + 8], 0
// 00573bea  8906                 mov dword ptr [esi], eax
// 00573bec  e8ffa40a00           call 0x61e0f0
// 00573bf1  83c404               add esp, 4
// 00573bf4  8bc6                 mov eax, esi
// 00573bf6  5e                   pop esi
// 00573bf7  59                   pop ecx
// 00573bf8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
