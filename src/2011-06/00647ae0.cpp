// roc 2011-06 00647ae0  unit: RBX::Accoutrement  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647ae0
//
// 00647ae0  51                   push ecx
// 00647ae1  6a28                 push 0x28
// 00647ae3  c744240400000000     mov dword ptr [esp + 4], 0
// 00647aeb  e86e251c00           call 0x80a05e
// 00647af0  83c404               add esp, 4
// 00647af3  85c0                 test eax, eax
// 00647af5  743a                 je 0x647b31
// 00647af7  c700248aa900         mov dword ptr [eax], 0xa98a24
// 00647afd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00647b01  894808               mov dword ptr [eax + 8], ecx
// 00647b04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00647b08  89500c               mov dword ptr [eax + 0xc], edx
// 00647b0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00647b0f  894810               mov dword ptr [eax + 0x10], ecx
// 00647b12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00647b16  895018               mov dword ptr [eax + 0x18], edx
// 00647b19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00647b1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00647b20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647b24  8b542420             mov edx, dword ptr [esp + 0x20]
// 00647b28  895020               mov dword ptr [eax + 0x20], edx
// 00647b2b  8901                 mov dword ptr [ecx], eax
// 00647b2d  8bc1                 mov eax, ecx
// 00647b2f  59                   pop ecx
// 00647b30  c3                   ret 
// 00647b31  8b442408             mov eax, dword ptr [esp + 8]
// 00647b35  33c9                 xor ecx, ecx
// 00647b37  8908                 mov dword ptr [eax], ecx
// 00647b39  59                   pop ecx
// 00647b3a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
