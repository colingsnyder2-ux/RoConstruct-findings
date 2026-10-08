// roc 2007-03 005d0450  unit: seg_005d0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0450
//
// 005d0450  51                   push ecx
// 005d0451  6a28                 push 0x28
// 005d0453  c744240400000000     mov dword ptr [esp + 4], 0
// 005d045b  e8a8dc0400           call 0x61e108
// 005d0460  83c404               add esp, 4
// 005d0463  85c0                 test eax, eax
// 005d0465  7432                 je 0x5d0499
// 005d0467  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d046b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d046f  894808               mov dword ptr [eax + 8], ecx
// 005d0472  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d0476  89500c               mov dword ptr [eax + 0xc], edx
// 005d0479  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d047d  895018               mov dword ptr [eax + 0x18], edx
// 005d0480  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d0484  894810               mov dword ptr [eax + 0x10], ecx
// 005d0487  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d048b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d048e  c7007cb57b00         mov dword ptr [eax], 0x7bb57c
// 005d0494  895020               mov dword ptr [eax + 0x20], edx
// 005d0497  eb02                 jmp 0x5d049b
// 005d0499  33c0                 xor eax, eax
// 005d049b  56                   push esi
// 005d049c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d04a0  6a00                 push 0
// 005d04a2  c744240800000000     mov dword ptr [esp + 8], 0
// 005d04aa  8906                 mov dword ptr [esi], eax
// 005d04ac  e83fdc0400           call 0x61e0f0
// 005d04b1  83c404               add esp, 4
// 005d04b4  8bc6                 mov eax, esi
// 005d04b6  5e                   pop esi
// 005d04b7  59                   pop ecx
// 005d04b8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
