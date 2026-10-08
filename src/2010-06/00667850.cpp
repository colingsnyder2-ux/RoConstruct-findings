// roc 2010-06 00667850  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667850
//
// 00667850  51                   push ecx
// 00667851  6a28                 push 0x28
// 00667853  c744240400000000     mov dword ptr [esp + 4], 0
// 0066785b  e840011400           call 0x7a79a0
// 00667860  83c404               add esp, 4
// 00667863  85c0                 test eax, eax
// 00667865  7432                 je 0x667899
// 00667867  c70040b1a300         mov dword ptr [eax], 0xa3b140
// 0066786d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667871  894808               mov dword ptr [eax + 8], ecx
// 00667874  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667878  89500c               mov dword ptr [eax + 0xc], edx
// 0066787b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066787f  894810               mov dword ptr [eax + 0x10], ecx
// 00667882  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667886  895018               mov dword ptr [eax + 0x18], edx
// 00667889  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066788d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667890  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667894  895020               mov dword ptr [eax + 0x20], edx
// 00667897  eb02                 jmp 0x66789b
// 00667899  33c0                 xor eax, eax
// 0066789b  56                   push esi
// 0066789c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006678a0  6a00                 push 0
// 006678a2  8906                 mov dword ptr [esi], eax
// 006678a4  e8f1001400           call 0x7a799a
// 006678a9  83c404               add esp, 4
// 006678ac  8bc6                 mov eax, esi
// 006678ae  5e                   pop esi
// 006678af  59                   pop ecx
// 006678b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
