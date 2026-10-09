// roc 2009-12 006ccb30  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccb30
//
// 006ccb30  51                   push ecx
// 006ccb31  6a28                 push 0x28
// 006ccb33  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccb3b  e8206d1200           call 0x7f3860
// 006ccb40  83c404               add esp, 4
// 006ccb43  85c0                 test eax, eax
// 006ccb45  7432                 je 0x6ccb79
// 006ccb47  c70020789d00         mov dword ptr [eax], 0x9d7820
// 006ccb4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccb51  894808               mov dword ptr [eax + 8], ecx
// 006ccb54  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccb58  89500c               mov dword ptr [eax + 0xc], edx
// 006ccb5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccb5f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccb62  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccb66  895018               mov dword ptr [eax + 0x18], edx
// 006ccb69  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccb6d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccb70  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccb74  895020               mov dword ptr [eax + 0x20], edx
// 006ccb77  eb02                 jmp 0x6ccb7b
// 006ccb79  33c0                 xor eax, eax
// 006ccb7b  56                   push esi
// 006ccb7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccb80  6a00                 push 0
// 006ccb82  8906                 mov dword ptr [esi], eax
// 006ccb84  e8d16c1200           call 0x7f385a
// 006ccb89  83c404               add esp, 4
// 006ccb8c  8bc6                 mov eax, esi
// 006ccb8e  5e                   pop esi
// 006ccb8f  59                   pop ecx
// 006ccb90  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
