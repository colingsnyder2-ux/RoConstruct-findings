// roc 2007-08 005bb3b0  unit: RBX::VModelInstance::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb3b0
//
// 005bb3b0  51                   push ecx
// 005bb3b1  6a28                 push 0x28
// 005bb3b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005bb3bb  e8364b0700           call 0x62fef6
// 005bb3c0  83c404               add esp, 4
// 005bb3c3  85c0                 test eax, eax
// 005bb3c5  7432                 je 0x5bb3f9
// 005bb3c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bb3cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bb3cf  894808               mov dword ptr [eax + 8], ecx
// 005bb3d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bb3d6  89500c               mov dword ptr [eax + 0xc], edx
// 005bb3d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005bb3dd  895018               mov dword ptr [eax + 0x18], edx
// 005bb3e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bb3e4  894810               mov dword ptr [eax + 0x10], ecx
// 005bb3e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bb3eb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005bb3ee  c700a08d7b00         mov dword ptr [eax], 0x7b8da0
// 005bb3f4  895020               mov dword ptr [eax + 0x20], edx
// 005bb3f7  eb02                 jmp 0x5bb3fb
// 005bb3f9  33c0                 xor eax, eax
// 005bb3fb  56                   push esi
// 005bb3fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bb400  6a00                 push 0
// 005bb402  c744240800000000     mov dword ptr [esp + 8], 0
// 005bb40a  8906                 mov dword ptr [esi], eax
// 005bb40c  e851480700           call 0x62fc62
// 005bb411  83c404               add esp, 4
// 005bb414  8bc6                 mov eax, esi
// 005bb416  5e                   pop esi
// 005bb417  59                   pop ecx
// 005bb418  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
