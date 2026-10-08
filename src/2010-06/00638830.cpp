// roc 2010-06 00638830  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638830
//
// 00638830  51                   push ecx
// 00638831  6a28                 push 0x28
// 00638833  c744240400000000     mov dword ptr [esp + 4], 0
// 0063883b  e860f11600           call 0x7a79a0
// 00638840  83c404               add esp, 4
// 00638843  85c0                 test eax, eax
// 00638845  7432                 je 0x638879
// 00638847  c7001065a300         mov dword ptr [eax], 0xa36510
// 0063884d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638851  894808               mov dword ptr [eax + 8], ecx
// 00638854  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638858  89500c               mov dword ptr [eax + 0xc], edx
// 0063885b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063885f  894810               mov dword ptr [eax + 0x10], ecx
// 00638862  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638866  895018               mov dword ptr [eax + 0x18], edx
// 00638869  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063886d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638870  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638874  895020               mov dword ptr [eax + 0x20], edx
// 00638877  eb02                 jmp 0x63887b
// 00638879  33c0                 xor eax, eax
// 0063887b  56                   push esi
// 0063887c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638880  6a00                 push 0
// 00638882  8906                 mov dword ptr [esi], eax
// 00638884  e811f11600           call 0x7a799a
// 00638889  83c404               add esp, 4
// 0063888c  8bc6                 mov eax, esi
// 0063888e  5e                   pop esi
// 0063888f  59                   pop ecx
// 00638890  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
