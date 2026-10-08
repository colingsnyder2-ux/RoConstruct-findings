// roc 2009-06 006677b0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006677b0
//
// 006677b0  51                   push ecx
// 006677b1  6a28                 push 0x28
// 006677b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006677bb  e878120b00           call 0x718a38
// 006677c0  83c404               add esp, 4
// 006677c3  85c0                 test eax, eax
// 006677c5  7432                 je 0x6677f9
// 006677c7  c700142e8e00         mov dword ptr [eax], 0x8e2e14
// 006677cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006677d1  894808               mov dword ptr [eax + 8], ecx
// 006677d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006677d8  89500c               mov dword ptr [eax + 0xc], edx
// 006677db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006677df  894810               mov dword ptr [eax + 0x10], ecx
// 006677e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006677e6  895018               mov dword ptr [eax + 0x18], edx
// 006677e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006677ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 006677f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006677f4  895020               mov dword ptr [eax + 0x20], edx
// 006677f7  eb02                 jmp 0x6677fb
// 006677f9  33c0                 xor eax, eax
// 006677fb  56                   push esi
// 006677fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667800  6a00                 push 0
// 00667802  8906                 mov dword ptr [esi], eax
// 00667804  e829120b00           call 0x718a32
// 00667809  83c404               add esp, 4
// 0066780c  8bc6                 mov eax, esi
// 0066780e  5e                   pop esi
// 0066780f  59                   pop ecx
// 00667810  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
