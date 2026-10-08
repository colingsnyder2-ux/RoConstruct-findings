// roc 2009-06 00667820  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00667820
//
// 00667820  51                   push ecx
// 00667821  6a28                 push 0x28
// 00667823  c744240400000000     mov dword ptr [esp + 4], 0
// 0066782b  e808120b00           call 0x718a38
// 00667830  83c404               add esp, 4
// 00667833  85c0                 test eax, eax
// 00667835  7432                 je 0x667869
// 00667837  c700282e8e00         mov dword ptr [eax], 0x8e2e28
// 0066783d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667841  894808               mov dword ptr [eax + 8], ecx
// 00667844  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667848  89500c               mov dword ptr [eax + 0xc], edx
// 0066784b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066784f  894810               mov dword ptr [eax + 0x10], ecx
// 00667852  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667856  895018               mov dword ptr [eax + 0x18], edx
// 00667859  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066785d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667860  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667864  895020               mov dword ptr [eax + 0x20], edx
// 00667867  eb02                 jmp 0x66786b
// 00667869  33c0                 xor eax, eax
// 0066786b  56                   push esi
// 0066786c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667870  6a00                 push 0
// 00667872  8906                 mov dword ptr [esi], eax
// 00667874  e8b9110b00           call 0x718a32
// 00667879  83c404               add esp, 4
// 0066787c  8bc6                 mov eax, esi
// 0066787e  5e                   pop esi
// 0066787f  59                   pop ecx
// 00667880  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
