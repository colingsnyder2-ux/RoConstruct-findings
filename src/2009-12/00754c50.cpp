// roc 2009-12 00754c50  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754c50
//
// 00754c50  51                   push ecx
// 00754c51  6a28                 push 0x28
// 00754c53  c744240400000000     mov dword ptr [esp + 4], 0
// 00754c5b  e800ec0900           call 0x7f3860
// 00754c60  83c404               add esp, 4
// 00754c63  85c0                 test eax, eax
// 00754c65  7432                 je 0x754c99
// 00754c67  c700e4499e00         mov dword ptr [eax], 0x9e49e4
// 00754c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00754c71  894808               mov dword ptr [eax + 8], ecx
// 00754c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00754c78  89500c               mov dword ptr [eax + 0xc], edx
// 00754c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00754c7f  894810               mov dword ptr [eax + 0x10], ecx
// 00754c82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00754c86  895018               mov dword ptr [eax + 0x18], edx
// 00754c89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00754c8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00754c90  8b542420             mov edx, dword ptr [esp + 0x20]
// 00754c94  895020               mov dword ptr [eax + 0x20], edx
// 00754c97  eb02                 jmp 0x754c9b
// 00754c99  33c0                 xor eax, eax
// 00754c9b  56                   push esi
// 00754c9c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00754ca0  6a00                 push 0
// 00754ca2  8906                 mov dword ptr [esi], eax
// 00754ca4  e8b1eb0900           call 0x7f385a
// 00754ca9  83c404               add esp, 4
// 00754cac  8bc6                 mov eax, esi
// 00754cae  5e                   pop esi
// 00754caf  59                   pop ecx
// 00754cb0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
