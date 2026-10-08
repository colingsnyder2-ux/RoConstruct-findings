// roc 2012-06 00752bb0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752bb0
//
// 00752bb0  51                   push ecx
// 00752bb1  6a28                 push 0x28
// 00752bb3  c744240400000000     mov dword ptr [esp + 4], 0
// 00752bbb  e85af52200           call 0x98211a
// 00752bc0  83c404               add esp, 4
// 00752bc3  85c0                 test eax, eax
// 00752bc5  7432                 je 0x752bf9
// 00752bc7  c70078c5ba00         mov dword ptr [eax], 0xbac578
// 00752bcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752bd1  894808               mov dword ptr [eax + 8], ecx
// 00752bd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752bd8  89500c               mov dword ptr [eax + 0xc], edx
// 00752bdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752bdf  894810               mov dword ptr [eax + 0x10], ecx
// 00752be2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752be6  895018               mov dword ptr [eax + 0x18], edx
// 00752be9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752bed  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752bf0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752bf4  895020               mov dword ptr [eax + 0x20], edx
// 00752bf7  eb02                 jmp 0x752bfb
// 00752bf9  33c0                 xor eax, eax
// 00752bfb  56                   push esi
// 00752bfc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752c00  6a00                 push 0
// 00752c02  8906                 mov dword ptr [esi], eax
// 00752c04  e80bf52200           call 0x982114
// 00752c09  83c404               add esp, 4
// 00752c0c  8bc6                 mov eax, esi
// 00752c0e  5e                   pop esi
// 00752c0f  59                   pop ecx
// 00752c10  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
