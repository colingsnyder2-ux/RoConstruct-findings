// roc 2012-06 00752e80  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752e80
//
// 00752e80  51                   push ecx
// 00752e81  6a28                 push 0x28
// 00752e83  c744240400000000     mov dword ptr [esp + 4], 0
// 00752e8b  e88af22200           call 0x98211a
// 00752e90  83c404               add esp, 4
// 00752e93  85c0                 test eax, eax
// 00752e95  7432                 je 0x752ec9
// 00752e97  c70004c6ba00         mov dword ptr [eax], 0xbac604
// 00752e9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752ea1  894808               mov dword ptr [eax + 8], ecx
// 00752ea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752ea8  89500c               mov dword ptr [eax + 0xc], edx
// 00752eab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752eaf  894810               mov dword ptr [eax + 0x10], ecx
// 00752eb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752eb6  895018               mov dword ptr [eax + 0x18], edx
// 00752eb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752ebd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752ec0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752ec4  895020               mov dword ptr [eax + 0x20], edx
// 00752ec7  eb02                 jmp 0x752ecb
// 00752ec9  33c0                 xor eax, eax
// 00752ecb  56                   push esi
// 00752ecc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752ed0  6a00                 push 0
// 00752ed2  8906                 mov dword ptr [esi], eax
// 00752ed4  e83bf22200           call 0x982114
// 00752ed9  83c404               add esp, 4
// 00752edc  8bc6                 mov eax, esi
// 00752ede  5e                   pop esi
// 00752edf  59                   pop ecx
// 00752ee0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
