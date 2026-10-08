// roc 2009-06 006a2610  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a2610
//
// 006a2610  51                   push ecx
// 006a2611  6a28                 push 0x28
// 006a2613  c744240400000000     mov dword ptr [esp + 4], 0
// 006a261b  e818640700           call 0x718a38
// 006a2620  83c404               add esp, 4
// 006a2623  85c0                 test eax, eax
// 006a2625  7432                 je 0x6a2659
// 006a2627  c70058968e00         mov dword ptr [eax], 0x8e9658
// 006a262d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a2631  894808               mov dword ptr [eax + 8], ecx
// 006a2634  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a2638  89500c               mov dword ptr [eax + 0xc], edx
// 006a263b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a263f  894810               mov dword ptr [eax + 0x10], ecx
// 006a2642  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a2646  895018               mov dword ptr [eax + 0x18], edx
// 006a2649  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a264d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006a2650  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a2654  895020               mov dword ptr [eax + 0x20], edx
// 006a2657  eb02                 jmp 0x6a265b
// 006a2659  33c0                 xor eax, eax
// 006a265b  56                   push esi
// 006a265c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a2660  6a00                 push 0
// 006a2662  8906                 mov dword ptr [esi], eax
// 006a2664  e8c9630700           call 0x718a32
// 006a2669  83c404               add esp, 4
// 006a266c  8bc6                 mov eax, esi
// 006a266e  5e                   pop esi
// 006a266f  59                   pop ecx
// 006a2670  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
