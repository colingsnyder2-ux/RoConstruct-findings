// roc 2012-06 00752d30  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752d30
//
// 00752d30  51                   push ecx
// 00752d31  6a28                 push 0x28
// 00752d33  c744240400000000     mov dword ptr [esp + 4], 0
// 00752d3b  e8daf32200           call 0x98211a
// 00752d40  83c404               add esp, 4
// 00752d43  85c0                 test eax, eax
// 00752d45  7432                 je 0x752d79
// 00752d47  c700c8c5ba00         mov dword ptr [eax], 0xbac5c8
// 00752d4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752d51  894808               mov dword ptr [eax + 8], ecx
// 00752d54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752d58  89500c               mov dword ptr [eax + 0xc], edx
// 00752d5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752d5f  894810               mov dword ptr [eax + 0x10], ecx
// 00752d62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752d66  895018               mov dword ptr [eax + 0x18], edx
// 00752d69  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752d6d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752d70  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752d74  895020               mov dword ptr [eax + 0x20], edx
// 00752d77  eb02                 jmp 0x752d7b
// 00752d79  33c0                 xor eax, eax
// 00752d7b  56                   push esi
// 00752d7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752d80  6a00                 push 0
// 00752d82  8906                 mov dword ptr [esi], eax
// 00752d84  e88bf32200           call 0x982114
// 00752d89  83c404               add esp, 4
// 00752d8c  8bc6                 mov eax, esi
// 00752d8e  5e                   pop esi
// 00752d8f  59                   pop ecx
// 00752d90  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
