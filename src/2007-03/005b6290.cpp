// roc 2007-03 005b6290  unit: seg_005b0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6290
//
// 005b6290  51                   push ecx
// 005b6291  6a28                 push 0x28
// 005b6293  c744240400000000     mov dword ptr [esp + 4], 0
// 005b629b  e8687e0600           call 0x61e108
// 005b62a0  83c404               add esp, 4
// 005b62a3  85c0                 test eax, eax
// 005b62a5  7432                 je 0x5b62d9
// 005b62a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b62ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b62af  894808               mov dword ptr [eax + 8], ecx
// 005b62b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b62b6  89500c               mov dword ptr [eax + 0xc], edx
// 005b62b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b62bd  895018               mov dword ptr [eax + 0x18], edx
// 005b62c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b62c4  894810               mov dword ptr [eax + 0x10], ecx
// 005b62c7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b62cb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005b62ce  c700888d7b00         mov dword ptr [eax], 0x7b8d88
// 005b62d4  895020               mov dword ptr [eax + 0x20], edx
// 005b62d7  eb02                 jmp 0x5b62db
// 005b62d9  33c0                 xor eax, eax
// 005b62db  56                   push esi
// 005b62dc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b62e0  6a00                 push 0
// 005b62e2  c744240800000000     mov dword ptr [esp + 8], 0
// 005b62ea  8906                 mov dword ptr [esi], eax
// 005b62ec  e8ff7d0600           call 0x61e0f0
// 005b62f1  83c404               add esp, 4
// 005b62f4  8bc6                 mov eax, esi
// 005b62f6  5e                   pop esi
// 005b62f7  59                   pop ecx
// 005b62f8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
