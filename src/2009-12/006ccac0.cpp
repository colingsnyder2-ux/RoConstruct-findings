// roc 2009-12 006ccac0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccac0
//
// 006ccac0  51                   push ecx
// 006ccac1  6a28                 push 0x28
// 006ccac3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccacb  e8906d1200           call 0x7f3860
// 006ccad0  83c404               add esp, 4
// 006ccad3  85c0                 test eax, eax
// 006ccad5  7432                 je 0x6ccb09
// 006ccad7  c70008789d00         mov dword ptr [eax], 0x9d7808
// 006ccadd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccae1  894808               mov dword ptr [eax + 8], ecx
// 006ccae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccae8  89500c               mov dword ptr [eax + 0xc], edx
// 006ccaeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccaef  894810               mov dword ptr [eax + 0x10], ecx
// 006ccaf2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccaf6  895018               mov dword ptr [eax + 0x18], edx
// 006ccaf9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccafd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccb00  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccb04  895020               mov dword ptr [eax + 0x20], edx
// 006ccb07  eb02                 jmp 0x6ccb0b
// 006ccb09  33c0                 xor eax, eax
// 006ccb0b  56                   push esi
// 006ccb0c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccb10  6a00                 push 0
// 006ccb12  8906                 mov dword ptr [esi], eax
// 006ccb14  e8416d1200           call 0x7f385a
// 006ccb19  83c404               add esp, 4
// 006ccb1c  8bc6                 mov eax, esi
// 006ccb1e  5e                   pop esi
// 006ccb1f  59                   pop ecx
// 006ccb20  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
