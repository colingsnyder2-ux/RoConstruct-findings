// roc 2011-06 0066db70  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066db70
//
// 0066db70  51                   push ecx
// 0066db71  6a28                 push 0x28
// 0066db73  c744240400000000     mov dword ptr [esp + 4], 0
// 0066db7b  e8dec41900           call 0x80a05e
// 0066db80  83c404               add esp, 4
// 0066db83  85c0                 test eax, eax
// 0066db85  743a                 je 0x66dbc1
// 0066db87  c70000c9a900         mov dword ptr [eax], 0xa9c900
// 0066db8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066db91  894808               mov dword ptr [eax + 8], ecx
// 0066db94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066db98  89500c               mov dword ptr [eax + 0xc], edx
// 0066db9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066db9f  894810               mov dword ptr [eax + 0x10], ecx
// 0066dba2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066dba6  895018               mov dword ptr [eax + 0x18], edx
// 0066dba9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066dbad  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066dbb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066dbb4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066dbb8  895020               mov dword ptr [eax + 0x20], edx
// 0066dbbb  8901                 mov dword ptr [ecx], eax
// 0066dbbd  8bc1                 mov eax, ecx
// 0066dbbf  59                   pop ecx
// 0066dbc0  c3                   ret 
// 0066dbc1  8b442408             mov eax, dword ptr [esp + 8]
// 0066dbc5  33c9                 xor ecx, ecx
// 0066dbc7  8908                 mov dword ptr [eax], ecx
// 0066dbc9  59                   pop ecx
// 0066dbca  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
