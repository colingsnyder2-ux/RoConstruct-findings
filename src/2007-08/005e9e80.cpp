// roc 2007-08 005e9e80  unit: RBX::VFlagStand::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9e80
//
// 005e9e80  51                   push ecx
// 005e9e81  6a28                 push 0x28
// 005e9e83  c744240400000000     mov dword ptr [esp + 4], 0
// 005e9e8b  e866600400           call 0x62fef6
// 005e9e90  83c404               add esp, 4
// 005e9e93  85c0                 test eax, eax
// 005e9e95  7432                 je 0x5e9ec9
// 005e9e97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9e9b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e9e9f  894808               mov dword ptr [eax + 8], ecx
// 005e9ea2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e9ea6  89500c               mov dword ptr [eax + 0xc], edx
// 005e9ea9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e9ead  895018               mov dword ptr [eax + 0x18], edx
// 005e9eb0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e9eb4  894810               mov dword ptr [eax + 0x10], ecx
// 005e9eb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e9ebb  89481c               mov dword ptr [eax + 0x1c], ecx
// 005e9ebe  c7009cde7b00         mov dword ptr [eax], 0x7bde9c
// 005e9ec4  895020               mov dword ptr [eax + 0x20], edx
// 005e9ec7  eb02                 jmp 0x5e9ecb
// 005e9ec9  33c0                 xor eax, eax
// 005e9ecb  56                   push esi
// 005e9ecc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e9ed0  6a00                 push 0
// 005e9ed2  c744240800000000     mov dword ptr [esp + 8], 0
// 005e9eda  8906                 mov dword ptr [esi], eax
// 005e9edc  e8815d0400           call 0x62fc62
// 005e9ee1  83c404               add esp, 4
// 005e9ee4  8bc6                 mov eax, esi
// 005e9ee6  5e                   pop esi
// 005e9ee7  59                   pop ecx
// 005e9ee8  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
