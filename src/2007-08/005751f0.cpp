// roc 2007-08 005751f0  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005751f0
//
// 005751f0  51                   push ecx
// 005751f1  6a28                 push 0x28
// 005751f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005751fb  e8f6ac0b00           call 0x62fef6
// 00575200  83c404               add esp, 4
// 00575203  85c0                 test eax, eax
// 00575205  7432                 je 0x575239
// 00575207  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057520b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057520f  894808               mov dword ptr [eax + 8], ecx
// 00575212  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575216  89500c               mov dword ptr [eax + 0xc], edx
// 00575219  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057521d  895018               mov dword ptr [eax + 0x18], edx
// 00575220  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575224  894810               mov dword ptr [eax + 0x10], ecx
// 00575227  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057522b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057522e  c70014aa7a00         mov dword ptr [eax], 0x7aaa14
// 00575234  895020               mov dword ptr [eax + 0x20], edx
// 00575237  eb02                 jmp 0x57523b
// 00575239  33c0                 xor eax, eax
// 0057523b  56                   push esi
// 0057523c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575240  6a00                 push 0
// 00575242  c744240800000000     mov dword ptr [esp + 8], 0
// 0057524a  8906                 mov dword ptr [esi], eax
// 0057524c  e811aa0b00           call 0x62fc62
// 00575251  83c404               add esp, 4
// 00575254  8bc6                 mov eax, esi
// 00575256  5e                   pop esi
// 00575257  59                   pop ecx
// 00575258  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
