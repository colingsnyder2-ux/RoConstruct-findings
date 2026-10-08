// roc 2007-03 005739d0  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005739d0
//
// 005739d0  51                   push ecx
// 005739d1  6a28                 push 0x28
// 005739d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005739db  e828a70a00           call 0x61e108
// 005739e0  83c404               add esp, 4
// 005739e3  85c0                 test eax, eax
// 005739e5  7432                 je 0x573a19
// 005739e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005739eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005739ef  894808               mov dword ptr [eax + 8], ecx
// 005739f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005739f6  89500c               mov dword ptr [eax + 0xc], edx
// 005739f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005739fd  895018               mov dword ptr [eax + 0x18], edx
// 00573a00  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573a04  894810               mov dword ptr [eax + 0x10], ecx
// 00573a07  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573a0b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573a0e  c700a4c07a00         mov dword ptr [eax], 0x7ac0a4
// 00573a14  895020               mov dword ptr [eax + 0x20], edx
// 00573a17  eb02                 jmp 0x573a1b
// 00573a19  33c0                 xor eax, eax
// 00573a1b  56                   push esi
// 00573a1c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573a20  6a00                 push 0
// 00573a22  c744240800000000     mov dword ptr [esp + 8], 0
// 00573a2a  8906                 mov dword ptr [esi], eax
// 00573a2c  e8bfa60a00           call 0x61e0f0
// 00573a31  83c404               add esp, 4
// 00573a34  8bc6                 mov eax, esi
// 00573a36  5e                   pop esi
// 00573a37  59                   pop ecx
// 00573a38  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
