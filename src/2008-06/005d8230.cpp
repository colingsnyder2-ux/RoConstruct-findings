// roc 2008-06 005d8230  unit: RBX::Humanoid  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8230
//
// 005d8230  51                   push ecx
// 005d8231  6a28                 push 0x28
// 005d8233  c744240400000000     mov dword ptr [esp + 4], 0
// 005d823b  e8e0860c00           call 0x6a0920
// 005d8240  83c404               add esp, 4
// 005d8243  85c0                 test eax, eax
// 005d8245  743a                 je 0x5d8281
// 005d8247  c70030d38300         mov dword ptr [eax], 0x83d330
// 005d824d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8251  894808               mov dword ptr [eax + 8], ecx
// 005d8254  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d8258  89500c               mov dword ptr [eax + 0xc], edx
// 005d825b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d825f  894810               mov dword ptr [eax + 0x10], ecx
// 005d8262  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d8266  895018               mov dword ptr [eax + 0x18], edx
// 005d8269  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d826d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d8270  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d8274  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d8278  895020               mov dword ptr [eax + 0x20], edx
// 005d827b  8901                 mov dword ptr [ecx], eax
// 005d827d  8bc1                 mov eax, ecx
// 005d827f  59                   pop ecx
// 005d8280  c3                   ret 
// 005d8281  8b442408             mov eax, dword ptr [esp + 8]
// 005d8285  33c9                 xor ecx, ecx
// 005d8287  8908                 mov dword ptr [eax], ecx
// 005d8289  59                   pop ecx
// 005d828a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
