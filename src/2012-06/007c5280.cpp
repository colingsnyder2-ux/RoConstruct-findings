// roc 2012-06 007c5280  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5280
//
// 007c5280  51                   push ecx
// 007c5281  6a28                 push 0x28
// 007c5283  c744240400000000     mov dword ptr [esp + 4], 0
// 007c528b  e88ace1b00           call 0x98211a
// 007c5290  83c404               add esp, 4
// 007c5293  85c0                 test eax, eax
// 007c5295  7432                 je 0x7c52c9
// 007c5297  c700f4d4bb00         mov dword ptr [eax], 0xbbd4f4
// 007c529d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c52a1  894808               mov dword ptr [eax + 8], ecx
// 007c52a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c52a8  89500c               mov dword ptr [eax + 0xc], edx
// 007c52ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c52af  894810               mov dword ptr [eax + 0x10], ecx
// 007c52b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c52b6  895018               mov dword ptr [eax + 0x18], edx
// 007c52b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c52bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c52c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c52c4  895020               mov dword ptr [eax + 0x20], edx
// 007c52c7  eb02                 jmp 0x7c52cb
// 007c52c9  33c0                 xor eax, eax
// 007c52cb  56                   push esi
// 007c52cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c52d0  6a00                 push 0
// 007c52d2  8906                 mov dword ptr [esi], eax
// 007c52d4  e83bce1b00           call 0x982114
// 007c52d9  83c404               add esp, 4
// 007c52dc  8bc6                 mov eax, esi
// 007c52de  5e                   pop esi
// 007c52df  59                   pop ecx
// 007c52e0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
