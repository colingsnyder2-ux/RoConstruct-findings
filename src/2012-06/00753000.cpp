// roc 2012-06 00753000  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00753000
//
// 00753000  51                   push ecx
// 00753001  6a28                 push 0x28
// 00753003  c744240400000000     mov dword ptr [esp + 4], 0
// 0075300b  e80af12200           call 0x98211a
// 00753010  83c404               add esp, 4
// 00753013  85c0                 test eax, eax
// 00753015  7432                 je 0x753049
// 00753017  c70054c6ba00         mov dword ptr [eax], 0xbac654
// 0075301d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00753021  894808               mov dword ptr [eax + 8], ecx
// 00753024  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753028  89500c               mov dword ptr [eax + 0xc], edx
// 0075302b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075302f  894810               mov dword ptr [eax + 0x10], ecx
// 00753032  8b542418             mov edx, dword ptr [esp + 0x18]
// 00753036  895018               mov dword ptr [eax + 0x18], edx
// 00753039  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0075303d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00753040  8b542420             mov edx, dword ptr [esp + 0x20]
// 00753044  895020               mov dword ptr [eax + 0x20], edx
// 00753047  eb02                 jmp 0x75304b
// 00753049  33c0                 xor eax, eax
// 0075304b  56                   push esi
// 0075304c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00753050  6a00                 push 0
// 00753052  8906                 mov dword ptr [esi], eax
// 00753054  e8bbf02200           call 0x982114
// 00753059  83c404               add esp, 4
// 0075305c  8bc6                 mov eax, esi
// 0075305e  5e                   pop esi
// 0075305f  59                   pop ecx
// 00753060  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
