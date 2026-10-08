// roc 2007-03 005b6220  unit: seg_005b0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6220
//
// 005b6220  51                   push ecx
// 005b6221  6a28                 push 0x28
// 005b6223  c744240400000000     mov dword ptr [esp + 4], 0
// 005b622b  e8d87e0600           call 0x61e108
// 005b6230  83c404               add esp, 4
// 005b6233  85c0                 test eax, eax
// 005b6235  7432                 je 0x5b6269
// 005b6237  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b623b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b623f  894808               mov dword ptr [eax + 8], ecx
// 005b6242  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b6246  89500c               mov dword ptr [eax + 0xc], edx
// 005b6249  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b624d  895018               mov dword ptr [eax + 0x18], edx
// 005b6250  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b6254  894810               mov dword ptr [eax + 0x10], ecx
// 005b6257  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b625b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005b625e  c700788d7b00         mov dword ptr [eax], 0x7b8d78
// 005b6264  895020               mov dword ptr [eax + 0x20], edx
// 005b6267  eb02                 jmp 0x5b626b
// 005b6269  33c0                 xor eax, eax
// 005b626b  56                   push esi
// 005b626c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b6270  6a00                 push 0
// 005b6272  c744240800000000     mov dword ptr [esp + 8], 0
// 005b627a  8906                 mov dword ptr [esi], eax
// 005b627c  e86f7e0600           call 0x61e0f0
// 005b6281  83c404               add esp, 4
// 005b6284  8bc6                 mov eax, esi
// 005b6286  5e                   pop esi
// 005b6287  59                   pop ecx
// 005b6288  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
