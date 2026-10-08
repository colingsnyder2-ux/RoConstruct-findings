// roc 2010-06 006c5020  unit: RBX::VFlagStandService::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c5020
//
// 006c5020  51                   push ecx
// 006c5021  6a28                 push 0x28
// 006c5023  c744240400000000     mov dword ptr [esp + 4], 0
// 006c502b  e870290e00           call 0x7a79a0
// 006c5030  83c404               add esp, 4
// 006c5033  85c0                 test eax, eax
// 006c5035  7432                 je 0x6c5069
// 006c5037  c7002c47a400         mov dword ptr [eax], 0xa4472c
// 006c503d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c5041  894808               mov dword ptr [eax + 8], ecx
// 006c5044  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c5048  89500c               mov dword ptr [eax + 0xc], edx
// 006c504b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c504f  894810               mov dword ptr [eax + 0x10], ecx
// 006c5052  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c5056  895018               mov dword ptr [eax + 0x18], edx
// 006c5059  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c505d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006c5060  8b542420             mov edx, dword ptr [esp + 0x20]
// 006c5064  895020               mov dword ptr [eax + 0x20], edx
// 006c5067  eb02                 jmp 0x6c506b
// 006c5069  33c0                 xor eax, eax
// 006c506b  56                   push esi
// 006c506c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c5070  6a00                 push 0
// 006c5072  8906                 mov dword ptr [esi], eax
// 006c5074  e821290e00           call 0x7a799a
// 006c5079  83c404               add esp, 4
// 006c507c  8bc6                 mov eax, esi
// 006c507e  5e                   pop esi
// 006c507f  59                   pop ecx
// 006c5080  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
