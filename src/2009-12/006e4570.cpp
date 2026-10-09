// roc 2009-12 006e4570  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4570
//
// 006e4570  51                   push ecx
// 006e4571  6a28                 push 0x28
// 006e4573  c744240400000000     mov dword ptr [esp + 4], 0
// 006e457b  e8e0f21000           call 0x7f3860
// 006e4580  83c404               add esp, 4
// 006e4583  85c0                 test eax, eax
// 006e4585  7432                 je 0x6e45b9
// 006e4587  c70074ac9d00         mov dword ptr [eax], 0x9dac74
// 006e458d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e4591  894808               mov dword ptr [eax + 8], ecx
// 006e4594  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4598  89500c               mov dword ptr [eax + 0xc], edx
// 006e459b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e459f  894810               mov dword ptr [eax + 0x10], ecx
// 006e45a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e45a6  895018               mov dword ptr [eax + 0x18], edx
// 006e45a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e45ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e45b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e45b4  895020               mov dword ptr [eax + 0x20], edx
// 006e45b7  eb02                 jmp 0x6e45bb
// 006e45b9  33c0                 xor eax, eax
// 006e45bb  56                   push esi
// 006e45bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e45c0  6a00                 push 0
// 006e45c2  8906                 mov dword ptr [esi], eax
// 006e45c4  e891f21000           call 0x7f385a
// 006e45c9  83c404               add esp, 4
// 006e45cc  8bc6                 mov eax, esi
// 006e45ce  5e                   pop esi
// 006e45cf  59                   pop ecx
// 006e45d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
