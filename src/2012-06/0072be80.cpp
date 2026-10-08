// roc 2012-06 0072be80  unit: RBX::Accoutrement  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072be80
//
// 0072be80  51                   push ecx
// 0072be81  6a28                 push 0x28
// 0072be83  c744240400000000     mov dword ptr [esp + 4], 0
// 0072be8b  e88a622500           call 0x98211a
// 0072be90  83c404               add esp, 4
// 0072be93  85c0                 test eax, eax
// 0072be95  7432                 je 0x72bec9
// 0072be97  c700cc5cba00         mov dword ptr [eax], 0xba5ccc
// 0072be9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072bea1  894808               mov dword ptr [eax + 8], ecx
// 0072bea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072bea8  89500c               mov dword ptr [eax + 0xc], edx
// 0072beab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072beaf  894810               mov dword ptr [eax + 0x10], ecx
// 0072beb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072beb6  895018               mov dword ptr [eax + 0x18], edx
// 0072beb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072bebd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0072bec0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072bec4  895020               mov dword ptr [eax + 0x20], edx
// 0072bec7  eb02                 jmp 0x72becb
// 0072bec9  33c0                 xor eax, eax
// 0072becb  56                   push esi
// 0072becc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072bed0  6a00                 push 0
// 0072bed2  8906                 mov dword ptr [esi], eax
// 0072bed4  e83b622500           call 0x982114
// 0072bed9  83c404               add esp, 4
// 0072bedc  8bc6                 mov eax, esi
// 0072bede  5e                   pop esi
// 0072bedf  59                   pop ecx
// 0072bee0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
