// roc 2010-06 00602960  unit: RBX::HeartbeatInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602960
//
// 00602960  51                   push ecx
// 00602961  6a28                 push 0x28
// 00602963  c744240400000000     mov dword ptr [esp + 4], 0
// 0060296b  e830501a00           call 0x7a79a0
// 00602970  83c404               add esp, 4
// 00602973  85c0                 test eax, eax
// 00602975  7432                 je 0x6029a9
// 00602977  c700180ca300         mov dword ptr [eax], 0xa30c18
// 0060297d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602981  894808               mov dword ptr [eax + 8], ecx
// 00602984  8b542410             mov edx, dword ptr [esp + 0x10]
// 00602988  89500c               mov dword ptr [eax + 0xc], edx
// 0060298b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060298f  894810               mov dword ptr [eax + 0x10], ecx
// 00602992  8b542418             mov edx, dword ptr [esp + 0x18]
// 00602996  895018               mov dword ptr [eax + 0x18], edx
// 00602999  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060299d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006029a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006029a4  895020               mov dword ptr [eax + 0x20], edx
// 006029a7  eb02                 jmp 0x6029ab
// 006029a9  33c0                 xor eax, eax
// 006029ab  56                   push esi
// 006029ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006029b0  6a00                 push 0
// 006029b2  8906                 mov dword ptr [esi], eax
// 006029b4  e8e14f1a00           call 0x7a799a
// 006029b9  83c404               add esp, 4
// 006029bc  8bc6                 mov eax, esi
// 006029be  5e                   pop esi
// 006029bf  59                   pop ecx
// 006029c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
