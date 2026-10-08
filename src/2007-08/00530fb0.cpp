// roc 2007-08 00530fb0  unit: RBX::ModelInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530fb0
//
// 00530fb0  51                   push ecx
// 00530fb1  6a28                 push 0x28
// 00530fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 00530fbb  e836ef0f00           call 0x62fef6
// 00530fc0  83c404               add esp, 4
// 00530fc3  85c0                 test eax, eax
// 00530fc5  7432                 je 0x530ff9
// 00530fc7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00530fcb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530fcf  894808               mov dword ptr [eax + 8], ecx
// 00530fd2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00530fd6  89500c               mov dword ptr [eax + 0xc], edx
// 00530fd9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00530fdd  895018               mov dword ptr [eax + 0x18], edx
// 00530fe0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00530fe4  894810               mov dword ptr [eax + 0x10], ecx
// 00530fe7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00530feb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00530fee  c700f44d7a00         mov dword ptr [eax], 0x7a4df4
// 00530ff4  895020               mov dword ptr [eax + 0x20], edx
// 00530ff7  eb02                 jmp 0x530ffb
// 00530ff9  33c0                 xor eax, eax
// 00530ffb  56                   push esi
// 00530ffc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00531000  6a00                 push 0
// 00531002  c744240800000000     mov dword ptr [esp + 8], 0
// 0053100a  8906                 mov dword ptr [esi], eax
// 0053100c  e851ec0f00           call 0x62fc62
// 00531011  83c404               add esp, 4
// 00531014  8bc6                 mov eax, esi
// 00531016  5e                   pop esi
// 00531017  59                   pop ecx
// 00531018  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
