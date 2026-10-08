// roc 2009-06 00671d70  unit: RBX::VSpawnLocation::?$BoundPropGetSet  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671d70
//
// 00671d70  51                   push ecx
// 00671d71  6a28                 push 0x28
// 00671d73  c744240400000000     mov dword ptr [esp + 4], 0
// 00671d7b  e8b86c0a00           call 0x718a38
// 00671d80  83c404               add esp, 4
// 00671d83  85c0                 test eax, eax
// 00671d85  7432                 je 0x671db9
// 00671d87  c700843a8e00         mov dword ptr [eax], 0x8e3a84
// 00671d8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00671d91  894808               mov dword ptr [eax + 8], ecx
// 00671d94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00671d98  89500c               mov dword ptr [eax + 0xc], edx
// 00671d9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00671d9f  894810               mov dword ptr [eax + 0x10], ecx
// 00671da2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00671da6  895018               mov dword ptr [eax + 0x18], edx
// 00671da9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00671dad  89481c               mov dword ptr [eax + 0x1c], ecx
// 00671db0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00671db4  895020               mov dword ptr [eax + 0x20], edx
// 00671db7  eb02                 jmp 0x671dbb
// 00671db9  33c0                 xor eax, eax
// 00671dbb  56                   push esi
// 00671dbc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671dc0  6a00                 push 0
// 00671dc2  8906                 mov dword ptr [esi], eax
// 00671dc4  e8696c0a00           call 0x718a32
// 00671dc9  83c404               add esp, 4
// 00671dcc  8bc6                 mov eax, esi
// 00671dce  5e                   pop esi
// 00671dcf  59                   pop ecx
// 00671dd0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
