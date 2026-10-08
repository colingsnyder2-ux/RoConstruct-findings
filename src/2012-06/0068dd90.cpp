// roc 2012-06 0068dd90  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0068dd90
//
// 0068dd90  51                   push ecx
// 0068dd91  6a28                 push 0x28
// 0068dd93  c744240400000000     mov dword ptr [esp + 4], 0
// 0068dd9b  e87a432f00           call 0x98211a
// 0068dda0  83c404               add esp, 4
// 0068dda3  85c0                 test eax, eax
// 0068dda5  7432                 je 0x68ddd9
// 0068dda7  c7002001b900         mov dword ptr [eax], 0xb90120
// 0068ddad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068ddb1  894808               mov dword ptr [eax + 8], ecx
// 0068ddb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068ddb8  89500c               mov dword ptr [eax + 0xc], edx
// 0068ddbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068ddbf  894810               mov dword ptr [eax + 0x10], ecx
// 0068ddc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068ddc6  895018               mov dword ptr [eax + 0x18], edx
// 0068ddc9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068ddcd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0068ddd0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0068ddd4  895020               mov dword ptr [eax + 0x20], edx
// 0068ddd7  eb02                 jmp 0x68dddb
// 0068ddd9  33c0                 xor eax, eax
// 0068dddb  56                   push esi
// 0068dddc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068dde0  6a00                 push 0
// 0068dde2  8906                 mov dword ptr [esi], eax
// 0068dde4  e82b432f00           call 0x982114
// 0068dde9  83c404               add esp, 4
// 0068ddec  8bc6                 mov eax, esi
// 0068ddee  5e                   pop esi
// 0068ddef  59                   pop ecx
// 0068ddf0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
