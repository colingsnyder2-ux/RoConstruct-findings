// roc 2009-06 0065d230  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d230
//
// 0065d230  51                   push ecx
// 0065d231  6a28                 push 0x28
// 0065d233  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d23b  e8f8b70b00           call 0x718a38
// 0065d240  83c404               add esp, 4
// 0065d243  85c0                 test eax, eax
// 0065d245  7432                 je 0x65d279
// 0065d247  c7003c158e00         mov dword ptr [eax], 0x8e153c
// 0065d24d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d251  894808               mov dword ptr [eax + 8], ecx
// 0065d254  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d258  89500c               mov dword ptr [eax + 0xc], edx
// 0065d25b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d25f  894810               mov dword ptr [eax + 0x10], ecx
// 0065d262  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d266  895018               mov dword ptr [eax + 0x18], edx
// 0065d269  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d26d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d270  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d274  895020               mov dword ptr [eax + 0x20], edx
// 0065d277  eb02                 jmp 0x65d27b
// 0065d279  33c0                 xor eax, eax
// 0065d27b  56                   push esi
// 0065d27c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d280  6a00                 push 0
// 0065d282  8906                 mov dword ptr [esi], eax
// 0065d284  e8a9b70b00           call 0x718a32
// 0065d289  83c404               add esp, 4
// 0065d28c  8bc6                 mov eax, esi
// 0065d28e  5e                   pop esi
// 0065d28f  59                   pop ecx
// 0065d290  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
