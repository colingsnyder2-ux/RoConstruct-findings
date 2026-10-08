// roc 2007-08 005a54f0  unit: RBX::Humanoid  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a54f0
//
// 005a54f0  51                   push ecx
// 005a54f1  6a28                 push 0x28
// 005a54f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a54fb  e8f6a90800           call 0x62fef6
// 005a5500  83c404               add esp, 4
// 005a5503  85c0                 test eax, eax
// 005a5505  7432                 je 0x5a5539
// 005a5507  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a550b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a550f  894808               mov dword ptr [eax + 8], ecx
// 005a5512  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a5516  89500c               mov dword ptr [eax + 0xc], edx
// 005a5519  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a551d  895018               mov dword ptr [eax + 0x18], edx
// 005a5520  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a5524  894810               mov dword ptr [eax + 0x10], ecx
// 005a5527  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a552b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a552e  c70060537b00         mov dword ptr [eax], 0x7b5360
// 005a5534  895020               mov dword ptr [eax + 0x20], edx
// 005a5537  eb02                 jmp 0x5a553b
// 005a5539  33c0                 xor eax, eax
// 005a553b  56                   push esi
// 005a553c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a5540  6a00                 push 0
// 005a5542  c744240800000000     mov dword ptr [esp + 8], 0
// 005a554a  8906                 mov dword ptr [esi], eax
// 005a554c  e811a70800           call 0x62fc62
// 005a5551  83c404               add esp, 4
// 005a5554  8bc6                 mov eax, esi
// 005a5556  5e                   pop esi
// 005a5557  59                   pop ecx
// 005a5558  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
