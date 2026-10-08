// roc 2009-06 006675f0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006675f0
//
// 006675f0  51                   push ecx
// 006675f1  6a28                 push 0x28
// 006675f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006675fb  e838140b00           call 0x718a38
// 00667600  83c404               add esp, 4
// 00667603  85c0                 test eax, eax
// 00667605  7432                 je 0x667639
// 00667607  c700c42d8e00         mov dword ptr [eax], 0x8e2dc4
// 0066760d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667611  894808               mov dword ptr [eax + 8], ecx
// 00667614  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667618  89500c               mov dword ptr [eax + 0xc], edx
// 0066761b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066761f  894810               mov dword ptr [eax + 0x10], ecx
// 00667622  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667626  895018               mov dword ptr [eax + 0x18], edx
// 00667629  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066762d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667630  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667634  895020               mov dword ptr [eax + 0x20], edx
// 00667637  eb02                 jmp 0x66763b
// 00667639  33c0                 xor eax, eax
// 0066763b  56                   push esi
// 0066763c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667640  6a00                 push 0
// 00667642  8906                 mov dword ptr [esi], eax
// 00667644  e8e9130b00           call 0x718a32
// 00667649  83c404               add esp, 4
// 0066764c  8bc6                 mov eax, esi
// 0066764e  5e                   pop esi
// 0066764f  59                   pop ecx
// 00667650  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
