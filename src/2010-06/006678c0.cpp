// roc 2010-06 006678c0  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006678c0
//
// 006678c0  51                   push ecx
// 006678c1  6a28                 push 0x28
// 006678c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006678cb  e8d0001400           call 0x7a79a0
// 006678d0  83c404               add esp, 4
// 006678d3  85c0                 test eax, eax
// 006678d5  7432                 je 0x667909
// 006678d7  c70058b1a300         mov dword ptr [eax], 0xa3b158
// 006678dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006678e1  894808               mov dword ptr [eax + 8], ecx
// 006678e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006678e8  89500c               mov dword ptr [eax + 0xc], edx
// 006678eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006678ef  894810               mov dword ptr [eax + 0x10], ecx
// 006678f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006678f6  895018               mov dword ptr [eax + 0x18], edx
// 006678f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006678fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667900  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667904  895020               mov dword ptr [eax + 0x20], edx
// 00667907  eb02                 jmp 0x66790b
// 00667909  33c0                 xor eax, eax
// 0066790b  56                   push esi
// 0066790c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667910  6a00                 push 0
// 00667912  8906                 mov dword ptr [esi], eax
// 00667914  e881001400           call 0x7a799a
// 00667919  83c404               add esp, 4
// 0066791c  8bc6                 mov eax, esi
// 0066791e  5e                   pop esi
// 0066791f  59                   pop ecx
// 00667920  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
