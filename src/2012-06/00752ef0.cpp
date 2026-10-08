// roc 2012-06 00752ef0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752ef0
//
// 00752ef0  51                   push ecx
// 00752ef1  6a28                 push 0x28
// 00752ef3  c744240400000000     mov dword ptr [esp + 4], 0
// 00752efb  e81af22200           call 0x98211a
// 00752f00  83c404               add esp, 4
// 00752f03  85c0                 test eax, eax
// 00752f05  7432                 je 0x752f39
// 00752f07  c70018c6ba00         mov dword ptr [eax], 0xbac618
// 00752f0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752f11  894808               mov dword ptr [eax + 8], ecx
// 00752f14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752f18  89500c               mov dword ptr [eax + 0xc], edx
// 00752f1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752f1f  894810               mov dword ptr [eax + 0x10], ecx
// 00752f22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752f26  895018               mov dword ptr [eax + 0x18], edx
// 00752f29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752f2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752f30  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752f34  895020               mov dword ptr [eax + 0x20], edx
// 00752f37  eb02                 jmp 0x752f3b
// 00752f39  33c0                 xor eax, eax
// 00752f3b  56                   push esi
// 00752f3c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752f40  6a00                 push 0
// 00752f42  8906                 mov dword ptr [esi], eax
// 00752f44  e8cbf12200           call 0x982114
// 00752f49  83c404               add esp, 4
// 00752f4c  8bc6                 mov eax, esi
// 00752f4e  5e                   pop esi
// 00752f4f  59                   pop ecx
// 00752f50  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
