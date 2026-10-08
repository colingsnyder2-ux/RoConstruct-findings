// roc 2007-03 005d0370  unit: seg_005d0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0370
//
// 005d0370  51                   push ecx
// 005d0371  6a28                 push 0x28
// 005d0373  c744240400000000     mov dword ptr [esp + 4], 0
// 005d037b  e888dd0400           call 0x61e108
// 005d0380  83c404               add esp, 4
// 005d0383  85c0                 test eax, eax
// 005d0385  7432                 je 0x5d03b9
// 005d0387  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d038b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d038f  894808               mov dword ptr [eax + 8], ecx
// 005d0392  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d0396  89500c               mov dword ptr [eax + 0xc], edx
// 005d0399  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d039d  895018               mov dword ptr [eax + 0x18], edx
// 005d03a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d03a4  894810               mov dword ptr [eax + 0x10], ecx
// 005d03a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d03ab  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d03ae  c7005cb57b00         mov dword ptr [eax], 0x7bb55c
// 005d03b4  895020               mov dword ptr [eax + 0x20], edx
// 005d03b7  eb02                 jmp 0x5d03bb
// 005d03b9  33c0                 xor eax, eax
// 005d03bb  56                   push esi
// 005d03bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d03c0  6a00                 push 0
// 005d03c2  c744240800000000     mov dword ptr [esp + 8], 0
// 005d03ca  8906                 mov dword ptr [esi], eax
// 005d03cc  e81fdd0400           call 0x61e0f0
// 005d03d1  83c404               add esp, 4
// 005d03d4  8bc6                 mov eax, esi
// 005d03d6  5e                   pop esi
// 005d03d7  59                   pop ecx
// 005d03d8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
