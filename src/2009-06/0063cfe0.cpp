// roc 2009-06 0063cfe0  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063cfe0
//
// 0063cfe0  51                   push ecx
// 0063cfe1  6a28                 push 0x28
// 0063cfe3  c744240400000000     mov dword ptr [esp + 4], 0
// 0063cfeb  e848ba0d00           call 0x718a38
// 0063cff0  83c404               add esp, 4
// 0063cff3  85c0                 test eax, eax
// 0063cff5  7432                 je 0x63d029
// 0063cff7  c70090b98d00         mov dword ptr [eax], 0x8db990
// 0063cffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d001  894808               mov dword ptr [eax + 8], ecx
// 0063d004  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d008  89500c               mov dword ptr [eax + 0xc], edx
// 0063d00b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063d00f  894810               mov dword ptr [eax + 0x10], ecx
// 0063d012  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063d016  895018               mov dword ptr [eax + 0x18], edx
// 0063d019  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063d01d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063d020  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063d024  895020               mov dword ptr [eax + 0x20], edx
// 0063d027  eb02                 jmp 0x63d02b
// 0063d029  33c0                 xor eax, eax
// 0063d02b  56                   push esi
// 0063d02c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063d030  6a00                 push 0
// 0063d032  8906                 mov dword ptr [esi], eax
// 0063d034  e8f9b90d00           call 0x718a32
// 0063d039  83c404               add esp, 4
// 0063d03c  8bc6                 mov eax, esi
// 0063d03e  5e                   pop esi
// 0063d03f  59                   pop ecx
// 0063d040  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
