// roc 2010-06 0066d810  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d810
//
// 0066d810  51                   push ecx
// 0066d811  6a28                 push 0x28
// 0066d813  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d81b  e880a11300           call 0x7a79a0
// 0066d820  83c404               add esp, 4
// 0066d823  85c0                 test eax, eax
// 0066d825  7432                 je 0x66d859
// 0066d827  c700f8c7a300         mov dword ptr [eax], 0xa3c7f8
// 0066d82d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d831  894808               mov dword ptr [eax + 8], ecx
// 0066d834  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066d838  89500c               mov dword ptr [eax + 0xc], edx
// 0066d83b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d83f  894810               mov dword ptr [eax + 0x10], ecx
// 0066d842  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066d846  895018               mov dword ptr [eax + 0x18], edx
// 0066d849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d84d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066d850  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066d854  895020               mov dword ptr [eax + 0x20], edx
// 0066d857  eb02                 jmp 0x66d85b
// 0066d859  33c0                 xor eax, eax
// 0066d85b  56                   push esi
// 0066d85c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066d860  6a00                 push 0
// 0066d862  8906                 mov dword ptr [esi], eax
// 0066d864  e831a11300           call 0x7a799a
// 0066d869  83c404               add esp, 4
// 0066d86c  8bc6                 mov eax, esi
// 0066d86e  5e                   pop esi
// 0066d86f  59                   pop ecx
// 0066d870  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
