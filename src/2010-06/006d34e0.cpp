// roc 2010-06 006d34e0  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d34e0
//
// 006d34e0  51                   push ecx
// 006d34e1  6a28                 push 0x28
// 006d34e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d34eb  e8b0440d00           call 0x7a79a0
// 006d34f0  83c404               add esp, 4
// 006d34f3  85c0                 test eax, eax
// 006d34f5  7432                 je 0x6d3529
// 006d34f7  c700f457a400         mov dword ptr [eax], 0xa457f4
// 006d34fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3501  894808               mov dword ptr [eax + 8], ecx
// 006d3504  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3508  89500c               mov dword ptr [eax + 0xc], edx
// 006d350b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d350f  894810               mov dword ptr [eax + 0x10], ecx
// 006d3512  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d3516  895018               mov dword ptr [eax + 0x18], edx
// 006d3519  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d351d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006d3520  8b542420             mov edx, dword ptr [esp + 0x20]
// 006d3524  895020               mov dword ptr [eax + 0x20], edx
// 006d3527  eb02                 jmp 0x6d352b
// 006d3529  33c0                 xor eax, eax
// 006d352b  56                   push esi
// 006d352c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3530  6a00                 push 0
// 006d3532  8906                 mov dword ptr [esi], eax
// 006d3534  e861440d00           call 0x7a799a
// 006d3539  83c404               add esp, 4
// 006d353c  8bc6                 mov eax, esi
// 006d353e  5e                   pop esi
// 006d353f  59                   pop ecx
// 006d3540  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
