// roc 2009-12 006f17a0  unit: RBX::BasicPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f17a0
//
// 006f17a0  51                   push ecx
// 006f17a1  6a28                 push 0x28
// 006f17a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f17ab  e8b0201000           call 0x7f3860
// 006f17b0  83c404               add esp, 4
// 006f17b3  85c0                 test eax, eax
// 006f17b5  7432                 je 0x6f17e9
// 006f17b7  c70010b99d00         mov dword ptr [eax], 0x9db910
// 006f17bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f17c1  894808               mov dword ptr [eax + 8], ecx
// 006f17c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f17c8  89500c               mov dword ptr [eax + 0xc], edx
// 006f17cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f17cf  894810               mov dword ptr [eax + 0x10], ecx
// 006f17d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f17d6  895018               mov dword ptr [eax + 0x18], edx
// 006f17d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f17dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006f17e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f17e4  895020               mov dword ptr [eax + 0x20], edx
// 006f17e7  eb02                 jmp 0x6f17eb
// 006f17e9  33c0                 xor eax, eax
// 006f17eb  56                   push esi
// 006f17ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f17f0  6a00                 push 0
// 006f17f2  8906                 mov dword ptr [esi], eax
// 006f17f4  e861201000           call 0x7f385a
// 006f17f9  83c404               add esp, 4
// 006f17fc  8bc6                 mov eax, esi
// 006f17fe  5e                   pop esi
// 006f17ff  59                   pop ecx
// 006f1800  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
