// roc 2007-08 00581970  unit: RBX::VHat::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581970
//
// 00581970  51                   push ecx
// 00581971  6a28                 push 0x28
// 00581973  c744240400000000     mov dword ptr [esp + 4], 0
// 0058197b  e876e50a00           call 0x62fef6
// 00581980  83c404               add esp, 4
// 00581983  85c0                 test eax, eax
// 00581985  7432                 je 0x5819b9
// 00581987  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058198b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058198f  894808               mov dword ptr [eax + 8], ecx
// 00581992  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581996  89500c               mov dword ptr [eax + 0xc], edx
// 00581999  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058199d  895018               mov dword ptr [eax + 0x18], edx
// 005819a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005819a4  894810               mov dword ptr [eax + 0x10], ecx
// 005819a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005819ab  89481c               mov dword ptr [eax + 0x1c], ecx
// 005819ae  c70034c17a00         mov dword ptr [eax], 0x7ac134
// 005819b4  895020               mov dword ptr [eax + 0x20], edx
// 005819b7  eb02                 jmp 0x5819bb
// 005819b9  33c0                 xor eax, eax
// 005819bb  56                   push esi
// 005819bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005819c0  6a00                 push 0
// 005819c2  c744240800000000     mov dword ptr [esp + 8], 0
// 005819ca  8906                 mov dword ptr [esi], eax
// 005819cc  e891e20a00           call 0x62fc62
// 005819d1  83c404               add esp, 4
// 005819d4  8bc6                 mov eax, esi
// 005819d6  5e                   pop esi
// 005819d7  59                   pop ecx
// 005819d8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
