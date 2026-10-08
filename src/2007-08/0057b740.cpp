// roc 2007-08 0057b740  unit: RBX::RootInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b740
//
// 0057b740  51                   push ecx
// 0057b741  6a28                 push 0x28
// 0057b743  c744240400000000     mov dword ptr [esp + 4], 0
// 0057b74b  e8a6470b00           call 0x62fef6
// 0057b750  83c404               add esp, 4
// 0057b753  85c0                 test eax, eax
// 0057b755  7432                 je 0x57b789
// 0057b757  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057b75b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057b75f  894808               mov dword ptr [eax + 8], ecx
// 0057b762  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057b766  89500c               mov dword ptr [eax + 0xc], edx
// 0057b769  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057b76d  895018               mov dword ptr [eax + 0x18], edx
// 0057b770  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057b774  894810               mov dword ptr [eax + 0x10], ecx
// 0057b777  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057b77b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057b77e  c70044b77a00         mov dword ptr [eax], 0x7ab744
// 0057b784  895020               mov dword ptr [eax + 0x20], edx
// 0057b787  eb02                 jmp 0x57b78b
// 0057b789  33c0                 xor eax, eax
// 0057b78b  56                   push esi
// 0057b78c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057b790  6a00                 push 0
// 0057b792  c744240800000000     mov dword ptr [esp + 8], 0
// 0057b79a  8906                 mov dword ptr [esi], eax
// 0057b79c  e8c1440b00           call 0x62fc62
// 0057b7a1  83c404               add esp, 4
// 0057b7a4  8bc6                 mov eax, esi
// 0057b7a6  5e                   pop esi
// 0057b7a7  59                   pop ecx
// 0057b7a8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
