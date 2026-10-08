// roc 2010-06 006386e0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006386e0
//
// 006386e0  51                   push ecx
// 006386e1  6a28                 push 0x28
// 006386e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006386eb  e8b0f21600           call 0x7a79a0
// 006386f0  83c404               add esp, 4
// 006386f3  85c0                 test eax, eax
// 006386f5  7432                 je 0x638729
// 006386f7  c700c864a300         mov dword ptr [eax], 0xa364c8
// 006386fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638701  894808               mov dword ptr [eax + 8], ecx
// 00638704  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638708  89500c               mov dword ptr [eax + 0xc], edx
// 0063870b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063870f  894810               mov dword ptr [eax + 0x10], ecx
// 00638712  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638716  895018               mov dword ptr [eax + 0x18], edx
// 00638719  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063871d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638720  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638724  895020               mov dword ptr [eax + 0x20], edx
// 00638727  eb02                 jmp 0x63872b
// 00638729  33c0                 xor eax, eax
// 0063872b  56                   push esi
// 0063872c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638730  6a00                 push 0
// 00638732  8906                 mov dword ptr [esi], eax
// 00638734  e861f21600           call 0x7a799a
// 00638739  83c404               add esp, 4
// 0063873c  8bc6                 mov eax, esi
// 0063873e  5e                   pop esi
// 0063873f  59                   pop ecx
// 00638740  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
