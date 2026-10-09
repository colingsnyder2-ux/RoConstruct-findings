// roc 2009-12 006ab430  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ab430
//
// 006ab430  51                   push ecx
// 006ab431  6a28                 push 0x28
// 006ab433  c744240400000000     mov dword ptr [esp + 4], 0
// 006ab43b  e820841400           call 0x7f3860
// 006ab440  83c404               add esp, 4
// 006ab443  85c0                 test eax, eax
// 006ab445  7432                 je 0x6ab479
// 006ab447  c7009c319d00         mov dword ptr [eax], 0x9d319c
// 006ab44d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ab451  894808               mov dword ptr [eax + 8], ecx
// 006ab454  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ab458  89500c               mov dword ptr [eax + 0xc], edx
// 006ab45b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ab45f  894810               mov dword ptr [eax + 0x10], ecx
// 006ab462  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ab466  895018               mov dword ptr [eax + 0x18], edx
// 006ab469  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ab46d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ab470  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ab474  895020               mov dword ptr [eax + 0x20], edx
// 006ab477  eb02                 jmp 0x6ab47b
// 006ab479  33c0                 xor eax, eax
// 006ab47b  56                   push esi
// 006ab47c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ab480  6a00                 push 0
// 006ab482  8906                 mov dword ptr [esi], eax
// 006ab484  e8d1831400           call 0x7f385a
// 006ab489  83c404               add esp, 4
// 006ab48c  8bc6                 mov eax, esi
// 006ab48e  5e                   pop esi
// 006ab48f  59                   pop ecx
// 006ab490  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
