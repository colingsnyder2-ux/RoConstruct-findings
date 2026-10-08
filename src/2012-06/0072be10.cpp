// roc 2012-06 0072be10  unit: RBX::Accoutrement  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072be10
//
// 0072be10  51                   push ecx
// 0072be11  6a28                 push 0x28
// 0072be13  c744240400000000     mov dword ptr [esp + 4], 0
// 0072be1b  e8fa622500           call 0x98211a
// 0072be20  83c404               add esp, 4
// 0072be23  85c0                 test eax, eax
// 0072be25  7432                 je 0x72be59
// 0072be27  c700b85cba00         mov dword ptr [eax], 0xba5cb8
// 0072be2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072be31  894808               mov dword ptr [eax + 8], ecx
// 0072be34  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072be38  89500c               mov dword ptr [eax + 0xc], edx
// 0072be3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072be3f  894810               mov dword ptr [eax + 0x10], ecx
// 0072be42  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072be46  895018               mov dword ptr [eax + 0x18], edx
// 0072be49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072be4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0072be50  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072be54  895020               mov dword ptr [eax + 0x20], edx
// 0072be57  eb02                 jmp 0x72be5b
// 0072be59  33c0                 xor eax, eax
// 0072be5b  56                   push esi
// 0072be5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072be60  6a00                 push 0
// 0072be62  8906                 mov dword ptr [esi], eax
// 0072be64  e8ab622500           call 0x982114
// 0072be69  83c404               add esp, 4
// 0072be6c  8bc6                 mov eax, esi
// 0072be6e  5e                   pop esi
// 0072be6f  59                   pop ecx
// 0072be70  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
