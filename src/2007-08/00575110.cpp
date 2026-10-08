// roc 2007-08 00575110  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575110
//
// 00575110  51                   push ecx
// 00575111  6a28                 push 0x28
// 00575113  c744240400000000     mov dword ptr [esp + 4], 0
// 0057511b  e8d6ad0b00           call 0x62fef6
// 00575120  83c404               add esp, 4
// 00575123  85c0                 test eax, eax
// 00575125  7432                 je 0x575159
// 00575127  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057512b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057512f  894808               mov dword ptr [eax + 8], ecx
// 00575132  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575136  89500c               mov dword ptr [eax + 0xc], edx
// 00575139  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057513d  895018               mov dword ptr [eax + 0x18], edx
// 00575140  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575144  894810               mov dword ptr [eax + 0x10], ecx
// 00575147  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057514b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057514e  c700f4a97a00         mov dword ptr [eax], 0x7aa9f4
// 00575154  895020               mov dword ptr [eax + 0x20], edx
// 00575157  eb02                 jmp 0x57515b
// 00575159  33c0                 xor eax, eax
// 0057515b  56                   push esi
// 0057515c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575160  6a00                 push 0
// 00575162  c744240800000000     mov dword ptr [esp + 8], 0
// 0057516a  8906                 mov dword ptr [esi], eax
// 0057516c  e8f1aa0b00           call 0x62fc62
// 00575171  83c404               add esp, 4
// 00575174  8bc6                 mov eax, esi
// 00575176  5e                   pop esi
// 00575177  59                   pop ecx
// 00575178  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
