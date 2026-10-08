// roc 2007-03 00573960  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573960
//
// 00573960  51                   push ecx
// 00573961  6a28                 push 0x28
// 00573963  c744240400000000     mov dword ptr [esp + 4], 0
// 0057396b  e898a70a00           call 0x61e108
// 00573970  83c404               add esp, 4
// 00573973  85c0                 test eax, eax
// 00573975  7432                 je 0x5739a9
// 00573977  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057397b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057397f  894808               mov dword ptr [eax + 8], ecx
// 00573982  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573986  89500c               mov dword ptr [eax + 0xc], edx
// 00573989  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057398d  895018               mov dword ptr [eax + 0x18], edx
// 00573990  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573994  894810               mov dword ptr [eax + 0x10], ecx
// 00573997  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057399b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057399e  c70094c07a00         mov dword ptr [eax], 0x7ac094
// 005739a4  895020               mov dword ptr [eax + 0x20], edx
// 005739a7  eb02                 jmp 0x5739ab
// 005739a9  33c0                 xor eax, eax
// 005739ab  56                   push esi
// 005739ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005739b0  6a00                 push 0
// 005739b2  c744240800000000     mov dword ptr [esp + 8], 0
// 005739ba  8906                 mov dword ptr [esi], eax
// 005739bc  e82fa70a00           call 0x61e0f0
// 005739c1  83c404               add esp, 4
// 005739c4  8bc6                 mov eax, esi
// 005739c6  5e                   pop esi
// 005739c7  59                   pop ecx
// 005739c8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
