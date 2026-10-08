// roc 2012-06 0072bda0  unit: RBX::Accoutrement  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072bda0
//
// 0072bda0  51                   push ecx
// 0072bda1  6a28                 push 0x28
// 0072bda3  c744240400000000     mov dword ptr [esp + 4], 0
// 0072bdab  e86a632500           call 0x98211a
// 0072bdb0  83c404               add esp, 4
// 0072bdb3  85c0                 test eax, eax
// 0072bdb5  7432                 je 0x72bde9
// 0072bdb7  c700a45cba00         mov dword ptr [eax], 0xba5ca4
// 0072bdbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072bdc1  894808               mov dword ptr [eax + 8], ecx
// 0072bdc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072bdc8  89500c               mov dword ptr [eax + 0xc], edx
// 0072bdcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072bdcf  894810               mov dword ptr [eax + 0x10], ecx
// 0072bdd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072bdd6  895018               mov dword ptr [eax + 0x18], edx
// 0072bdd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072bddd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0072bde0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072bde4  895020               mov dword ptr [eax + 0x20], edx
// 0072bde7  eb02                 jmp 0x72bdeb
// 0072bde9  33c0                 xor eax, eax
// 0072bdeb  56                   push esi
// 0072bdec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072bdf0  6a00                 push 0
// 0072bdf2  8906                 mov dword ptr [esi], eax
// 0072bdf4  e81b632500           call 0x982114
// 0072bdf9  83c404               add esp, 4
// 0072bdfc  8bc6                 mov eax, esi
// 0072bdfe  5e                   pop esi
// 0072bdff  59                   pop ecx
// 0072be00  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
