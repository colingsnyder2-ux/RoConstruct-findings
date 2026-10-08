// roc 2010-06 00638670  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638670
//
// 00638670  51                   push ecx
// 00638671  6a28                 push 0x28
// 00638673  c744240400000000     mov dword ptr [esp + 4], 0
// 0063867b  e820f31600           call 0x7a79a0
// 00638680  83c404               add esp, 4
// 00638683  85c0                 test eax, eax
// 00638685  7432                 je 0x6386b9
// 00638687  c700b064a300         mov dword ptr [eax], 0xa364b0
// 0063868d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638691  894808               mov dword ptr [eax + 8], ecx
// 00638694  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638698  89500c               mov dword ptr [eax + 0xc], edx
// 0063869b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063869f  894810               mov dword ptr [eax + 0x10], ecx
// 006386a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006386a6  895018               mov dword ptr [eax + 0x18], edx
// 006386a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006386ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 006386b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006386b4  895020               mov dword ptr [eax + 0x20], edx
// 006386b7  eb02                 jmp 0x6386bb
// 006386b9  33c0                 xor eax, eax
// 006386bb  56                   push esi
// 006386bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006386c0  6a00                 push 0
// 006386c2  8906                 mov dword ptr [esi], eax
// 006386c4  e8d1f21600           call 0x7a799a
// 006386c9  83c404               add esp, 4
// 006386cc  8bc6                 mov eax, esi
// 006386ce  5e                   pop esi
// 006386cf  59                   pop ecx
// 006386d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
