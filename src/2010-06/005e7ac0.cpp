// roc 2010-06 005e7ac0  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e7ac0
//
// 005e7ac0  51                   push ecx
// 005e7ac1  6a28                 push 0x28
// 005e7ac3  c744240400000000     mov dword ptr [esp + 4], 0
// 005e7acb  e8d0fe1b00           call 0x7a79a0
// 005e7ad0  83c404               add esp, 4
// 005e7ad3  85c0                 test eax, eax
// 005e7ad5  7432                 je 0x5e7b09
// 005e7ad7  c700d0e6a200         mov dword ptr [eax], 0xa2e6d0
// 005e7add  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e7ae1  894808               mov dword ptr [eax + 8], ecx
// 005e7ae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e7ae8  89500c               mov dword ptr [eax + 0xc], edx
// 005e7aeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e7aef  894810               mov dword ptr [eax + 0x10], ecx
// 005e7af2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e7af6  895018               mov dword ptr [eax + 0x18], edx
// 005e7af9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e7afd  89481c               mov dword ptr [eax + 0x1c], ecx
// 005e7b00  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7b04  895020               mov dword ptr [eax + 0x20], edx
// 005e7b07  eb02                 jmp 0x5e7b0b
// 005e7b09  33c0                 xor eax, eax
// 005e7b0b  56                   push esi
// 005e7b0c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7b10  6a00                 push 0
// 005e7b12  8906                 mov dword ptr [esi], eax
// 005e7b14  e881fe1b00           call 0x7a799a
// 005e7b19  83c404               add esp, 4
// 005e7b1c  8bc6                 mov eax, esi
// 005e7b1e  5e                   pop esi
// 005e7b1f  59                   pop ecx
// 005e7b20  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
