// roc 2010-06 0066dab0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066dab0
//
// 0066dab0  51                   push ecx
// 0066dab1  6a28                 push 0x28
// 0066dab3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066dabb  e8e09e1300           call 0x7a79a0
// 0066dac0  83c404               add esp, 4
// 0066dac3  85c0                 test eax, eax
// 0066dac5  7432                 je 0x66daf9
// 0066dac7  c70088c8a300         mov dword ptr [eax], 0xa3c888
// 0066dacd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066dad1  894808               mov dword ptr [eax + 8], ecx
// 0066dad4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066dad8  89500c               mov dword ptr [eax + 0xc], edx
// 0066dadb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066dadf  894810               mov dword ptr [eax + 0x10], ecx
// 0066dae2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066dae6  895018               mov dword ptr [eax + 0x18], edx
// 0066dae9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066daed  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066daf0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066daf4  895020               mov dword ptr [eax + 0x20], edx
// 0066daf7  eb02                 jmp 0x66dafb
// 0066daf9  33c0                 xor eax, eax
// 0066dafb  56                   push esi
// 0066dafc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066db00  6a00                 push 0
// 0066db02  8906                 mov dword ptr [esi], eax
// 0066db04  e8919e1300           call 0x7a799a
// 0066db09  83c404               add esp, 4
// 0066db0c  8bc6                 mov eax, esi
// 0066db0e  5e                   pop esi
// 0066db0f  59                   pop ecx
// 0066db10  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
