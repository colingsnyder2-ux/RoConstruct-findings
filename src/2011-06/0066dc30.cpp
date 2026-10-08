// roc 2011-06 0066dc30  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066dc30
//
// 0066dc30  51                   push ecx
// 0066dc31  6a28                 push 0x28
// 0066dc33  c744240400000000     mov dword ptr [esp + 4], 0
// 0066dc3b  e81ec41900           call 0x80a05e
// 0066dc40  83c404               add esp, 4
// 0066dc43  85c0                 test eax, eax
// 0066dc45  743a                 je 0x66dc81
// 0066dc47  c70028c9a900         mov dword ptr [eax], 0xa9c928
// 0066dc4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066dc51  894808               mov dword ptr [eax + 8], ecx
// 0066dc54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066dc58  89500c               mov dword ptr [eax + 0xc], edx
// 0066dc5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066dc5f  894810               mov dword ptr [eax + 0x10], ecx
// 0066dc62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066dc66  895018               mov dword ptr [eax + 0x18], edx
// 0066dc69  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066dc6d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066dc70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066dc74  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066dc78  895020               mov dword ptr [eax + 0x20], edx
// 0066dc7b  8901                 mov dword ptr [ecx], eax
// 0066dc7d  8bc1                 mov eax, ecx
// 0066dc7f  59                   pop ecx
// 0066dc80  c3                   ret 
// 0066dc81  8b442408             mov eax, dword ptr [esp + 8]
// 0066dc85  33c9                 xor ecx, ecx
// 0066dc87  8908                 mov dword ptr [eax], ecx
// 0066dc89  59                   pop ecx
// 0066dc8a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
