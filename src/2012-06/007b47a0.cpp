// roc 2012-06 007b47a0  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b47a0
//
// 007b47a0  51                   push ecx
// 007b47a1  6a28                 push 0x28
// 007b47a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007b47ab  e86ad91c00           call 0x98211a
// 007b47b0  83c404               add esp, 4
// 007b47b3  85c0                 test eax, eax
// 007b47b5  7432                 je 0x7b47e9
// 007b47b7  c7002085bb00         mov dword ptr [eax], 0xbb8520
// 007b47bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b47c1  894808               mov dword ptr [eax + 8], ecx
// 007b47c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b47c8  89500c               mov dword ptr [eax + 0xc], edx
// 007b47cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b47cf  894810               mov dword ptr [eax + 0x10], ecx
// 007b47d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b47d6  895018               mov dword ptr [eax + 0x18], edx
// 007b47d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b47dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007b47e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b47e4  895020               mov dword ptr [eax + 0x20], edx
// 007b47e7  eb02                 jmp 0x7b47eb
// 007b47e9  33c0                 xor eax, eax
// 007b47eb  56                   push esi
// 007b47ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b47f0  6a00                 push 0
// 007b47f2  8906                 mov dword ptr [esi], eax
// 007b47f4  e81bd91c00           call 0x982114
// 007b47f9  83c404               add esp, 4
// 007b47fc  8bc6                 mov eax, esi
// 007b47fe  5e                   pop esi
// 007b47ff  59                   pop ecx
// 007b4800  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
