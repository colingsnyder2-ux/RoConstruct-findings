// roc 2011-06 007159e0  unit: RBX::VehicleSeat  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007159e0
//
// 007159e0  51                   push ecx
// 007159e1  6a28                 push 0x28
// 007159e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007159eb  e86e460f00           call 0x80a05e
// 007159f0  83c404               add esp, 4
// 007159f3  85c0                 test eax, eax
// 007159f5  743a                 je 0x715a31
// 007159f7  c70024fbaa00         mov dword ptr [eax], 0xaafb24
// 007159fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715a01  894808               mov dword ptr [eax + 8], ecx
// 00715a04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715a08  89500c               mov dword ptr [eax + 0xc], edx
// 00715a0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715a0f  894810               mov dword ptr [eax + 0x10], ecx
// 00715a12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715a16  895018               mov dword ptr [eax + 0x18], edx
// 00715a19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00715a1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00715a20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00715a24  8b542420             mov edx, dword ptr [esp + 0x20]
// 00715a28  895020               mov dword ptr [eax + 0x20], edx
// 00715a2b  8901                 mov dword ptr [ecx], eax
// 00715a2d  8bc1                 mov eax, ecx
// 00715a2f  59                   pop ecx
// 00715a30  c3                   ret 
// 00715a31  8b442408             mov eax, dword ptr [esp + 8]
// 00715a35  33c9                 xor ecx, ecx
// 00715a37  8908                 mov dword ptr [eax], ecx
// 00715a39  59                   pop ecx
// 00715a3a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
