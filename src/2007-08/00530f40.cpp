// roc 2007-08 00530f40  unit: RBX::ModelInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530f40
//
// 00530f40  51                   push ecx
// 00530f41  6a28                 push 0x28
// 00530f43  c744240400000000     mov dword ptr [esp + 4], 0
// 00530f4b  e8a6ef0f00           call 0x62fef6
// 00530f50  83c404               add esp, 4
// 00530f53  85c0                 test eax, eax
// 00530f55  7432                 je 0x530f89
// 00530f57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00530f5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530f5f  894808               mov dword ptr [eax + 8], ecx
// 00530f62  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00530f66  89500c               mov dword ptr [eax + 0xc], edx
// 00530f69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00530f6d  895018               mov dword ptr [eax + 0x18], edx
// 00530f70  8b542420             mov edx, dword ptr [esp + 0x20]
// 00530f74  894810               mov dword ptr [eax + 0x10], ecx
// 00530f77  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00530f7b  89481c               mov dword ptr [eax + 0x1c], ecx
// 00530f7e  c700e44d7a00         mov dword ptr [eax], 0x7a4de4
// 00530f84  895020               mov dword ptr [eax + 0x20], edx
// 00530f87  eb02                 jmp 0x530f8b
// 00530f89  33c0                 xor eax, eax
// 00530f8b  56                   push esi
// 00530f8c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00530f90  6a00                 push 0
// 00530f92  c744240800000000     mov dword ptr [esp + 8], 0
// 00530f9a  8906                 mov dword ptr [esi], eax
// 00530f9c  e8c1ec0f00           call 0x62fc62
// 00530fa1  83c404               add esp, 4
// 00530fa4  8bc6                 mov eax, esi
// 00530fa6  5e                   pop esi
// 00530fa7  59                   pop ecx
// 00530fa8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
