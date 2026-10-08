// roc 2012-06 008221c0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008221c0
//
// 008221c0  51                   push ecx
// 008221c1  6a28                 push 0x28
// 008221c3  c744240400000000     mov dword ptr [esp + 4], 0
// 008221cb  e84aff1500           call 0x98211a
// 008221d0  83c404               add esp, 4
// 008221d3  85c0                 test eax, eax
// 008221d5  7432                 je 0x822209
// 008221d7  c7000cc0bc00         mov dword ptr [eax], 0xbcc00c
// 008221dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008221e1  894808               mov dword ptr [eax + 8], ecx
// 008221e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008221e8  89500c               mov dword ptr [eax + 0xc], edx
// 008221eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008221ef  894810               mov dword ptr [eax + 0x10], ecx
// 008221f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008221f6  895018               mov dword ptr [eax + 0x18], edx
// 008221f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008221fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00822200  8b542420             mov edx, dword ptr [esp + 0x20]
// 00822204  895020               mov dword ptr [eax + 0x20], edx
// 00822207  eb02                 jmp 0x82220b
// 00822209  33c0                 xor eax, eax
// 0082220b  56                   push esi
// 0082220c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00822210  6a00                 push 0
// 00822212  8906                 mov dword ptr [esi], eax
// 00822214  e8fbfe1500           call 0x982114
// 00822219  83c404               add esp, 4
// 0082221c  8bc6                 mov eax, esi
// 0082221e  5e                   pop esi
// 0082221f  59                   pop ecx
// 00822220  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
