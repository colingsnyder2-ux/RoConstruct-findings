// roc 2011-06 00647ba0  unit: RBX::Accoutrement  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647ba0
//
// 00647ba0  51                   push ecx
// 00647ba1  6a28                 push 0x28
// 00647ba3  c744240400000000     mov dword ptr [esp + 4], 0
// 00647bab  e8ae241c00           call 0x80a05e
// 00647bb0  83c404               add esp, 4
// 00647bb3  85c0                 test eax, eax
// 00647bb5  743a                 je 0x647bf1
// 00647bb7  c7004c8aa900         mov dword ptr [eax], 0xa98a4c
// 00647bbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00647bc1  894808               mov dword ptr [eax + 8], ecx
// 00647bc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00647bc8  89500c               mov dword ptr [eax + 0xc], edx
// 00647bcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00647bcf  894810               mov dword ptr [eax + 0x10], ecx
// 00647bd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00647bd6  895018               mov dword ptr [eax + 0x18], edx
// 00647bd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00647bdd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00647be0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647be4  8b542420             mov edx, dword ptr [esp + 0x20]
// 00647be8  895020               mov dword ptr [eax + 0x20], edx
// 00647beb  8901                 mov dword ptr [ecx], eax
// 00647bed  8bc1                 mov eax, ecx
// 00647bef  59                   pop ecx
// 00647bf0  c3                   ret 
// 00647bf1  8b442408             mov eax, dword ptr [esp + 8]
// 00647bf5  33c9                 xor ecx, ecx
// 00647bf7  8908                 mov dword ptr [eax], ecx
// 00647bf9  59                   pop ecx
// 00647bfa  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
