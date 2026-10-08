// roc 2012-06 008e2ca0  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2ca0
//
// 008e2ca0  51                   push ecx
// 008e2ca1  6a28                 push 0x28
// 008e2ca3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e2cab  e86af40900           call 0x98211a
// 008e2cb0  83c404               add esp, 4
// 008e2cb3  85c0                 test eax, eax
// 008e2cb5  7432                 je 0x8e2ce9
// 008e2cb7  c70048bebe00         mov dword ptr [eax], 0xbebe48
// 008e2cbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e2cc1  894808               mov dword ptr [eax + 8], ecx
// 008e2cc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e2cc8  89500c               mov dword ptr [eax + 0xc], edx
// 008e2ccb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e2ccf  894810               mov dword ptr [eax + 0x10], ecx
// 008e2cd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e2cd6  895018               mov dword ptr [eax + 0x18], edx
// 008e2cd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2cdd  89481c               mov dword ptr [eax + 0x1c], ecx
// 008e2ce0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e2ce4  895020               mov dword ptr [eax + 0x20], edx
// 008e2ce7  eb02                 jmp 0x8e2ceb
// 008e2ce9  33c0                 xor eax, eax
// 008e2ceb  56                   push esi
// 008e2cec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e2cf0  6a00                 push 0
// 008e2cf2  8906                 mov dword ptr [esi], eax
// 008e2cf4  e81bf40900           call 0x982114
// 008e2cf9  83c404               add esp, 4
// 008e2cfc  8bc6                 mov eax, esi
// 008e2cfe  5e                   pop esi
// 008e2cff  59                   pop ecx
// 008e2d00  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
