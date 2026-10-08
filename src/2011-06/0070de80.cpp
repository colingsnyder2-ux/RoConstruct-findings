// roc 2011-06 0070de80  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070de80
//
// 0070de80  51                   push ecx
// 0070de81  6a28                 push 0x28
// 0070de83  c744240400000000     mov dword ptr [esp + 4], 0
// 0070de8b  e8cec10f00           call 0x80a05e
// 0070de90  83c404               add esp, 4
// 0070de93  85c0                 test eax, eax
// 0070de95  743a                 je 0x70ded1
// 0070de97  c7005ce5aa00         mov dword ptr [eax], 0xaae55c
// 0070de9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070dea1  894808               mov dword ptr [eax + 8], ecx
// 0070dea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070dea8  89500c               mov dword ptr [eax + 0xc], edx
// 0070deab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070deaf  894810               mov dword ptr [eax + 0x10], ecx
// 0070deb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070deb6  895018               mov dword ptr [eax + 0x18], edx
// 0070deb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070debd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0070dec0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070dec4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070dec8  895020               mov dword ptr [eax + 0x20], edx
// 0070decb  8901                 mov dword ptr [ecx], eax
// 0070decd  8bc1                 mov eax, ecx
// 0070decf  59                   pop ecx
// 0070ded0  c3                   ret 
// 0070ded1  8b442408             mov eax, dword ptr [esp + 8]
// 0070ded5  33c9                 xor ecx, ecx
// 0070ded7  8908                 mov dword ptr [eax], ecx
// 0070ded9  59                   pop ecx
// 0070deda  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
