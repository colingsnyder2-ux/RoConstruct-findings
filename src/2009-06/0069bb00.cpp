// roc 2009-06 0069bb00  unit: RBX::Flag  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069bb00
//
// 0069bb00  51                   push ecx
// 0069bb01  6a28                 push 0x28
// 0069bb03  c744240400000000     mov dword ptr [esp + 4], 0
// 0069bb0b  e828cf0700           call 0x718a38
// 0069bb10  83c404               add esp, 4
// 0069bb13  85c0                 test eax, eax
// 0069bb15  7432                 je 0x69bb49
// 0069bb17  c700b48a8e00         mov dword ptr [eax], 0x8e8ab4
// 0069bb1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069bb21  894808               mov dword ptr [eax + 8], ecx
// 0069bb24  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069bb28  89500c               mov dword ptr [eax + 0xc], edx
// 0069bb2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069bb2f  894810               mov dword ptr [eax + 0x10], ecx
// 0069bb32  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069bb36  895018               mov dword ptr [eax + 0x18], edx
// 0069bb39  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069bb3d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0069bb40  8b542420             mov edx, dword ptr [esp + 0x20]
// 0069bb44  895020               mov dword ptr [eax + 0x20], edx
// 0069bb47  eb02                 jmp 0x69bb4b
// 0069bb49  33c0                 xor eax, eax
// 0069bb4b  56                   push esi
// 0069bb4c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069bb50  6a00                 push 0
// 0069bb52  8906                 mov dword ptr [esi], eax
// 0069bb54  e8d9ce0700           call 0x718a32
// 0069bb59  83c404               add esp, 4
// 0069bb5c  8bc6                 mov eax, esi
// 0069bb5e  5e                   pop esi
// 0069bb5f  59                   pop ecx
// 0069bb60  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
