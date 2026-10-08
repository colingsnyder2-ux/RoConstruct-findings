// roc 2007-08 005d24e0  unit: RBX::Tool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d24e0
//
// 005d24e0  51                   push ecx
// 005d24e1  6a28                 push 0x28
// 005d24e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005d24eb  e806da0500           call 0x62fef6
// 005d24f0  83c404               add esp, 4
// 005d24f3  85c0                 test eax, eax
// 005d24f5  7432                 je 0x5d2529
// 005d24f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d24fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d24ff  894808               mov dword ptr [eax + 8], ecx
// 005d2502  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d2506  89500c               mov dword ptr [eax + 0xc], edx
// 005d2509  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d250d  895018               mov dword ptr [eax + 0x18], edx
// 005d2510  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d2514  894810               mov dword ptr [eax + 0x10], ecx
// 005d2517  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d251b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d251e  c70090af7b00         mov dword ptr [eax], 0x7baf90
// 005d2524  895020               mov dword ptr [eax + 0x20], edx
// 005d2527  eb02                 jmp 0x5d252b
// 005d2529  33c0                 xor eax, eax
// 005d252b  56                   push esi
// 005d252c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d2530  6a00                 push 0
// 005d2532  c744240800000000     mov dword ptr [esp + 8], 0
// 005d253a  8906                 mov dword ptr [esi], eax
// 005d253c  e821d70500           call 0x62fc62
// 005d2541  83c404               add esp, 4
// 005d2544  8bc6                 mov eax, esi
// 005d2546  5e                   pop esi
// 005d2547  59                   pop ecx
// 005d2548  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
