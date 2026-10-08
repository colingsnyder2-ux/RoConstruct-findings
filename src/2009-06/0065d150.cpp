// roc 2009-06 0065d150  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d150
//
// 0065d150  51                   push ecx
// 0065d151  6a28                 push 0x28
// 0065d153  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d15b  e8d8b80b00           call 0x718a38
// 0065d160  83c404               add esp, 4
// 0065d163  85c0                 test eax, eax
// 0065d165  7432                 je 0x65d199
// 0065d167  c70014158e00         mov dword ptr [eax], 0x8e1514
// 0065d16d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d171  894808               mov dword ptr [eax + 8], ecx
// 0065d174  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d178  89500c               mov dword ptr [eax + 0xc], edx
// 0065d17b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d17f  894810               mov dword ptr [eax + 0x10], ecx
// 0065d182  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d186  895018               mov dword ptr [eax + 0x18], edx
// 0065d189  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d18d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d190  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d194  895020               mov dword ptr [eax + 0x20], edx
// 0065d197  eb02                 jmp 0x65d19b
// 0065d199  33c0                 xor eax, eax
// 0065d19b  56                   push esi
// 0065d19c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d1a0  6a00                 push 0
// 0065d1a2  8906                 mov dword ptr [esi], eax
// 0065d1a4  e889b80b00           call 0x718a32
// 0065d1a9  83c404               add esp, 4
// 0065d1ac  8bc6                 mov eax, esi
// 0065d1ae  5e                   pop esi
// 0065d1af  59                   pop ecx
// 0065d1b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
