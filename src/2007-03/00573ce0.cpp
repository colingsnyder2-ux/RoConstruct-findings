// roc 2007-03 00573ce0  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573ce0
//
// 00573ce0  51                   push ecx
// 00573ce1  6a28                 push 0x28
// 00573ce3  c744240400000000     mov dword ptr [esp + 4], 0
// 00573ceb  e818a40a00           call 0x61e108
// 00573cf0  83c404               add esp, 4
// 00573cf3  85c0                 test eax, eax
// 00573cf5  7432                 je 0x573d29
// 00573cf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573cfb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573cff  894808               mov dword ptr [eax + 8], ecx
// 00573d02  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573d06  89500c               mov dword ptr [eax + 0xc], edx
// 00573d09  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573d0d  895018               mov dword ptr [eax + 0x18], edx
// 00573d10  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573d14  894810               mov dword ptr [eax + 0x10], ecx
// 00573d17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573d1b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573d1e  c70014c17a00         mov dword ptr [eax], 0x7ac114
// 00573d24  895020               mov dword ptr [eax + 0x20], edx
// 00573d27  eb02                 jmp 0x573d2b
// 00573d29  33c0                 xor eax, eax
// 00573d2b  56                   push esi
// 00573d2c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573d30  6a00                 push 0
// 00573d32  c744240800000000     mov dword ptr [esp + 8], 0
// 00573d3a  8906                 mov dword ptr [esi], eax
// 00573d3c  e8afa30a00           call 0x61e0f0
// 00573d41  83c404               add esp, 4
// 00573d44  8bc6                 mov eax, esi
// 00573d46  5e                   pop esi
// 00573d47  59                   pop ecx
// 00573d48  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
