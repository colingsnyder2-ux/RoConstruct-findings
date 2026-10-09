// roc 2009-12 007452b0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007452b0
//
// 007452b0  51                   push ecx
// 007452b1  6a28                 push 0x28
// 007452b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007452bb  e8a0e50a00           call 0x7f3860
// 007452c0  83c404               add esp, 4
// 007452c3  85c0                 test eax, eax
// 007452c5  7432                 je 0x7452f9
// 007452c7  c700dc359e00         mov dword ptr [eax], 0x9e35dc
// 007452cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007452d1  894808               mov dword ptr [eax + 8], ecx
// 007452d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007452d8  89500c               mov dword ptr [eax + 0xc], edx
// 007452db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007452df  894810               mov dword ptr [eax + 0x10], ecx
// 007452e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007452e6  895018               mov dword ptr [eax + 0x18], edx
// 007452e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007452ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 007452f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007452f4  895020               mov dword ptr [eax + 0x20], edx
// 007452f7  eb02                 jmp 0x7452fb
// 007452f9  33c0                 xor eax, eax
// 007452fb  56                   push esi
// 007452fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00745300  6a00                 push 0
// 00745302  8906                 mov dword ptr [esi], eax
// 00745304  e851e50a00           call 0x7f385a
// 00745309  83c404               add esp, 4
// 0074530c  8bc6                 mov eax, esi
// 0074530e  5e                   pop esi
// 0074530f  59                   pop ecx
// 00745310  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
