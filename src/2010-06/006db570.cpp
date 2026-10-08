// roc 2010-06 006db570  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db570
//
// 006db570  51                   push ecx
// 006db571  6a28                 push 0x28
// 006db573  c744240400000000     mov dword ptr [esp + 4], 0
// 006db57b  e820c40c00           call 0x7a79a0
// 006db580  83c404               add esp, 4
// 006db583  85c0                 test eax, eax
// 006db585  7432                 je 0x6db5b9
// 006db587  c700e06ca400         mov dword ptr [eax], 0xa46ce0
// 006db58d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006db591  894808               mov dword ptr [eax + 8], ecx
// 006db594  8b542410             mov edx, dword ptr [esp + 0x10]
// 006db598  89500c               mov dword ptr [eax + 0xc], edx
// 006db59b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006db59f  894810               mov dword ptr [eax + 0x10], ecx
// 006db5a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006db5a6  895018               mov dword ptr [eax + 0x18], edx
// 006db5a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006db5ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 006db5b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006db5b4  895020               mov dword ptr [eax + 0x20], edx
// 006db5b7  eb02                 jmp 0x6db5bb
// 006db5b9  33c0                 xor eax, eax
// 006db5bb  56                   push esi
// 006db5bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006db5c0  6a00                 push 0
// 006db5c2  8906                 mov dword ptr [esi], eax
// 006db5c4  e8d1c30c00           call 0x7a799a
// 006db5c9  83c404               add esp, 4
// 006db5cc  8bc6                 mov eax, esi
// 006db5ce  5e                   pop esi
// 006db5cf  59                   pop ecx
// 006db5d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
