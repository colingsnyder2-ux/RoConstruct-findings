// roc 2009-12 006ccd60  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccd60
//
// 006ccd60  51                   push ecx
// 006ccd61  6a28                 push 0x28
// 006ccd63  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccd6b  e8f06a1200           call 0x7f3860
// 006ccd70  83c404               add esp, 4
// 006ccd73  85c0                 test eax, eax
// 006ccd75  7432                 je 0x6ccda9
// 006ccd77  c70098789d00         mov dword ptr [eax], 0x9d7898
// 006ccd7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccd81  894808               mov dword ptr [eax + 8], ecx
// 006ccd84  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccd88  89500c               mov dword ptr [eax + 0xc], edx
// 006ccd8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccd8f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccd92  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccd96  895018               mov dword ptr [eax + 0x18], edx
// 006ccd99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccd9d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccda0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccda4  895020               mov dword ptr [eax + 0x20], edx
// 006ccda7  eb02                 jmp 0x6ccdab
// 006ccda9  33c0                 xor eax, eax
// 006ccdab  56                   push esi
// 006ccdac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccdb0  6a00                 push 0
// 006ccdb2  8906                 mov dword ptr [esi], eax
// 006ccdb4  e8a16a1200           call 0x7f385a
// 006ccdb9  83c404               add esp, 4
// 006ccdbc  8bc6                 mov eax, esi
// 006ccdbe  5e                   pop esi
// 006ccdbf  59                   pop ecx
// 006ccdc0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
