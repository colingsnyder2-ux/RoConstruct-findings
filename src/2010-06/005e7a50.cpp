// roc 2010-06 005e7a50  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e7a50
//
// 005e7a50  51                   push ecx
// 005e7a51  6a28                 push 0x28
// 005e7a53  c744240400000000     mov dword ptr [esp + 4], 0
// 005e7a5b  e840ff1b00           call 0x7a79a0
// 005e7a60  83c404               add esp, 4
// 005e7a63  85c0                 test eax, eax
// 005e7a65  7432                 je 0x5e7a99
// 005e7a67  c700b8e6a200         mov dword ptr [eax], 0xa2e6b8
// 005e7a6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e7a71  894808               mov dword ptr [eax + 8], ecx
// 005e7a74  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e7a78  89500c               mov dword ptr [eax + 0xc], edx
// 005e7a7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e7a7f  894810               mov dword ptr [eax + 0x10], ecx
// 005e7a82  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e7a86  895018               mov dword ptr [eax + 0x18], edx
// 005e7a89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e7a8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005e7a90  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7a94  895020               mov dword ptr [eax + 0x20], edx
// 005e7a97  eb02                 jmp 0x5e7a9b
// 005e7a99  33c0                 xor eax, eax
// 005e7a9b  56                   push esi
// 005e7a9c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7aa0  6a00                 push 0
// 005e7aa2  8906                 mov dword ptr [esi], eax
// 005e7aa4  e8f1fe1b00           call 0x7a799a
// 005e7aa9  83c404               add esp, 4
// 005e7aac  8bc6                 mov eax, esi
// 005e7aae  5e                   pop esi
// 005e7aaf  59                   pop ecx
// 005e7ab0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
