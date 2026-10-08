// roc 2007-08 005a5480  unit: RBX::Humanoid  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5480
//
// 005a5480  51                   push ecx
// 005a5481  6a28                 push 0x28
// 005a5483  c744240400000000     mov dword ptr [esp + 4], 0
// 005a548b  e866aa0800           call 0x62fef6
// 005a5490  83c404               add esp, 4
// 005a5493  85c0                 test eax, eax
// 005a5495  7432                 je 0x5a54c9
// 005a5497  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a549b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a549f  894808               mov dword ptr [eax + 8], ecx
// 005a54a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a54a6  89500c               mov dword ptr [eax + 0xc], edx
// 005a54a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a54ad  895018               mov dword ptr [eax + 0x18], edx
// 005a54b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a54b4  894810               mov dword ptr [eax + 0x10], ecx
// 005a54b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a54bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a54be  c70050537b00         mov dword ptr [eax], 0x7b5350
// 005a54c4  895020               mov dword ptr [eax + 0x20], edx
// 005a54c7  eb02                 jmp 0x5a54cb
// 005a54c9  33c0                 xor eax, eax
// 005a54cb  56                   push esi
// 005a54cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a54d0  6a00                 push 0
// 005a54d2  c744240800000000     mov dword ptr [esp + 8], 0
// 005a54da  8906                 mov dword ptr [esi], eax
// 005a54dc  e881a70800           call 0x62fc62
// 005a54e1  83c404               add esp, 4
// 005a54e4  8bc6                 mov eax, esi
// 005a54e6  5e                   pop esi
// 005a54e7  59                   pop ecx
// 005a54e8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
