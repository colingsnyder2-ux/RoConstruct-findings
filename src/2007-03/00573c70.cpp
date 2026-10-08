// roc 2007-03 00573c70  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573c70
//
// 00573c70  51                   push ecx
// 00573c71  6a28                 push 0x28
// 00573c73  c744240400000000     mov dword ptr [esp + 4], 0
// 00573c7b  e888a40a00           call 0x61e108
// 00573c80  83c404               add esp, 4
// 00573c83  85c0                 test eax, eax
// 00573c85  7432                 je 0x573cb9
// 00573c87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573c8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573c8f  894808               mov dword ptr [eax + 8], ecx
// 00573c92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573c96  89500c               mov dword ptr [eax + 0xc], edx
// 00573c99  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573c9d  895018               mov dword ptr [eax + 0x18], edx
// 00573ca0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573ca4  894810               mov dword ptr [eax + 0x10], ecx
// 00573ca7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573cab  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573cae  c70004c17a00         mov dword ptr [eax], 0x7ac104
// 00573cb4  895020               mov dword ptr [eax + 0x20], edx
// 00573cb7  eb02                 jmp 0x573cbb
// 00573cb9  33c0                 xor eax, eax
// 00573cbb  56                   push esi
// 00573cbc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573cc0  6a00                 push 0
// 00573cc2  c744240800000000     mov dword ptr [esp + 8], 0
// 00573cca  8906                 mov dword ptr [esi], eax
// 00573ccc  e81fa40a00           call 0x61e0f0
// 00573cd1  83c404               add esp, 4
// 00573cd4  8bc6                 mov eax, esi
// 00573cd6  5e                   pop esi
// 00573cd7  59                   pop ecx
// 00573cd8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
