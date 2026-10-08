// roc 2010-06 006388a0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006388a0
//
// 006388a0  51                   push ecx
// 006388a1  6a28                 push 0x28
// 006388a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006388ab  e8f0f01600           call 0x7a79a0
// 006388b0  83c404               add esp, 4
// 006388b3  85c0                 test eax, eax
// 006388b5  7432                 je 0x6388e9
// 006388b7  c7002865a300         mov dword ptr [eax], 0xa36528
// 006388bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006388c1  894808               mov dword ptr [eax + 8], ecx
// 006388c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006388c8  89500c               mov dword ptr [eax + 0xc], edx
// 006388cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006388cf  894810               mov dword ptr [eax + 0x10], ecx
// 006388d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006388d6  895018               mov dword ptr [eax + 0x18], edx
// 006388d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006388dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006388e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006388e4  895020               mov dword ptr [eax + 0x20], edx
// 006388e7  eb02                 jmp 0x6388eb
// 006388e9  33c0                 xor eax, eax
// 006388eb  56                   push esi
// 006388ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006388f0  6a00                 push 0
// 006388f2  8906                 mov dword ptr [esi], eax
// 006388f4  e8a1f01600           call 0x7a799a
// 006388f9  83c404               add esp, 4
// 006388fc  8bc6                 mov eax, esi
// 006388fe  5e                   pop esi
// 006388ff  59                   pop ecx
// 00638900  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
