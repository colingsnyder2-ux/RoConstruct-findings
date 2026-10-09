// roc 2009-12 006e47a0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e47a0
//
// 006e47a0  51                   push ecx
// 006e47a1  6a28                 push 0x28
// 006e47a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e47ab  e8b0f01000           call 0x7f3860
// 006e47b0  83c404               add esp, 4
// 006e47b3  85c0                 test eax, eax
// 006e47b5  7432                 je 0x6e47e9
// 006e47b7  c700ecac9d00         mov dword ptr [eax], 0x9dacec
// 006e47bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e47c1  894808               mov dword ptr [eax + 8], ecx
// 006e47c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e47c8  89500c               mov dword ptr [eax + 0xc], edx
// 006e47cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e47cf  894810               mov dword ptr [eax + 0x10], ecx
// 006e47d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e47d6  895018               mov dword ptr [eax + 0x18], edx
// 006e47d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e47dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e47e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e47e4  895020               mov dword ptr [eax + 0x20], edx
// 006e47e7  eb02                 jmp 0x6e47eb
// 006e47e9  33c0                 xor eax, eax
// 006e47eb  56                   push esi
// 006e47ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e47f0  6a00                 push 0
// 006e47f2  8906                 mov dword ptr [esi], eax
// 006e47f4  e861f01000           call 0x7f385a
// 006e47f9  83c404               add esp, 4
// 006e47fc  8bc6                 mov eax, esi
// 006e47fe  5e                   pop esi
// 006e47ff  59                   pop ecx
// 006e4800  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
