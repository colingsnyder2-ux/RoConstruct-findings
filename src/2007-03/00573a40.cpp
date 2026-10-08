// roc 2007-03 00573a40  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573a40
//
// 00573a40  51                   push ecx
// 00573a41  6a28                 push 0x28
// 00573a43  c744240400000000     mov dword ptr [esp + 4], 0
// 00573a4b  e8b8a60a00           call 0x61e108
// 00573a50  83c404               add esp, 4
// 00573a53  85c0                 test eax, eax
// 00573a55  7432                 je 0x573a89
// 00573a57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573a5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573a5f  894808               mov dword ptr [eax + 8], ecx
// 00573a62  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573a66  89500c               mov dword ptr [eax + 0xc], edx
// 00573a69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573a6d  895018               mov dword ptr [eax + 0x18], edx
// 00573a70  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573a74  894810               mov dword ptr [eax + 0x10], ecx
// 00573a77  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573a7b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573a7e  c700b4c07a00         mov dword ptr [eax], 0x7ac0b4
// 00573a84  895020               mov dword ptr [eax + 0x20], edx
// 00573a87  eb02                 jmp 0x573a8b
// 00573a89  33c0                 xor eax, eax
// 00573a8b  56                   push esi
// 00573a8c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573a90  6a00                 push 0
// 00573a92  c744240800000000     mov dword ptr [esp + 8], 0
// 00573a9a  8906                 mov dword ptr [esi], eax
// 00573a9c  e84fa60a00           call 0x61e0f0
// 00573aa1  83c404               add esp, 4
// 00573aa4  8bc6                 mov eax, esi
// 00573aa6  5e                   pop esi
// 00573aa7  59                   pop ecx
// 00573aa8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
