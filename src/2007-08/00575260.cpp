// roc 2007-08 00575260  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575260
//
// 00575260  51                   push ecx
// 00575261  6a28                 push 0x28
// 00575263  c744240400000000     mov dword ptr [esp + 4], 0
// 0057526b  e886ac0b00           call 0x62fef6
// 00575270  83c404               add esp, 4
// 00575273  85c0                 test eax, eax
// 00575275  7432                 je 0x5752a9
// 00575277  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057527b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057527f  894808               mov dword ptr [eax + 8], ecx
// 00575282  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575286  89500c               mov dword ptr [eax + 0xc], edx
// 00575289  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057528d  895018               mov dword ptr [eax + 0x18], edx
// 00575290  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575294  894810               mov dword ptr [eax + 0x10], ecx
// 00575297  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057529b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057529e  c70024aa7a00         mov dword ptr [eax], 0x7aaa24
// 005752a4  895020               mov dword ptr [eax + 0x20], edx
// 005752a7  eb02                 jmp 0x5752ab
// 005752a9  33c0                 xor eax, eax
// 005752ab  56                   push esi
// 005752ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005752b0  6a00                 push 0
// 005752b2  c744240800000000     mov dword ptr [esp + 8], 0
// 005752ba  8906                 mov dword ptr [esi], eax
// 005752bc  e8a1a90b00           call 0x62fc62
// 005752c1  83c404               add esp, 4
// 005752c4  8bc6                 mov eax, esi
// 005752c6  5e                   pop esi
// 005752c7  59                   pop ecx
// 005752c8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
