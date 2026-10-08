// roc 2012-06 007c52f0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c52f0
//
// 007c52f0  51                   push ecx
// 007c52f1  6a28                 push 0x28
// 007c52f3  c744240400000000     mov dword ptr [esp + 4], 0
// 007c52fb  e81ace1b00           call 0x98211a
// 007c5300  83c404               add esp, 4
// 007c5303  85c0                 test eax, eax
// 007c5305  7432                 je 0x7c5339
// 007c5307  c70008d5bb00         mov dword ptr [eax], 0xbbd508
// 007c530d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c5311  894808               mov dword ptr [eax + 8], ecx
// 007c5314  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c5318  89500c               mov dword ptr [eax + 0xc], edx
// 007c531b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c531f  894810               mov dword ptr [eax + 0x10], ecx
// 007c5322  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5326  895018               mov dword ptr [eax + 0x18], edx
// 007c5329  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c532d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c5330  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c5334  895020               mov dword ptr [eax + 0x20], edx
// 007c5337  eb02                 jmp 0x7c533b
// 007c5339  33c0                 xor eax, eax
// 007c533b  56                   push esi
// 007c533c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c5340  6a00                 push 0
// 007c5342  8906                 mov dword ptr [esi], eax
// 007c5344  e8cbcd1b00           call 0x982114
// 007c5349  83c404               add esp, 4
// 007c534c  8bc6                 mov eax, esi
// 007c534e  5e                   pop esi
// 007c534f  59                   pop ecx
// 007c5350  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
