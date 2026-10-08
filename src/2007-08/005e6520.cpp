// roc 2007-08 005e6520  unit: RBX::Flag  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6520
//
// 005e6520  51                   push ecx
// 005e6521  6a28                 push 0x28
// 005e6523  c744240400000000     mov dword ptr [esp + 4], 0
// 005e652b  e8c6990400           call 0x62fef6
// 005e6530  83c404               add esp, 4
// 005e6533  85c0                 test eax, eax
// 005e6535  7432                 je 0x5e6569
// 005e6537  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e653b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e653f  894808               mov dword ptr [eax + 8], ecx
// 005e6542  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e6546  89500c               mov dword ptr [eax + 0xc], edx
// 005e6549  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e654d  895018               mov dword ptr [eax + 0x18], edx
// 005e6550  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e6554  894810               mov dword ptr [eax + 0x10], ecx
// 005e6557  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e655b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005e655e  c70010d47b00         mov dword ptr [eax], 0x7bd410
// 005e6564  895020               mov dword ptr [eax + 0x20], edx
// 005e6567  eb02                 jmp 0x5e656b
// 005e6569  33c0                 xor eax, eax
// 005e656b  56                   push esi
// 005e656c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e6570  6a00                 push 0
// 005e6572  c744240800000000     mov dword ptr [esp + 8], 0
// 005e657a  8906                 mov dword ptr [esi], eax
// 005e657c  e8e1960400           call 0x62fc62
// 005e6581  83c404               add esp, 4
// 005e6584  8bc6                 mov eax, esi
// 005e6586  5e                   pop esi
// 005e6587  59                   pop ecx
// 005e6588  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
