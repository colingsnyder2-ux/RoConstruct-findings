// roc 2009-06 0065d1c0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d1c0
//
// 0065d1c0  51                   push ecx
// 0065d1c1  6a28                 push 0x28
// 0065d1c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d1cb  e868b80b00           call 0x718a38
// 0065d1d0  83c404               add esp, 4
// 0065d1d3  85c0                 test eax, eax
// 0065d1d5  7432                 je 0x65d209
// 0065d1d7  c70028158e00         mov dword ptr [eax], 0x8e1528
// 0065d1dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d1e1  894808               mov dword ptr [eax + 8], ecx
// 0065d1e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d1e8  89500c               mov dword ptr [eax + 0xc], edx
// 0065d1eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d1ef  894810               mov dword ptr [eax + 0x10], ecx
// 0065d1f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d1f6  895018               mov dword ptr [eax + 0x18], edx
// 0065d1f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d1fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d200  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d204  895020               mov dword ptr [eax + 0x20], edx
// 0065d207  eb02                 jmp 0x65d20b
// 0065d209  33c0                 xor eax, eax
// 0065d20b  56                   push esi
// 0065d20c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d210  6a00                 push 0
// 0065d212  8906                 mov dword ptr [esi], eax
// 0065d214  e819b80b00           call 0x718a32
// 0065d219  83c404               add esp, 4
// 0065d21c  8bc6                 mov eax, esi
// 0065d21e  5e                   pop esi
// 0065d21f  59                   pop ecx
// 0065d220  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
