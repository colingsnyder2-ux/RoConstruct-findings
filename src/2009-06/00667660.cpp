// roc 2009-06 00667660  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00667660
//
// 00667660  51                   push ecx
// 00667661  6a28                 push 0x28
// 00667663  c744240400000000     mov dword ptr [esp + 4], 0
// 0066766b  e8c8130b00           call 0x718a38
// 00667670  83c404               add esp, 4
// 00667673  85c0                 test eax, eax
// 00667675  7432                 je 0x6676a9
// 00667677  c700d82d8e00         mov dword ptr [eax], 0x8e2dd8
// 0066767d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667681  894808               mov dword ptr [eax + 8], ecx
// 00667684  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667688  89500c               mov dword ptr [eax + 0xc], edx
// 0066768b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066768f  894810               mov dword ptr [eax + 0x10], ecx
// 00667692  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667696  895018               mov dword ptr [eax + 0x18], edx
// 00667699  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066769d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006676a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006676a4  895020               mov dword ptr [eax + 0x20], edx
// 006676a7  eb02                 jmp 0x6676ab
// 006676a9  33c0                 xor eax, eax
// 006676ab  56                   push esi
// 006676ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006676b0  6a00                 push 0
// 006676b2  8906                 mov dword ptr [esi], eax
// 006676b4  e879130b00           call 0x718a32
// 006676b9  83c404               add esp, 4
// 006676bc  8bc6                 mov eax, esi
// 006676be  5e                   pop esi
// 006676bf  59                   pop ecx
// 006676c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
