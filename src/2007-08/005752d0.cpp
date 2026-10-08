// roc 2007-08 005752d0  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005752d0
//
// 005752d0  51                   push ecx
// 005752d1  6a28                 push 0x28
// 005752d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005752db  e816ac0b00           call 0x62fef6
// 005752e0  83c404               add esp, 4
// 005752e3  85c0                 test eax, eax
// 005752e5  7432                 je 0x575319
// 005752e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005752eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005752ef  894808               mov dword ptr [eax + 8], ecx
// 005752f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005752f6  89500c               mov dword ptr [eax + 0xc], edx
// 005752f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005752fd  895018               mov dword ptr [eax + 0x18], edx
// 00575300  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575304  894810               mov dword ptr [eax + 0x10], ecx
// 00575307  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057530b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057530e  c70034aa7a00         mov dword ptr [eax], 0x7aaa34
// 00575314  895020               mov dword ptr [eax + 0x20], edx
// 00575317  eb02                 jmp 0x57531b
// 00575319  33c0                 xor eax, eax
// 0057531b  56                   push esi
// 0057531c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575320  6a00                 push 0
// 00575322  c744240800000000     mov dword ptr [esp + 8], 0
// 0057532a  8906                 mov dword ptr [esi], eax
// 0057532c  e831a90b00           call 0x62fc62
// 00575331  83c404               add esp, 4
// 00575334  8bc6                 mov eax, esi
// 00575336  5e                   pop esi
// 00575337  59                   pop ecx
// 00575338  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
