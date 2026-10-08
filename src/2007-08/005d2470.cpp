// roc 2007-08 005d2470  unit: RBX::Tool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2470
//
// 005d2470  51                   push ecx
// 005d2471  6a28                 push 0x28
// 005d2473  c744240400000000     mov dword ptr [esp + 4], 0
// 005d247b  e876da0500           call 0x62fef6
// 005d2480  83c404               add esp, 4
// 005d2483  85c0                 test eax, eax
// 005d2485  7432                 je 0x5d24b9
// 005d2487  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d248b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d248f  894808               mov dword ptr [eax + 8], ecx
// 005d2492  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d2496  89500c               mov dword ptr [eax + 0xc], edx
// 005d2499  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d249d  895018               mov dword ptr [eax + 0x18], edx
// 005d24a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d24a4  894810               mov dword ptr [eax + 0x10], ecx
// 005d24a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d24ab  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d24ae  c70080af7b00         mov dword ptr [eax], 0x7baf80
// 005d24b4  895020               mov dword ptr [eax + 0x20], edx
// 005d24b7  eb02                 jmp 0x5d24bb
// 005d24b9  33c0                 xor eax, eax
// 005d24bb  56                   push esi
// 005d24bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d24c0  6a00                 push 0
// 005d24c2  c744240800000000     mov dword ptr [esp + 8], 0
// 005d24ca  8906                 mov dword ptr [esi], eax
// 005d24cc  e891d70500           call 0x62fc62
// 005d24d1  83c404               add esp, 4
// 005d24d4  8bc6                 mov eax, esi
// 005d24d6  5e                   pop esi
// 005d24d7  59                   pop ecx
// 005d24d8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
