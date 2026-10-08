// roc 2007-08 00575180  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575180
//
// 00575180  51                   push ecx
// 00575181  6a28                 push 0x28
// 00575183  c744240400000000     mov dword ptr [esp + 4], 0
// 0057518b  e866ad0b00           call 0x62fef6
// 00575190  83c404               add esp, 4
// 00575193  85c0                 test eax, eax
// 00575195  7432                 je 0x5751c9
// 00575197  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057519b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057519f  894808               mov dword ptr [eax + 8], ecx
// 005751a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005751a6  89500c               mov dword ptr [eax + 0xc], edx
// 005751a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005751ad  895018               mov dword ptr [eax + 0x18], edx
// 005751b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005751b4  894810               mov dword ptr [eax + 0x10], ecx
// 005751b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005751bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005751be  c70004aa7a00         mov dword ptr [eax], 0x7aaa04
// 005751c4  895020               mov dword ptr [eax + 0x20], edx
// 005751c7  eb02                 jmp 0x5751cb
// 005751c9  33c0                 xor eax, eax
// 005751cb  56                   push esi
// 005751cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005751d0  6a00                 push 0
// 005751d2  c744240800000000     mov dword ptr [esp + 8], 0
// 005751da  8906                 mov dword ptr [esi], eax
// 005751dc  e881aa0b00           call 0x62fc62
// 005751e1  83c404               add esp, 4
// 005751e4  8bc6                 mov eax, esi
// 005751e6  5e                   pop esi
// 005751e7  59                   pop ecx
// 005751e8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
