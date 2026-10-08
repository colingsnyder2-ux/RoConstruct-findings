// roc 2007-03 00534c60  unit: seg_00530000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534c60
//
// 00534c60  51                   push ecx
// 00534c61  6a28                 push 0x28
// 00534c63  c744240400000000     mov dword ptr [esp + 4], 0
// 00534c6b  e898940e00           call 0x61e108
// 00534c70  83c404               add esp, 4
// 00534c73  85c0                 test eax, eax
// 00534c75  7432                 je 0x534ca9
// 00534c77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00534c7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00534c7f  894808               mov dword ptr [eax + 8], ecx
// 00534c82  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00534c86  89500c               mov dword ptr [eax + 0xc], edx
// 00534c89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00534c8d  895018               mov dword ptr [eax + 0x18], edx
// 00534c90  8b542420             mov edx, dword ptr [esp + 0x20]
// 00534c94  894810               mov dword ptr [eax + 0x10], ecx
// 00534c97  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00534c9b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00534c9e  c700b0517a00         mov dword ptr [eax], 0x7a51b0
// 00534ca4  895020               mov dword ptr [eax + 0x20], edx
// 00534ca7  eb02                 jmp 0x534cab
// 00534ca9  33c0                 xor eax, eax
// 00534cab  56                   push esi
// 00534cac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534cb0  6a00                 push 0
// 00534cb2  c744240800000000     mov dword ptr [esp + 8], 0
// 00534cba  8906                 mov dword ptr [esi], eax
// 00534cbc  e82f940e00           call 0x61e0f0
// 00534cc1  83c404               add esp, 4
// 00534cc4  8bc6                 mov eax, esi
// 00534cc6  5e                   pop esi
// 00534cc7  59                   pop ecx
// 00534cc8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
