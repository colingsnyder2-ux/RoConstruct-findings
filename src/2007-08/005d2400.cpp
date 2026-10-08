// roc 2007-08 005d2400  unit: RBX::Tool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2400
//
// 005d2400  51                   push ecx
// 005d2401  6a28                 push 0x28
// 005d2403  c744240400000000     mov dword ptr [esp + 4], 0
// 005d240b  e8e6da0500           call 0x62fef6
// 005d2410  83c404               add esp, 4
// 005d2413  85c0                 test eax, eax
// 005d2415  7432                 je 0x5d2449
// 005d2417  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d241b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d241f  894808               mov dword ptr [eax + 8], ecx
// 005d2422  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d2426  89500c               mov dword ptr [eax + 0xc], edx
// 005d2429  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d242d  895018               mov dword ptr [eax + 0x18], edx
// 005d2430  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d2434  894810               mov dword ptr [eax + 0x10], ecx
// 005d2437  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d243b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d243e  c70070af7b00         mov dword ptr [eax], 0x7baf70
// 005d2444  895020               mov dword ptr [eax + 0x20], edx
// 005d2447  eb02                 jmp 0x5d244b
// 005d2449  33c0                 xor eax, eax
// 005d244b  56                   push esi
// 005d244c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d2450  6a00                 push 0
// 005d2452  c744240800000000     mov dword ptr [esp + 8], 0
// 005d245a  8906                 mov dword ptr [esi], eax
// 005d245c  e801d80500           call 0x62fc62
// 005d2461  83c404               add esp, 4
// 005d2464  8bc6                 mov eax, esi
// 005d2466  5e                   pop esi
// 005d2467  59                   pop ecx
// 005d2468  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
