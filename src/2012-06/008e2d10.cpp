// roc 2012-06 008e2d10  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2d10
//
// 008e2d10  51                   push ecx
// 008e2d11  6a28                 push 0x28
// 008e2d13  c744240400000000     mov dword ptr [esp + 4], 0
// 008e2d1b  e8faf30900           call 0x98211a
// 008e2d20  83c404               add esp, 4
// 008e2d23  85c0                 test eax, eax
// 008e2d25  7432                 je 0x8e2d59
// 008e2d27  c7005cbebe00         mov dword ptr [eax], 0xbebe5c
// 008e2d2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e2d31  894808               mov dword ptr [eax + 8], ecx
// 008e2d34  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e2d38  89500c               mov dword ptr [eax + 0xc], edx
// 008e2d3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e2d3f  894810               mov dword ptr [eax + 0x10], ecx
// 008e2d42  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e2d46  895018               mov dword ptr [eax + 0x18], edx
// 008e2d49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2d4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008e2d50  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e2d54  895020               mov dword ptr [eax + 0x20], edx
// 008e2d57  eb02                 jmp 0x8e2d5b
// 008e2d59  33c0                 xor eax, eax
// 008e2d5b  56                   push esi
// 008e2d5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e2d60  6a00                 push 0
// 008e2d62  8906                 mov dword ptr [esi], eax
// 008e2d64  e8abf30900           call 0x982114
// 008e2d69  83c404               add esp, 4
// 008e2d6c  8bc6                 mov eax, esi
// 008e2d6e  5e                   pop esi
// 008e2d6f  59                   pop ecx
// 008e2d70  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
