// roc 2009-12 006e4500  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4500
//
// 006e4500  51                   push ecx
// 006e4501  6a28                 push 0x28
// 006e4503  c744240400000000     mov dword ptr [esp + 4], 0
// 006e450b  e850f31000           call 0x7f3860
// 006e4510  83c404               add esp, 4
// 006e4513  85c0                 test eax, eax
// 006e4515  7432                 je 0x6e4549
// 006e4517  c7005cac9d00         mov dword ptr [eax], 0x9dac5c
// 006e451d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e4521  894808               mov dword ptr [eax + 8], ecx
// 006e4524  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4528  89500c               mov dword ptr [eax + 0xc], edx
// 006e452b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e452f  894810               mov dword ptr [eax + 0x10], ecx
// 006e4532  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e4536  895018               mov dword ptr [eax + 0x18], edx
// 006e4539  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e453d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e4540  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4544  895020               mov dword ptr [eax + 0x20], edx
// 006e4547  eb02                 jmp 0x6e454b
// 006e4549  33c0                 xor eax, eax
// 006e454b  56                   push esi
// 006e454c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e4550  6a00                 push 0
// 006e4552  8906                 mov dword ptr [esi], eax
// 006e4554  e801f31000           call 0x7f385a
// 006e4559  83c404               add esp, 4
// 006e455c  8bc6                 mov eax, esi
// 006e455e  5e                   pop esi
// 006e455f  59                   pop ecx
// 006e4560  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
