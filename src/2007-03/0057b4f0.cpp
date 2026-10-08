// roc 2007-03 0057b4f0  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b4f0
//
// 0057b4f0  51                   push ecx
// 0057b4f1  6a28                 push 0x28
// 0057b4f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0057b4fb  e8082c0a00           call 0x61e108
// 0057b500  83c404               add esp, 4
// 0057b503  85c0                 test eax, eax
// 0057b505  7432                 je 0x57b539
// 0057b507  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057b50b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057b50f  894808               mov dword ptr [eax + 8], ecx
// 0057b512  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057b516  89500c               mov dword ptr [eax + 0xc], edx
// 0057b519  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057b51d  895018               mov dword ptr [eax + 0x18], edx
// 0057b520  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057b524  894810               mov dword ptr [eax + 0x10], ecx
// 0057b527  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057b52b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057b52e  c70070d07a00         mov dword ptr [eax], 0x7ad070
// 0057b534  895020               mov dword ptr [eax + 0x20], edx
// 0057b537  eb02                 jmp 0x57b53b
// 0057b539  33c0                 xor eax, eax
// 0057b53b  56                   push esi
// 0057b53c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057b540  6a00                 push 0
// 0057b542  c744240800000000     mov dword ptr [esp + 8], 0
// 0057b54a  8906                 mov dword ptr [esi], eax
// 0057b54c  e89f2b0a00           call 0x61e0f0
// 0057b551  83c404               add esp, 4
// 0057b554  8bc6                 mov eax, esi
// 0057b556  5e                   pop esi
// 0057b557  59                   pop ecx
// 0057b558  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
