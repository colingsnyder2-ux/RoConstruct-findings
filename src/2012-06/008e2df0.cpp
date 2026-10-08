// roc 2012-06 008e2df0  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2df0
//
// 008e2df0  51                   push ecx
// 008e2df1  6a28                 push 0x28
// 008e2df3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e2dfb  e81af30900           call 0x98211a
// 008e2e00  83c404               add esp, 4
// 008e2e03  85c0                 test eax, eax
// 008e2e05  7432                 je 0x8e2e39
// 008e2e07  c70084bebe00         mov dword ptr [eax], 0xbebe84
// 008e2e0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e2e11  894808               mov dword ptr [eax + 8], ecx
// 008e2e14  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e2e18  89500c               mov dword ptr [eax + 0xc], edx
// 008e2e1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e2e1f  894810               mov dword ptr [eax + 0x10], ecx
// 008e2e22  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e2e26  895018               mov dword ptr [eax + 0x18], edx
// 008e2e29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2e2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008e2e30  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e2e34  895020               mov dword ptr [eax + 0x20], edx
// 008e2e37  eb02                 jmp 0x8e2e3b
// 008e2e39  33c0                 xor eax, eax
// 008e2e3b  56                   push esi
// 008e2e3c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e2e40  6a00                 push 0
// 008e2e42  8906                 mov dword ptr [esi], eax
// 008e2e44  e8cbf20900           call 0x982114
// 008e2e49  83c404               add esp, 4
// 008e2e4c  8bc6                 mov eax, esi
// 008e2e4e  5e                   pop esi
// 008e2e4f  59                   pop ecx
// 008e2e50  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
