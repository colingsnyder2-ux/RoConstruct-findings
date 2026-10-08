// roc 2012-06 007c5210  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5210
//
// 007c5210  51                   push ecx
// 007c5211  6a28                 push 0x28
// 007c5213  c744240400000000     mov dword ptr [esp + 4], 0
// 007c521b  e8face1b00           call 0x98211a
// 007c5220  83c404               add esp, 4
// 007c5223  85c0                 test eax, eax
// 007c5225  7432                 je 0x7c5259
// 007c5227  c700e0d4bb00         mov dword ptr [eax], 0xbbd4e0
// 007c522d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c5231  894808               mov dword ptr [eax + 8], ecx
// 007c5234  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c5238  89500c               mov dword ptr [eax + 0xc], edx
// 007c523b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c523f  894810               mov dword ptr [eax + 0x10], ecx
// 007c5242  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5246  895018               mov dword ptr [eax + 0x18], edx
// 007c5249  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c524d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c5250  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c5254  895020               mov dword ptr [eax + 0x20], edx
// 007c5257  eb02                 jmp 0x7c525b
// 007c5259  33c0                 xor eax, eax
// 007c525b  56                   push esi
// 007c525c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c5260  6a00                 push 0
// 007c5262  8906                 mov dword ptr [esi], eax
// 007c5264  e8abce1b00           call 0x982114
// 007c5269  83c404               add esp, 4
// 007c526c  8bc6                 mov eax, esi
// 007c526e  5e                   pop esi
// 007c526f  59                   pop ecx
// 007c5270  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
