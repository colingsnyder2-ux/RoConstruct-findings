// roc 2012-06 00752e10  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752e10
//
// 00752e10  51                   push ecx
// 00752e11  6a28                 push 0x28
// 00752e13  c744240400000000     mov dword ptr [esp + 4], 0
// 00752e1b  e8faf22200           call 0x98211a
// 00752e20  83c404               add esp, 4
// 00752e23  85c0                 test eax, eax
// 00752e25  7432                 je 0x752e59
// 00752e27  c700f0c5ba00         mov dword ptr [eax], 0xbac5f0
// 00752e2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752e31  894808               mov dword ptr [eax + 8], ecx
// 00752e34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752e38  89500c               mov dword ptr [eax + 0xc], edx
// 00752e3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752e3f  894810               mov dword ptr [eax + 0x10], ecx
// 00752e42  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752e46  895018               mov dword ptr [eax + 0x18], edx
// 00752e49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752e4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752e50  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752e54  895020               mov dword ptr [eax + 0x20], edx
// 00752e57  eb02                 jmp 0x752e5b
// 00752e59  33c0                 xor eax, eax
// 00752e5b  56                   push esi
// 00752e5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752e60  6a00                 push 0
// 00752e62  8906                 mov dword ptr [esi], eax
// 00752e64  e8abf22200           call 0x982114
// 00752e69  83c404               add esp, 4
// 00752e6c  8bc6                 mov eax, esi
// 00752e6e  5e                   pop esi
// 00752e6f  59                   pop ecx
// 00752e70  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
