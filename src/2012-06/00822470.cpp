// roc 2012-06 00822470  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00822470
//
// 00822470  51                   push ecx
// 00822471  6a28                 push 0x28
// 00822473  c744240400000000     mov dword ptr [esp + 4], 0
// 0082247b  e89afc1500           call 0x98211a
// 00822480  83c404               add esp, 4
// 00822483  85c0                 test eax, eax
// 00822485  7432                 je 0x8224b9
// 00822487  c70090c0bc00         mov dword ptr [eax], 0xbcc090
// 0082248d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00822491  894808               mov dword ptr [eax + 8], ecx
// 00822494  8b542410             mov edx, dword ptr [esp + 0x10]
// 00822498  89500c               mov dword ptr [eax + 0xc], edx
// 0082249b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082249f  894810               mov dword ptr [eax + 0x10], ecx
// 008224a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008224a6  895018               mov dword ptr [eax + 0x18], edx
// 008224a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008224ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 008224b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008224b4  895020               mov dword ptr [eax + 0x20], edx
// 008224b7  eb02                 jmp 0x8224bb
// 008224b9  33c0                 xor eax, eax
// 008224bb  56                   push esi
// 008224bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008224c0  6a00                 push 0
// 008224c2  8906                 mov dword ptr [esi], eax
// 008224c4  e84bfc1500           call 0x982114
// 008224c9  83c404               add esp, 4
// 008224cc  8bc6                 mov eax, esi
// 008224ce  5e                   pop esi
// 008224cf  59                   pop ecx
// 008224d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
