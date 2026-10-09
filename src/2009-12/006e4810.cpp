// roc 2009-12 006e4810  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4810
//
// 006e4810  51                   push ecx
// 006e4811  6a28                 push 0x28
// 006e4813  c744240400000000     mov dword ptr [esp + 4], 0
// 006e481b  e840f01000           call 0x7f3860
// 006e4820  83c404               add esp, 4
// 006e4823  85c0                 test eax, eax
// 006e4825  7432                 je 0x6e4859
// 006e4827  c70004ad9d00         mov dword ptr [eax], 0x9dad04
// 006e482d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e4831  894808               mov dword ptr [eax + 8], ecx
// 006e4834  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4838  89500c               mov dword ptr [eax + 0xc], edx
// 006e483b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e483f  894810               mov dword ptr [eax + 0x10], ecx
// 006e4842  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e4846  895018               mov dword ptr [eax + 0x18], edx
// 006e4849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e484d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e4850  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4854  895020               mov dword ptr [eax + 0x20], edx
// 006e4857  eb02                 jmp 0x6e485b
// 006e4859  33c0                 xor eax, eax
// 006e485b  56                   push esi
// 006e485c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e4860  6a00                 push 0
// 006e4862  8906                 mov dword ptr [esi], eax
// 006e4864  e8f1ef1000           call 0x7f385a
// 006e4869  83c404               add esp, 4
// 006e486c  8bc6                 mov eax, esi
// 006e486e  5e                   pop esi
// 006e486f  59                   pop ecx
// 006e4870  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
