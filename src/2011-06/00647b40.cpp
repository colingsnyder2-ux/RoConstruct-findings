// roc 2011-06 00647b40  unit: RBX::Accoutrement  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647b40
//
// 00647b40  51                   push ecx
// 00647b41  6a28                 push 0x28
// 00647b43  c744240400000000     mov dword ptr [esp + 4], 0
// 00647b4b  e80e251c00           call 0x80a05e
// 00647b50  83c404               add esp, 4
// 00647b53  85c0                 test eax, eax
// 00647b55  743a                 je 0x647b91
// 00647b57  c700388aa900         mov dword ptr [eax], 0xa98a38
// 00647b5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00647b61  894808               mov dword ptr [eax + 8], ecx
// 00647b64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00647b68  89500c               mov dword ptr [eax + 0xc], edx
// 00647b6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00647b6f  894810               mov dword ptr [eax + 0x10], ecx
// 00647b72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00647b76  895018               mov dword ptr [eax + 0x18], edx
// 00647b79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00647b7d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00647b80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647b84  8b542420             mov edx, dword ptr [esp + 0x20]
// 00647b88  895020               mov dword ptr [eax + 0x20], edx
// 00647b8b  8901                 mov dword ptr [ecx], eax
// 00647b8d  8bc1                 mov eax, ecx
// 00647b8f  59                   pop ecx
// 00647b90  c3                   ret 
// 00647b91  8b442408             mov eax, dword ptr [esp + 8]
// 00647b95  33c9                 xor ecx, ecx
// 00647b97  8908                 mov dword ptr [eax], ecx
// 00647b99  59                   pop ecx
// 00647b9a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
