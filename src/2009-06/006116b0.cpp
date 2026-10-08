// roc 2009-06 006116b0  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006116b0
//
// 006116b0  51                   push ecx
// 006116b1  6a28                 push 0x28
// 006116b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006116bb  e878731000           call 0x718a38
// 006116c0  83c404               add esp, 4
// 006116c3  85c0                 test eax, eax
// 006116c5  7432                 je 0x6116f9
// 006116c7  c70064888d00         mov dword ptr [eax], 0x8d8864
// 006116cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006116d1  894808               mov dword ptr [eax + 8], ecx
// 006116d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006116d8  89500c               mov dword ptr [eax + 0xc], edx
// 006116db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006116df  894810               mov dword ptr [eax + 0x10], ecx
// 006116e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006116e6  895018               mov dword ptr [eax + 0x18], edx
// 006116e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006116ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 006116f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006116f4  895020               mov dword ptr [eax + 0x20], edx
// 006116f7  eb02                 jmp 0x6116fb
// 006116f9  33c0                 xor eax, eax
// 006116fb  56                   push esi
// 006116fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611700  6a00                 push 0
// 00611702  8906                 mov dword ptr [esi], eax
// 00611704  e829731000           call 0x718a32
// 00611709  83c404               add esp, 4
// 0061170c  8bc6                 mov eax, esi
// 0061170e  5e                   pop esi
// 0061170f  59                   pop ecx
// 00611710  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
