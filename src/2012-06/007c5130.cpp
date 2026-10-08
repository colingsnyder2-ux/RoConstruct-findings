// roc 2012-06 007c5130  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5130
//
// 007c5130  51                   push ecx
// 007c5131  6a28                 push 0x28
// 007c5133  c744240400000000     mov dword ptr [esp + 4], 0
// 007c513b  e8dacf1b00           call 0x98211a
// 007c5140  83c404               add esp, 4
// 007c5143  85c0                 test eax, eax
// 007c5145  7432                 je 0x7c5179
// 007c5147  c700b8d4bb00         mov dword ptr [eax], 0xbbd4b8
// 007c514d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c5151  894808               mov dword ptr [eax + 8], ecx
// 007c5154  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c5158  89500c               mov dword ptr [eax + 0xc], edx
// 007c515b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c515f  894810               mov dword ptr [eax + 0x10], ecx
// 007c5162  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5166  895018               mov dword ptr [eax + 0x18], edx
// 007c5169  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c516d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c5170  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c5174  895020               mov dword ptr [eax + 0x20], edx
// 007c5177  eb02                 jmp 0x7c517b
// 007c5179  33c0                 xor eax, eax
// 007c517b  56                   push esi
// 007c517c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c5180  6a00                 push 0
// 007c5182  8906                 mov dword ptr [esi], eax
// 007c5184  e88bcf1b00           call 0x982114
// 007c5189  83c404               add esp, 4
// 007c518c  8bc6                 mov eax, esi
// 007c518e  5e                   pop esi
// 007c518f  59                   pop ecx
// 007c5190  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
