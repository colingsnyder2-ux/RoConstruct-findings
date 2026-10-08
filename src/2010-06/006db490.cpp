// roc 2010-06 006db490  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db490
//
// 006db490  51                   push ecx
// 006db491  6a28                 push 0x28
// 006db493  c744240400000000     mov dword ptr [esp + 4], 0
// 006db49b  e800c50c00           call 0x7a79a0
// 006db4a0  83c404               add esp, 4
// 006db4a3  85c0                 test eax, eax
// 006db4a5  7432                 je 0x6db4d9
// 006db4a7  c700b06ca400         mov dword ptr [eax], 0xa46cb0
// 006db4ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006db4b1  894808               mov dword ptr [eax + 8], ecx
// 006db4b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006db4b8  89500c               mov dword ptr [eax + 0xc], edx
// 006db4bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006db4bf  894810               mov dword ptr [eax + 0x10], ecx
// 006db4c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006db4c6  895018               mov dword ptr [eax + 0x18], edx
// 006db4c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006db4cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006db4d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006db4d4  895020               mov dword ptr [eax + 0x20], edx
// 006db4d7  eb02                 jmp 0x6db4db
// 006db4d9  33c0                 xor eax, eax
// 006db4db  56                   push esi
// 006db4dc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006db4e0  6a00                 push 0
// 006db4e2  8906                 mov dword ptr [esi], eax
// 006db4e4  e8b1c40c00           call 0x7a799a
// 006db4e9  83c404               add esp, 4
// 006db4ec  8bc6                 mov eax, esi
// 006db4ee  5e                   pop esi
// 006db4ef  59                   pop ecx
// 006db4f0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
