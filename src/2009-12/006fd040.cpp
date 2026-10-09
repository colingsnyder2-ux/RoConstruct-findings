// roc 2009-12 006fd040  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fd040
//
// 006fd040  51                   push ecx
// 006fd041  6a28                 push 0x28
// 006fd043  c744240400000000     mov dword ptr [esp + 4], 0
// 006fd04b  e810680f00           call 0x7f3860
// 006fd050  83c404               add esp, 4
// 006fd053  85c0                 test eax, eax
// 006fd055  7432                 je 0x6fd089
// 006fd057  c70094d29d00         mov dword ptr [eax], 0x9dd294
// 006fd05d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fd061  894808               mov dword ptr [eax + 8], ecx
// 006fd064  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd068  89500c               mov dword ptr [eax + 0xc], edx
// 006fd06b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fd06f  894810               mov dword ptr [eax + 0x10], ecx
// 006fd072  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fd076  895018               mov dword ptr [eax + 0x18], edx
// 006fd079  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd07d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006fd080  8b542420             mov edx, dword ptr [esp + 0x20]
// 006fd084  895020               mov dword ptr [eax + 0x20], edx
// 006fd087  eb02                 jmp 0x6fd08b
// 006fd089  33c0                 xor eax, eax
// 006fd08b  56                   push esi
// 006fd08c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd090  6a00                 push 0
// 006fd092  8906                 mov dword ptr [esi], eax
// 006fd094  e8c1670f00           call 0x7f385a
// 006fd099  83c404               add esp, 4
// 006fd09c  8bc6                 mov eax, esi
// 006fd09e  5e                   pop esi
// 006fd09f  59                   pop ecx
// 006fd0a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
