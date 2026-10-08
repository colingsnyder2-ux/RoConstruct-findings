// roc 2009-06 006a25a0  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a25a0
//
// 006a25a0  51                   push ecx
// 006a25a1  6a28                 push 0x28
// 006a25a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006a25ab  e888640700           call 0x718a38
// 006a25b0  83c404               add esp, 4
// 006a25b3  85c0                 test eax, eax
// 006a25b5  7432                 je 0x6a25e9
// 006a25b7  c70044968e00         mov dword ptr [eax], 0x8e9644
// 006a25bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a25c1  894808               mov dword ptr [eax + 8], ecx
// 006a25c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a25c8  89500c               mov dword ptr [eax + 0xc], edx
// 006a25cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a25cf  894810               mov dword ptr [eax + 0x10], ecx
// 006a25d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a25d6  895018               mov dword ptr [eax + 0x18], edx
// 006a25d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a25dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006a25e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a25e4  895020               mov dword ptr [eax + 0x20], edx
// 006a25e7  eb02                 jmp 0x6a25eb
// 006a25e9  33c0                 xor eax, eax
// 006a25eb  56                   push esi
// 006a25ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a25f0  6a00                 push 0
// 006a25f2  8906                 mov dword ptr [esi], eax
// 006a25f4  e839640700           call 0x718a32
// 006a25f9  83c404               add esp, 4
// 006a25fc  8bc6                 mov eax, esi
// 006a25fe  5e                   pop esi
// 006a25ff  59                   pop ecx
// 006a2600  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
