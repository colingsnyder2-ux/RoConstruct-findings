// roc 2011-06 00715a40  unit: RBX::VehicleSeat  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00715a40
//
// 00715a40  51                   push ecx
// 00715a41  6a28                 push 0x28
// 00715a43  c744240400000000     mov dword ptr [esp + 4], 0
// 00715a4b  e80e460f00           call 0x80a05e
// 00715a50  83c404               add esp, 4
// 00715a53  85c0                 test eax, eax
// 00715a55  743a                 je 0x715a91
// 00715a57  c70038fbaa00         mov dword ptr [eax], 0xaafb38
// 00715a5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715a61  894808               mov dword ptr [eax + 8], ecx
// 00715a64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715a68  89500c               mov dword ptr [eax + 0xc], edx
// 00715a6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715a6f  894810               mov dword ptr [eax + 0x10], ecx
// 00715a72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715a76  895018               mov dword ptr [eax + 0x18], edx
// 00715a79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00715a7d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00715a80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00715a84  8b542420             mov edx, dword ptr [esp + 0x20]
// 00715a88  895020               mov dword ptr [eax + 0x20], edx
// 00715a8b  8901                 mov dword ptr [ecx], eax
// 00715a8d  8bc1                 mov eax, ecx
// 00715a8f  59                   pop ecx
// 00715a90  c3                   ret 
// 00715a91  8b442408             mov eax, dword ptr [esp + 8]
// 00715a95  33c9                 xor ecx, ecx
// 00715a97  8908                 mov dword ptr [eax], ecx
// 00715a99  59                   pop ecx
// 00715a9a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
