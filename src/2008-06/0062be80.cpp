// roc 2008-06 0062be80  unit: RBX::VFlagStand::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062be80
//
// 0062be80  51                   push ecx
// 0062be81  6a28                 push 0x28
// 0062be83  c744240400000000     mov dword ptr [esp + 4], 0
// 0062be8b  e8904a0700           call 0x6a0920
// 0062be90  83c404               add esp, 4
// 0062be93  85c0                 test eax, eax
// 0062be95  743a                 je 0x62bed1
// 0062be97  c70050618400         mov dword ptr [eax], 0x846150
// 0062be9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bea1  894808               mov dword ptr [eax + 8], ecx
// 0062bea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062bea8  89500c               mov dword ptr [eax + 0xc], edx
// 0062beab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062beaf  894810               mov dword ptr [eax + 0x10], ecx
// 0062beb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062beb6  895018               mov dword ptr [eax + 0x18], edx
// 0062beb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062bebd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0062bec0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062bec4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062bec8  895020               mov dword ptr [eax + 0x20], edx
// 0062becb  8901                 mov dword ptr [ecx], eax
// 0062becd  8bc1                 mov eax, ecx
// 0062becf  59                   pop ecx
// 0062bed0  c3                   ret 
// 0062bed1  8b442408             mov eax, dword ptr [esp + 8]
// 0062bed5  33c9                 xor ecx, ecx
// 0062bed7  8908                 mov dword ptr [eax], ecx
// 0062bed9  59                   pop ecx
// 0062beda  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
