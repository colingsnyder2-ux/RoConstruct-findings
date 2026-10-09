// roc 2009-12 00754be0  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754be0
//
// 00754be0  51                   push ecx
// 00754be1  6a28                 push 0x28
// 00754be3  c744240400000000     mov dword ptr [esp + 4], 0
// 00754beb  e870ec0900           call 0x7f3860
// 00754bf0  83c404               add esp, 4
// 00754bf3  85c0                 test eax, eax
// 00754bf5  7432                 je 0x754c29
// 00754bf7  c700cc499e00         mov dword ptr [eax], 0x9e49cc
// 00754bfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00754c01  894808               mov dword ptr [eax + 8], ecx
// 00754c04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00754c08  89500c               mov dword ptr [eax + 0xc], edx
// 00754c0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00754c0f  894810               mov dword ptr [eax + 0x10], ecx
// 00754c12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00754c16  895018               mov dword ptr [eax + 0x18], edx
// 00754c19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00754c1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00754c20  8b542420             mov edx, dword ptr [esp + 0x20]
// 00754c24  895020               mov dword ptr [eax + 0x20], edx
// 00754c27  eb02                 jmp 0x754c2b
// 00754c29  33c0                 xor eax, eax
// 00754c2b  56                   push esi
// 00754c2c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00754c30  6a00                 push 0
// 00754c32  8906                 mov dword ptr [esi], eax
// 00754c34  e821ec0900           call 0x7f385a
// 00754c39  83c404               add esp, 4
// 00754c3c  8bc6                 mov eax, esi
// 00754c3e  5e                   pop esi
// 00754c3f  59                   pop ecx
// 00754c40  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
