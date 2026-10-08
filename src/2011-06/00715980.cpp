// roc 2011-06 00715980  unit: RBX::VehicleSeat  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00715980
//
// 00715980  51                   push ecx
// 00715981  6a28                 push 0x28
// 00715983  c744240400000000     mov dword ptr [esp + 4], 0
// 0071598b  e8ce460f00           call 0x80a05e
// 00715990  83c404               add esp, 4
// 00715993  85c0                 test eax, eax
// 00715995  743a                 je 0x7159d1
// 00715997  c70010fbaa00         mov dword ptr [eax], 0xaafb10
// 0071599d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007159a1  894808               mov dword ptr [eax + 8], ecx
// 007159a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007159a8  89500c               mov dword ptr [eax + 0xc], edx
// 007159ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007159af  894810               mov dword ptr [eax + 0x10], ecx
// 007159b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007159b6  895018               mov dword ptr [eax + 0x18], edx
// 007159b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007159bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007159c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007159c4  8b542420             mov edx, dword ptr [esp + 0x20]
// 007159c8  895020               mov dword ptr [eax + 0x20], edx
// 007159cb  8901                 mov dword ptr [ecx], eax
// 007159cd  8bc1                 mov eax, ecx
// 007159cf  59                   pop ecx
// 007159d0  c3                   ret 
// 007159d1  8b442408             mov eax, dword ptr [esp + 8]
// 007159d5  33c9                 xor ecx, ecx
// 007159d7  8908                 mov dword ptr [eax], ecx
// 007159d9  59                   pop ecx
// 007159da  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
