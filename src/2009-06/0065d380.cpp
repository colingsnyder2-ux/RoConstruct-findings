// roc 2009-06 0065d380  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d380
//
// 0065d380  51                   push ecx
// 0065d381  6a28                 push 0x28
// 0065d383  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d38b  e8a8b60b00           call 0x718a38
// 0065d390  83c404               add esp, 4
// 0065d393  85c0                 test eax, eax
// 0065d395  7432                 je 0x65d3c9
// 0065d397  c70078158e00         mov dword ptr [eax], 0x8e1578
// 0065d39d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d3a1  894808               mov dword ptr [eax + 8], ecx
// 0065d3a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d3a8  89500c               mov dword ptr [eax + 0xc], edx
// 0065d3ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d3af  894810               mov dword ptr [eax + 0x10], ecx
// 0065d3b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d3b6  895018               mov dword ptr [eax + 0x18], edx
// 0065d3b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d3bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d3c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d3c4  895020               mov dword ptr [eax + 0x20], edx
// 0065d3c7  eb02                 jmp 0x65d3cb
// 0065d3c9  33c0                 xor eax, eax
// 0065d3cb  56                   push esi
// 0065d3cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d3d0  6a00                 push 0
// 0065d3d2  8906                 mov dword ptr [esi], eax
// 0065d3d4  e859b60b00           call 0x718a32
// 0065d3d9  83c404               add esp, 4
// 0065d3dc  8bc6                 mov eax, esi
// 0065d3de  5e                   pop esi
// 0065d3df  59                   pop ecx
// 0065d3e0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
