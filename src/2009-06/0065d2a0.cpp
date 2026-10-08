// roc 2009-06 0065d2a0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d2a0
//
// 0065d2a0  51                   push ecx
// 0065d2a1  6a28                 push 0x28
// 0065d2a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d2ab  e888b70b00           call 0x718a38
// 0065d2b0  83c404               add esp, 4
// 0065d2b3  85c0                 test eax, eax
// 0065d2b5  7432                 je 0x65d2e9
// 0065d2b7  c70050158e00         mov dword ptr [eax], 0x8e1550
// 0065d2bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d2c1  894808               mov dword ptr [eax + 8], ecx
// 0065d2c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d2c8  89500c               mov dword ptr [eax + 0xc], edx
// 0065d2cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d2cf  894810               mov dword ptr [eax + 0x10], ecx
// 0065d2d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d2d6  895018               mov dword ptr [eax + 0x18], edx
// 0065d2d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d2dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d2e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d2e4  895020               mov dword ptr [eax + 0x20], edx
// 0065d2e7  eb02                 jmp 0x65d2eb
// 0065d2e9  33c0                 xor eax, eax
// 0065d2eb  56                   push esi
// 0065d2ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d2f0  6a00                 push 0
// 0065d2f2  8906                 mov dword ptr [esi], eax
// 0065d2f4  e839b70b00           call 0x718a32
// 0065d2f9  83c404               add esp, 4
// 0065d2fc  8bc6                 mov eax, esi
// 0065d2fe  5e                   pop esi
// 0065d2ff  59                   pop ecx
// 0065d300  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
