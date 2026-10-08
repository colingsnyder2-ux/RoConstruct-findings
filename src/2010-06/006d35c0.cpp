// roc 2010-06 006d35c0  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d35c0
//
// 006d35c0  51                   push ecx
// 006d35c1  6a28                 push 0x28
// 006d35c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d35cb  e8d0430d00           call 0x7a79a0
// 006d35d0  83c404               add esp, 4
// 006d35d3  85c0                 test eax, eax
// 006d35d5  7432                 je 0x6d3609
// 006d35d7  c7002458a400         mov dword ptr [eax], 0xa45824
// 006d35dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d35e1  894808               mov dword ptr [eax + 8], ecx
// 006d35e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d35e8  89500c               mov dword ptr [eax + 0xc], edx
// 006d35eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d35ef  894810               mov dword ptr [eax + 0x10], ecx
// 006d35f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d35f6  895018               mov dword ptr [eax + 0x18], edx
// 006d35f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d35fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006d3600  8b542420             mov edx, dword ptr [esp + 0x20]
// 006d3604  895020               mov dword ptr [eax + 0x20], edx
// 006d3607  eb02                 jmp 0x6d360b
// 006d3609  33c0                 xor eax, eax
// 006d360b  56                   push esi
// 006d360c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3610  6a00                 push 0
// 006d3612  8906                 mov dword ptr [esi], eax
// 006d3614  e881430d00           call 0x7a799a
// 006d3619  83c404               add esp, 4
// 006d361c  8bc6                 mov eax, esi
// 006d361e  5e                   pop esi
// 006d361f  59                   pop ecx
// 006d3620  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
