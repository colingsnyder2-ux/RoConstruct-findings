// roc 2009-12 006971f0  unit: RBX::HeartbeatInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006971f0
//
// 006971f0  51                   push ecx
// 006971f1  6a28                 push 0x28
// 006971f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006971fb  e860c61500           call 0x7f3860
// 00697200  83c404               add esp, 4
// 00697203  85c0                 test eax, eax
// 00697205  7432                 je 0x697239
// 00697207  c70040229d00         mov dword ptr [eax], 0x9d2240
// 0069720d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697211  894808               mov dword ptr [eax + 8], ecx
// 00697214  8b542410             mov edx, dword ptr [esp + 0x10]
// 00697218  89500c               mov dword ptr [eax + 0xc], edx
// 0069721b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069721f  894810               mov dword ptr [eax + 0x10], ecx
// 00697222  8b542418             mov edx, dword ptr [esp + 0x18]
// 00697226  895018               mov dword ptr [eax + 0x18], edx
// 00697229  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069722d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00697230  8b542420             mov edx, dword ptr [esp + 0x20]
// 00697234  895020               mov dword ptr [eax + 0x20], edx
// 00697237  eb02                 jmp 0x69723b
// 00697239  33c0                 xor eax, eax
// 0069723b  56                   push esi
// 0069723c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00697240  6a00                 push 0
// 00697242  8906                 mov dword ptr [esi], eax
// 00697244  e811c61500           call 0x7f385a
// 00697249  83c404               add esp, 4
// 0069724c  8bc6                 mov eax, esi
// 0069724e  5e                   pop esi
// 0069724f  59                   pop ecx
// 00697250  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
