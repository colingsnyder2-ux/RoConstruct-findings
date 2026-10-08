// roc 2007-08 005753b0  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005753b0
//
// 005753b0  51                   push ecx
// 005753b1  6a28                 push 0x28
// 005753b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005753bb  e836ab0b00           call 0x62fef6
// 005753c0  83c404               add esp, 4
// 005753c3  85c0                 test eax, eax
// 005753c5  7432                 je 0x5753f9
// 005753c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005753cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005753cf  894808               mov dword ptr [eax + 8], ecx
// 005753d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005753d6  89500c               mov dword ptr [eax + 0xc], edx
// 005753d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005753dd  895018               mov dword ptr [eax + 0x18], edx
// 005753e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005753e4  894810               mov dword ptr [eax + 0x10], ecx
// 005753e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005753eb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005753ee  c70054aa7a00         mov dword ptr [eax], 0x7aaa54
// 005753f4  895020               mov dword ptr [eax + 0x20], edx
// 005753f7  eb02                 jmp 0x5753fb
// 005753f9  33c0                 xor eax, eax
// 005753fb  56                   push esi
// 005753fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575400  6a00                 push 0
// 00575402  c744240800000000     mov dword ptr [esp + 8], 0
// 0057540a  8906                 mov dword ptr [esi], eax
// 0057540c  e851a80b00           call 0x62fc62
// 00575411  83c404               add esp, 4
// 00575414  8bc6                 mov eax, esi
// 00575416  5e                   pop esi
// 00575417  59                   pop ecx
// 00575418  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
