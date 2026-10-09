// roc 2009-12 006e45e0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e45e0
//
// 006e45e0  51                   push ecx
// 006e45e1  6a28                 push 0x28
// 006e45e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e45eb  e870f21000           call 0x7f3860
// 006e45f0  83c404               add esp, 4
// 006e45f3  85c0                 test eax, eax
// 006e45f5  7432                 je 0x6e4629
// 006e45f7  c7008cac9d00         mov dword ptr [eax], 0x9dac8c
// 006e45fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e4601  894808               mov dword ptr [eax + 8], ecx
// 006e4604  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4608  89500c               mov dword ptr [eax + 0xc], edx
// 006e460b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e460f  894810               mov dword ptr [eax + 0x10], ecx
// 006e4612  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e4616  895018               mov dword ptr [eax + 0x18], edx
// 006e4619  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e461d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e4620  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4624  895020               mov dword ptr [eax + 0x20], edx
// 006e4627  eb02                 jmp 0x6e462b
// 006e4629  33c0                 xor eax, eax
// 006e462b  56                   push esi
// 006e462c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e4630  6a00                 push 0
// 006e4632  8906                 mov dword ptr [esi], eax
// 006e4634  e821f21000           call 0x7f385a
// 006e4639  83c404               add esp, 4
// 006e463c  8bc6                 mov eax, esi
// 006e463e  5e                   pop esi
// 006e463f  59                   pop ecx
// 006e4640  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
