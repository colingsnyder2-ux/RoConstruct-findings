// roc 2010-06 006387c0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006387c0
//
// 006387c0  51                   push ecx
// 006387c1  6a28                 push 0x28
// 006387c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006387cb  e8d0f11600           call 0x7a79a0
// 006387d0  83c404               add esp, 4
// 006387d3  85c0                 test eax, eax
// 006387d5  7432                 je 0x638809
// 006387d7  c700f864a300         mov dword ptr [eax], 0xa364f8
// 006387dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006387e1  894808               mov dword ptr [eax + 8], ecx
// 006387e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006387e8  89500c               mov dword ptr [eax + 0xc], edx
// 006387eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006387ef  894810               mov dword ptr [eax + 0x10], ecx
// 006387f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006387f6  895018               mov dword ptr [eax + 0x18], edx
// 006387f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006387fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638800  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638804  895020               mov dword ptr [eax + 0x20], edx
// 00638807  eb02                 jmp 0x63880b
// 00638809  33c0                 xor eax, eax
// 0063880b  56                   push esi
// 0063880c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638810  6a00                 push 0
// 00638812  8906                 mov dword ptr [esi], eax
// 00638814  e881f11600           call 0x7a799a
// 00638819  83c404               add esp, 4
// 0063881c  8bc6                 mov eax, esi
// 0063881e  5e                   pop esi
// 0063881f  59                   pop ecx
// 00638820  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
