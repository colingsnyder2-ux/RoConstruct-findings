// roc 2009-12 006cccf0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cccf0
//
// 006cccf0  51                   push ecx
// 006cccf1  6a28                 push 0x28
// 006cccf3  c744240400000000     mov dword ptr [esp + 4], 0
// 006cccfb  e8606b1200           call 0x7f3860
// 006ccd00  83c404               add esp, 4
// 006ccd03  85c0                 test eax, eax
// 006ccd05  7432                 je 0x6ccd39
// 006ccd07  c70080789d00         mov dword ptr [eax], 0x9d7880
// 006ccd0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccd11  894808               mov dword ptr [eax + 8], ecx
// 006ccd14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccd18  89500c               mov dword ptr [eax + 0xc], edx
// 006ccd1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccd1f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccd22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccd26  895018               mov dword ptr [eax + 0x18], edx
// 006ccd29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccd2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccd30  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccd34  895020               mov dword ptr [eax + 0x20], edx
// 006ccd37  eb02                 jmp 0x6ccd3b
// 006ccd39  33c0                 xor eax, eax
// 006ccd3b  56                   push esi
// 006ccd3c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccd40  6a00                 push 0
// 006ccd42  8906                 mov dword ptr [esi], eax
// 006ccd44  e8116b1200           call 0x7f385a
// 006ccd49  83c404               add esp, 4
// 006ccd4c  8bc6                 mov eax, esi
// 006ccd4e  5e                   pop esi
// 006ccd4f  59                   pop ecx
// 006ccd50  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
