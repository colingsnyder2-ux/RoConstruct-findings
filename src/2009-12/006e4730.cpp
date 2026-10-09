// roc 2009-12 006e4730  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4730
//
// 006e4730  51                   push ecx
// 006e4731  6a28                 push 0x28
// 006e4733  c744240400000000     mov dword ptr [esp + 4], 0
// 006e473b  e820f11000           call 0x7f3860
// 006e4740  83c404               add esp, 4
// 006e4743  85c0                 test eax, eax
// 006e4745  7432                 je 0x6e4779
// 006e4747  c700d4ac9d00         mov dword ptr [eax], 0x9dacd4
// 006e474d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e4751  894808               mov dword ptr [eax + 8], ecx
// 006e4754  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4758  89500c               mov dword ptr [eax + 0xc], edx
// 006e475b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e475f  894810               mov dword ptr [eax + 0x10], ecx
// 006e4762  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e4766  895018               mov dword ptr [eax + 0x18], edx
// 006e4769  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e476d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e4770  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4774  895020               mov dword ptr [eax + 0x20], edx
// 006e4777  eb02                 jmp 0x6e477b
// 006e4779  33c0                 xor eax, eax
// 006e477b  56                   push esi
// 006e477c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e4780  6a00                 push 0
// 006e4782  8906                 mov dword ptr [esi], eax
// 006e4784  e8d1f01000           call 0x7f385a
// 006e4789  83c404               add esp, 4
// 006e478c  8bc6                 mov eax, esi
// 006e478e  5e                   pop esi
// 006e478f  59                   pop ecx
// 006e4790  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
