// roc 2007-08 005750a0  unit: RBX::PartInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005750a0
//
// 005750a0  51                   push ecx
// 005750a1  6a28                 push 0x28
// 005750a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005750ab  e846ae0b00           call 0x62fef6
// 005750b0  83c404               add esp, 4
// 005750b3  85c0                 test eax, eax
// 005750b5  7432                 je 0x5750e9
// 005750b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005750bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005750bf  894808               mov dword ptr [eax + 8], ecx
// 005750c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005750c6  89500c               mov dword ptr [eax + 0xc], edx
// 005750c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005750cd  895018               mov dword ptr [eax + 0x18], edx
// 005750d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005750d4  894810               mov dword ptr [eax + 0x10], ecx
// 005750d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005750db  89481c               mov dword ptr [eax + 0x1c], ecx
// 005750de  c700e4a97a00         mov dword ptr [eax], 0x7aa9e4
// 005750e4  895020               mov dword ptr [eax + 0x20], edx
// 005750e7  eb02                 jmp 0x5750eb
// 005750e9  33c0                 xor eax, eax
// 005750eb  56                   push esi
// 005750ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005750f0  6a00                 push 0
// 005750f2  c744240800000000     mov dword ptr [esp + 8], 0
// 005750fa  8906                 mov dword ptr [esi], eax
// 005750fc  e861ab0b00           call 0x62fc62
// 00575101  83c404               add esp, 4
// 00575104  8bc6                 mov eax, esi
// 00575106  5e                   pop esi
// 00575107  59                   pop ecx
// 00575108  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
