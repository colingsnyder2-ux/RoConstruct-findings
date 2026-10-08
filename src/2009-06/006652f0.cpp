// roc 2009-06 006652f0  unit: RBX::ExtrudedPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006652f0
//
// 006652f0  51                   push ecx
// 006652f1  6a28                 push 0x28
// 006652f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006652fb  e838370b00           call 0x718a38
// 00665300  83c404               add esp, 4
// 00665303  85c0                 test eax, eax
// 00665305  7432                 je 0x665339
// 00665307  c70000258e00         mov dword ptr [eax], 0x8e2500
// 0066530d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00665311  894808               mov dword ptr [eax + 8], ecx
// 00665314  8b542410             mov edx, dword ptr [esp + 0x10]
// 00665318  89500c               mov dword ptr [eax + 0xc], edx
// 0066531b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066531f  894810               mov dword ptr [eax + 0x10], ecx
// 00665322  8b542418             mov edx, dword ptr [esp + 0x18]
// 00665326  895018               mov dword ptr [eax + 0x18], edx
// 00665329  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066532d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00665330  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665334  895020               mov dword ptr [eax + 0x20], edx
// 00665337  eb02                 jmp 0x66533b
// 00665339  33c0                 xor eax, eax
// 0066533b  56                   push esi
// 0066533c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00665340  6a00                 push 0
// 00665342  8906                 mov dword ptr [esi], eax
// 00665344  e8e9360b00           call 0x718a32
// 00665349  83c404               add esp, 4
// 0066534c  8bc6                 mov eax, esi
// 0066534e  5e                   pop esi
// 0066534f  59                   pop ecx
// 00665350  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
