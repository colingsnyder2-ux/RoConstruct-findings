// roc 2009-06 0065d310  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d310
//
// 0065d310  51                   push ecx
// 0065d311  6a28                 push 0x28
// 0065d313  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d31b  e818b70b00           call 0x718a38
// 0065d320  83c404               add esp, 4
// 0065d323  85c0                 test eax, eax
// 0065d325  7432                 je 0x65d359
// 0065d327  c70064158e00         mov dword ptr [eax], 0x8e1564
// 0065d32d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d331  894808               mov dword ptr [eax + 8], ecx
// 0065d334  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d338  89500c               mov dword ptr [eax + 0xc], edx
// 0065d33b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d33f  894810               mov dword ptr [eax + 0x10], ecx
// 0065d342  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d346  895018               mov dword ptr [eax + 0x18], edx
// 0065d349  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d34d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d350  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d354  895020               mov dword ptr [eax + 0x20], edx
// 0065d357  eb02                 jmp 0x65d35b
// 0065d359  33c0                 xor eax, eax
// 0065d35b  56                   push esi
// 0065d35c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d360  6a00                 push 0
// 0065d362  8906                 mov dword ptr [esi], eax
// 0065d364  e8c9b60b00           call 0x718a32
// 0065d369  83c404               add esp, 4
// 0065d36c  8bc6                 mov eax, esi
// 0065d36e  5e                   pop esi
// 0065d36f  59                   pop ecx
// 0065d370  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
