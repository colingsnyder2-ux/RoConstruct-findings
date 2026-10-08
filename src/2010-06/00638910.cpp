// roc 2010-06 00638910  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638910
//
// 00638910  51                   push ecx
// 00638911  6a28                 push 0x28
// 00638913  c744240400000000     mov dword ptr [esp + 4], 0
// 0063891b  e880f01600           call 0x7a79a0
// 00638920  83c404               add esp, 4
// 00638923  85c0                 test eax, eax
// 00638925  7432                 je 0x638959
// 00638927  c7004065a300         mov dword ptr [eax], 0xa36540
// 0063892d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638931  894808               mov dword ptr [eax + 8], ecx
// 00638934  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638938  89500c               mov dword ptr [eax + 0xc], edx
// 0063893b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063893f  894810               mov dword ptr [eax + 0x10], ecx
// 00638942  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638946  895018               mov dword ptr [eax + 0x18], edx
// 00638949  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063894d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638950  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638954  895020               mov dword ptr [eax + 0x20], edx
// 00638957  eb02                 jmp 0x63895b
// 00638959  33c0                 xor eax, eax
// 0063895b  56                   push esi
// 0063895c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638960  6a00                 push 0
// 00638962  8906                 mov dword ptr [esi], eax
// 00638964  e831f01600           call 0x7a799a
// 00638969  83c404               add esp, 4
// 0063896c  8bc6                 mov eax, esi
// 0063896e  5e                   pop esi
// 0063896f  59                   pop ecx
// 00638970  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
