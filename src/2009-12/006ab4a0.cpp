// roc 2009-12 006ab4a0  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ab4a0
//
// 006ab4a0  51                   push ecx
// 006ab4a1  6a28                 push 0x28
// 006ab4a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ab4ab  e8b0831400           call 0x7f3860
// 006ab4b0  83c404               add esp, 4
// 006ab4b3  85c0                 test eax, eax
// 006ab4b5  7432                 je 0x6ab4e9
// 006ab4b7  c700b4319d00         mov dword ptr [eax], 0x9d31b4
// 006ab4bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ab4c1  894808               mov dword ptr [eax + 8], ecx
// 006ab4c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ab4c8  89500c               mov dword ptr [eax + 0xc], edx
// 006ab4cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ab4cf  894810               mov dword ptr [eax + 0x10], ecx
// 006ab4d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ab4d6  895018               mov dword ptr [eax + 0x18], edx
// 006ab4d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ab4dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ab4e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ab4e4  895020               mov dword ptr [eax + 0x20], edx
// 006ab4e7  eb02                 jmp 0x6ab4eb
// 006ab4e9  33c0                 xor eax, eax
// 006ab4eb  56                   push esi
// 006ab4ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ab4f0  6a00                 push 0
// 006ab4f2  8906                 mov dword ptr [esi], eax
// 006ab4f4  e861831400           call 0x7f385a
// 006ab4f9  83c404               add esp, 4
// 006ab4fc  8bc6                 mov eax, esi
// 006ab4fe  5e                   pop esi
// 006ab4ff  59                   pop ecx
// 006ab500  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
