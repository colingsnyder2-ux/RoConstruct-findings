// roc 2007-08 005a5560  unit: RBX::Humanoid  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5560
//
// 005a5560  51                   push ecx
// 005a5561  6a28                 push 0x28
// 005a5563  c744240400000000     mov dword ptr [esp + 4], 0
// 005a556b  e886a90800           call 0x62fef6
// 005a5570  83c404               add esp, 4
// 005a5573  85c0                 test eax, eax
// 005a5575  7432                 je 0x5a55a9
// 005a5577  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a557b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a557f  894808               mov dword ptr [eax + 8], ecx
// 005a5582  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a5586  89500c               mov dword ptr [eax + 0xc], edx
// 005a5589  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a558d  895018               mov dword ptr [eax + 0x18], edx
// 005a5590  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a5594  894810               mov dword ptr [eax + 0x10], ecx
// 005a5597  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a559b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a559e  c70070537b00         mov dword ptr [eax], 0x7b5370
// 005a55a4  895020               mov dword ptr [eax + 0x20], edx
// 005a55a7  eb02                 jmp 0x5a55ab
// 005a55a9  33c0                 xor eax, eax
// 005a55ab  56                   push esi
// 005a55ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a55b0  6a00                 push 0
// 005a55b2  c744240800000000     mov dword ptr [esp + 8], 0
// 005a55ba  8906                 mov dword ptr [esi], eax
// 005a55bc  e8a1a60800           call 0x62fc62
// 005a55c1  83c404               add esp, 4
// 005a55c4  8bc6                 mov eax, esi
// 005a55c6  5e                   pop esi
// 005a55c7  59                   pop ecx
// 005a55c8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
