// roc 2012-06 008da900  unit: RBX::ArcHandles  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008da900
//
// 008da900  51                   push ecx
// 008da901  6a28                 push 0x28
// 008da903  c744240400000000     mov dword ptr [esp + 4], 0
// 008da90b  e80a780a00           call 0x98211a
// 008da910  83c404               add esp, 4
// 008da913  85c0                 test eax, eax
// 008da915  7432                 je 0x8da949
// 008da917  c70090a2be00         mov dword ptr [eax], 0xbea290
// 008da91d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008da921  894808               mov dword ptr [eax + 8], ecx
// 008da924  8b542410             mov edx, dword ptr [esp + 0x10]
// 008da928  89500c               mov dword ptr [eax + 0xc], edx
// 008da92b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008da92f  894810               mov dword ptr [eax + 0x10], ecx
// 008da932  8b542418             mov edx, dword ptr [esp + 0x18]
// 008da936  895018               mov dword ptr [eax + 0x18], edx
// 008da939  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da93d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008da940  8b542420             mov edx, dword ptr [esp + 0x20]
// 008da944  895020               mov dword ptr [eax + 0x20], edx
// 008da947  eb02                 jmp 0x8da94b
// 008da949  33c0                 xor eax, eax
// 008da94b  56                   push esi
// 008da94c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008da950  6a00                 push 0
// 008da952  8906                 mov dword ptr [esi], eax
// 008da954  e8bb770a00           call 0x982114
// 008da959  83c404               add esp, 4
// 008da95c  8bc6                 mov eax, esi
// 008da95e  5e                   pop esi
// 008da95f  59                   pop ecx
// 008da960  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
