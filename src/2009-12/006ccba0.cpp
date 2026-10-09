// roc 2009-12 006ccba0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccba0
//
// 006ccba0  51                   push ecx
// 006ccba1  6a28                 push 0x28
// 006ccba3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccbab  e8b06c1200           call 0x7f3860
// 006ccbb0  83c404               add esp, 4
// 006ccbb3  85c0                 test eax, eax
// 006ccbb5  7432                 je 0x6ccbe9
// 006ccbb7  c70038789d00         mov dword ptr [eax], 0x9d7838
// 006ccbbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccbc1  894808               mov dword ptr [eax + 8], ecx
// 006ccbc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccbc8  89500c               mov dword ptr [eax + 0xc], edx
// 006ccbcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccbcf  894810               mov dword ptr [eax + 0x10], ecx
// 006ccbd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccbd6  895018               mov dword ptr [eax + 0x18], edx
// 006ccbd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccbdd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccbe0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccbe4  895020               mov dword ptr [eax + 0x20], edx
// 006ccbe7  eb02                 jmp 0x6ccbeb
// 006ccbe9  33c0                 xor eax, eax
// 006ccbeb  56                   push esi
// 006ccbec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccbf0  6a00                 push 0
// 006ccbf2  8906                 mov dword ptr [esi], eax
// 006ccbf4  e8616c1200           call 0x7f385a
// 006ccbf9  83c404               add esp, 4
// 006ccbfc  8bc6                 mov eax, esi
// 006ccbfe  5e                   pop esi
// 006ccbff  59                   pop ecx
// 006ccc00  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
