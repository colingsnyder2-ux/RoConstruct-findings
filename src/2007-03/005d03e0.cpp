// roc 2007-03 005d03e0  unit: seg_005d0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d03e0
//
// 005d03e0  51                   push ecx
// 005d03e1  6a28                 push 0x28
// 005d03e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005d03eb  e818dd0400           call 0x61e108
// 005d03f0  83c404               add esp, 4
// 005d03f3  85c0                 test eax, eax
// 005d03f5  7432                 je 0x5d0429
// 005d03f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d03fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d03ff  894808               mov dword ptr [eax + 8], ecx
// 005d0402  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d0406  89500c               mov dword ptr [eax + 0xc], edx
// 005d0409  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d040d  895018               mov dword ptr [eax + 0x18], edx
// 005d0410  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d0414  894810               mov dword ptr [eax + 0x10], ecx
// 005d0417  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d041b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d041e  c7006cb57b00         mov dword ptr [eax], 0x7bb56c
// 005d0424  895020               mov dword ptr [eax + 0x20], edx
// 005d0427  eb02                 jmp 0x5d042b
// 005d0429  33c0                 xor eax, eax
// 005d042b  56                   push esi
// 005d042c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d0430  6a00                 push 0
// 005d0432  c744240800000000     mov dword ptr [esp + 8], 0
// 005d043a  8906                 mov dword ptr [esi], eax
// 005d043c  e8afdc0400           call 0x61e0f0
// 005d0441  83c404               add esp, 4
// 005d0444  8bc6                 mov eax, esi
// 005d0446  5e                   pop esi
// 005d0447  59                   pop ecx
// 005d0448  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
