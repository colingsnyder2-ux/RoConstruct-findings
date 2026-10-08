// roc 2007-08 00575030  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575030
//
// 00575030  51                   push ecx
// 00575031  6a28                 push 0x28
// 00575033  c744240400000000     mov dword ptr [esp + 4], 0
// 0057503b  e8b6ae0b00           call 0x62fef6
// 00575040  83c404               add esp, 4
// 00575043  85c0                 test eax, eax
// 00575045  7432                 je 0x575079
// 00575047  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057504b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057504f  894808               mov dword ptr [eax + 8], ecx
// 00575052  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575056  89500c               mov dword ptr [eax + 0xc], edx
// 00575059  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057505d  895018               mov dword ptr [eax + 0x18], edx
// 00575060  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575064  894810               mov dword ptr [eax + 0x10], ecx
// 00575067  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057506b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057506e  c700d4a97a00         mov dword ptr [eax], 0x7aa9d4
// 00575074  895020               mov dword ptr [eax + 0x20], edx
// 00575077  eb02                 jmp 0x57507b
// 00575079  33c0                 xor eax, eax
// 0057507b  56                   push esi
// 0057507c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575080  6a00                 push 0
// 00575082  c744240800000000     mov dword ptr [esp + 8], 0
// 0057508a  8906                 mov dword ptr [esi], eax
// 0057508c  e8d1ab0b00           call 0x62fc62
// 00575091  83c404               add esp, 4
// 00575094  8bc6                 mov eax, esi
// 00575096  5e                   pop esi
// 00575097  59                   pop ecx
// 00575098  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
