// roc 2009-06 00611640  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00611640
//
// 00611640  51                   push ecx
// 00611641  6a28                 push 0x28
// 00611643  c744240400000000     mov dword ptr [esp + 4], 0
// 0061164b  e8e8731000           call 0x718a38
// 00611650  83c404               add esp, 4
// 00611653  85c0                 test eax, eax
// 00611655  7432                 je 0x611689
// 00611657  c70050888d00         mov dword ptr [eax], 0x8d8850
// 0061165d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00611661  894808               mov dword ptr [eax + 8], ecx
// 00611664  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611668  89500c               mov dword ptr [eax + 0xc], edx
// 0061166b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061166f  894810               mov dword ptr [eax + 0x10], ecx
// 00611672  8b542418             mov edx, dword ptr [esp + 0x18]
// 00611676  895018               mov dword ptr [eax + 0x18], edx
// 00611679  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061167d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00611680  8b542420             mov edx, dword ptr [esp + 0x20]
// 00611684  895020               mov dword ptr [eax + 0x20], edx
// 00611687  eb02                 jmp 0x61168b
// 00611689  33c0                 xor eax, eax
// 0061168b  56                   push esi
// 0061168c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611690  6a00                 push 0
// 00611692  8906                 mov dword ptr [esi], eax
// 00611694  e899731000           call 0x718a32
// 00611699  83c404               add esp, 4
// 0061169c  8bc6                 mov eax, esi
// 0061169e  5e                   pop esi
// 0061169f  59                   pop ecx
// 006116a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
