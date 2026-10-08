// roc 2012-06 008e2d80  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2d80
//
// 008e2d80  51                   push ecx
// 008e2d81  6a28                 push 0x28
// 008e2d83  c744240400000000     mov dword ptr [esp + 4], 0
// 008e2d8b  e88af30900           call 0x98211a
// 008e2d90  83c404               add esp, 4
// 008e2d93  85c0                 test eax, eax
// 008e2d95  7432                 je 0x8e2dc9
// 008e2d97  c70070bebe00         mov dword ptr [eax], 0xbebe70
// 008e2d9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e2da1  894808               mov dword ptr [eax + 8], ecx
// 008e2da4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e2da8  89500c               mov dword ptr [eax + 0xc], edx
// 008e2dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e2daf  894810               mov dword ptr [eax + 0x10], ecx
// 008e2db2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e2db6  895018               mov dword ptr [eax + 0x18], edx
// 008e2db9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2dbd  89481c               mov dword ptr [eax + 0x1c], ecx
// 008e2dc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e2dc4  895020               mov dword ptr [eax + 0x20], edx
// 008e2dc7  eb02                 jmp 0x8e2dcb
// 008e2dc9  33c0                 xor eax, eax
// 008e2dcb  56                   push esi
// 008e2dcc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e2dd0  6a00                 push 0
// 008e2dd2  8906                 mov dword ptr [esi], eax
// 008e2dd4  e83bf30900           call 0x982114
// 008e2dd9  83c404               add esp, 4
// 008e2ddc  8bc6                 mov eax, esi
// 008e2dde  5e                   pop esi
// 008e2ddf  59                   pop ecx
// 008e2de0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
