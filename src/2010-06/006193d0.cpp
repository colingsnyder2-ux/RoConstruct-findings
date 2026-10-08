// roc 2010-06 006193d0  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006193d0
//
// 006193d0  51                   push ecx
// 006193d1  6a28                 push 0x28
// 006193d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006193db  e8c0e51800           call 0x7a79a0
// 006193e0  83c404               add esp, 4
// 006193e3  85c0                 test eax, eax
// 006193e5  7432                 je 0x619419
// 006193e7  c700ec1ba300         mov dword ptr [eax], 0xa31bec
// 006193ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006193f1  894808               mov dword ptr [eax + 8], ecx
// 006193f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006193f8  89500c               mov dword ptr [eax + 0xc], edx
// 006193fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006193ff  894810               mov dword ptr [eax + 0x10], ecx
// 00619402  8b542418             mov edx, dword ptr [esp + 0x18]
// 00619406  895018               mov dword ptr [eax + 0x18], edx
// 00619409  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061940d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00619410  8b542420             mov edx, dword ptr [esp + 0x20]
// 00619414  895020               mov dword ptr [eax + 0x20], edx
// 00619417  eb02                 jmp 0x61941b
// 00619419  33c0                 xor eax, eax
// 0061941b  56                   push esi
// 0061941c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00619420  6a00                 push 0
// 00619422  8906                 mov dword ptr [esi], eax
// 00619424  e871e51800           call 0x7a799a
// 00619429  83c404               add esp, 4
// 0061942c  8bc6                 mov eax, esi
// 0061942e  5e                   pop esi
// 0061942f  59                   pop ecx
// 00619430  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
