// roc 2007-08 005bb420  unit: RBX::VModelInstance::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb420
//
// 005bb420  51                   push ecx
// 005bb421  6a28                 push 0x28
// 005bb423  c744240400000000     mov dword ptr [esp + 4], 0
// 005bb42b  e8c64a0700           call 0x62fef6
// 005bb430  83c404               add esp, 4
// 005bb433  85c0                 test eax, eax
// 005bb435  7432                 je 0x5bb469
// 005bb437  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bb43b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bb43f  894808               mov dword ptr [eax + 8], ecx
// 005bb442  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bb446  89500c               mov dword ptr [eax + 0xc], edx
// 005bb449  8b542418             mov edx, dword ptr [esp + 0x18]
// 005bb44d  895018               mov dword ptr [eax + 0x18], edx
// 005bb450  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bb454  894810               mov dword ptr [eax + 0x10], ecx
// 005bb457  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bb45b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005bb45e  c700b08d7b00         mov dword ptr [eax], 0x7b8db0
// 005bb464  895020               mov dword ptr [eax + 0x20], edx
// 005bb467  eb02                 jmp 0x5bb46b
// 005bb469  33c0                 xor eax, eax
// 005bb46b  56                   push esi
// 005bb46c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bb470  6a00                 push 0
// 005bb472  c744240800000000     mov dword ptr [esp + 8], 0
// 005bb47a  8906                 mov dword ptr [esi], eax
// 005bb47c  e8e1470700           call 0x62fc62
// 005bb481  83c404               add esp, 4
// 005bb484  8bc6                 mov eax, esi
// 005bb486  5e                   pop esi
// 005bb487  59                   pop ecx
// 005bb488  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
