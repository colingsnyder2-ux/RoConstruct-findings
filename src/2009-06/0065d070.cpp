// roc 2009-06 0065d070  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d070
//
// 0065d070  51                   push ecx
// 0065d071  6a28                 push 0x28
// 0065d073  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d07b  e8b8b90b00           call 0x718a38
// 0065d080  83c404               add esp, 4
// 0065d083  85c0                 test eax, eax
// 0065d085  7432                 je 0x65d0b9
// 0065d087  c700ec148e00         mov dword ptr [eax], 0x8e14ec
// 0065d08d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d091  894808               mov dword ptr [eax + 8], ecx
// 0065d094  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d098  89500c               mov dword ptr [eax + 0xc], edx
// 0065d09b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d09f  894810               mov dword ptr [eax + 0x10], ecx
// 0065d0a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d0a6  895018               mov dword ptr [eax + 0x18], edx
// 0065d0a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d0ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d0b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d0b4  895020               mov dword ptr [eax + 0x20], edx
// 0065d0b7  eb02                 jmp 0x65d0bb
// 0065d0b9  33c0                 xor eax, eax
// 0065d0bb  56                   push esi
// 0065d0bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d0c0  6a00                 push 0
// 0065d0c2  8906                 mov dword ptr [esi], eax
// 0065d0c4  e869b90b00           call 0x718a32
// 0065d0c9  83c404               add esp, 4
// 0065d0cc  8bc6                 mov eax, esi
// 0065d0ce  5e                   pop esi
// 0065d0cf  59                   pop ecx
// 0065d0d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
