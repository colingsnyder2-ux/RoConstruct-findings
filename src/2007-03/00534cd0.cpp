// roc 2007-03 00534cd0  unit: seg_00530000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534cd0
//
// 00534cd0  51                   push ecx
// 00534cd1  6a28                 push 0x28
// 00534cd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00534cdb  e828940e00           call 0x61e108
// 00534ce0  83c404               add esp, 4
// 00534ce3  85c0                 test eax, eax
// 00534ce5  7432                 je 0x534d19
// 00534ce7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00534ceb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00534cef  894808               mov dword ptr [eax + 8], ecx
// 00534cf2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00534cf6  89500c               mov dword ptr [eax + 0xc], edx
// 00534cf9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00534cfd  895018               mov dword ptr [eax + 0x18], edx
// 00534d00  8b542420             mov edx, dword ptr [esp + 0x20]
// 00534d04  894810               mov dword ptr [eax + 0x10], ecx
// 00534d07  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00534d0b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00534d0e  c700c0517a00         mov dword ptr [eax], 0x7a51c0
// 00534d14  895020               mov dword ptr [eax + 0x20], edx
// 00534d17  eb02                 jmp 0x534d1b
// 00534d19  33c0                 xor eax, eax
// 00534d1b  56                   push esi
// 00534d1c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534d20  6a00                 push 0
// 00534d22  c744240800000000     mov dword ptr [esp + 8], 0
// 00534d2a  8906                 mov dword ptr [esi], eax
// 00534d2c  e8bf930e00           call 0x61e0f0
// 00534d31  83c404               add esp, 4
// 00534d34  8bc6                 mov eax, esi
// 00534d36  5e                   pop esi
// 00534d37  59                   pop ecx
// 00534d38  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
