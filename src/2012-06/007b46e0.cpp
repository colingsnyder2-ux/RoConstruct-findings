// roc 2012-06 007b46e0  unit: RBX::VBasicPartInstance::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b46e0
//
// 007b46e0  51                   push ecx
// 007b46e1  6a28                 push 0x28
// 007b46e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007b46eb  e82ada1c00           call 0x98211a
// 007b46f0  83c404               add esp, 4
// 007b46f3  85c0                 test eax, eax
// 007b46f5  7432                 je 0x7b4729
// 007b46f7  c700f884bb00         mov dword ptr [eax], 0xbb84f8
// 007b46fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b4701  894808               mov dword ptr [eax + 8], ecx
// 007b4704  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b4708  89500c               mov dword ptr [eax + 0xc], edx
// 007b470b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b470f  894810               mov dword ptr [eax + 0x10], ecx
// 007b4712  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b4716  895018               mov dword ptr [eax + 0x18], edx
// 007b4719  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b471d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007b4720  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b4724  895020               mov dword ptr [eax + 0x20], edx
// 007b4727  eb02                 jmp 0x7b472b
// 007b4729  33c0                 xor eax, eax
// 007b472b  56                   push esi
// 007b472c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b4730  6a00                 push 0
// 007b4732  8906                 mov dword ptr [esi], eax
// 007b4734  e8dbd91c00           call 0x982114
// 007b4739  83c404               add esp, 4
// 007b473c  8bc6                 mov eax, esi
// 007b473e  5e                   pop esi
// 007b473f  59                   pop ecx
// 007b4740  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
