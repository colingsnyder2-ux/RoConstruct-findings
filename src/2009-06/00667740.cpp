// roc 2009-06 00667740  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00667740
//
// 00667740  51                   push ecx
// 00667741  6a28                 push 0x28
// 00667743  c744240400000000     mov dword ptr [esp + 4], 0
// 0066774b  e8e8120b00           call 0x718a38
// 00667750  83c404               add esp, 4
// 00667753  85c0                 test eax, eax
// 00667755  7432                 je 0x667789
// 00667757  c700002e8e00         mov dword ptr [eax], 0x8e2e00
// 0066775d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667761  894808               mov dword ptr [eax + 8], ecx
// 00667764  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667768  89500c               mov dword ptr [eax + 0xc], edx
// 0066776b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066776f  894810               mov dword ptr [eax + 0x10], ecx
// 00667772  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667776  895018               mov dword ptr [eax + 0x18], edx
// 00667779  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066777d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667780  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667784  895020               mov dword ptr [eax + 0x20], edx
// 00667787  eb02                 jmp 0x66778b
// 00667789  33c0                 xor eax, eax
// 0066778b  56                   push esi
// 0066778c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667790  6a00                 push 0
// 00667792  8906                 mov dword ptr [esi], eax
// 00667794  e899120b00           call 0x718a32
// 00667799  83c404               add esp, 4
// 0066779c  8bc6                 mov eax, esi
// 0066779e  5e                   pop esi
// 0066779f  59                   pop ecx
// 006677a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
