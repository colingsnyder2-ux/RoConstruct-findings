// roc 2011-06 0070de20  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070de20
//
// 0070de20  51                   push ecx
// 0070de21  6a28                 push 0x28
// 0070de23  c744240400000000     mov dword ptr [esp + 4], 0
// 0070de2b  e82ec20f00           call 0x80a05e
// 0070de30  83c404               add esp, 4
// 0070de33  85c0                 test eax, eax
// 0070de35  743a                 je 0x70de71
// 0070de37  c70048e5aa00         mov dword ptr [eax], 0xaae548
// 0070de3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070de41  894808               mov dword ptr [eax + 8], ecx
// 0070de44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070de48  89500c               mov dword ptr [eax + 0xc], edx
// 0070de4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070de4f  894810               mov dword ptr [eax + 0x10], ecx
// 0070de52  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070de56  895018               mov dword ptr [eax + 0x18], edx
// 0070de59  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070de5d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0070de60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070de64  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070de68  895020               mov dword ptr [eax + 0x20], edx
// 0070de6b  8901                 mov dword ptr [ecx], eax
// 0070de6d  8bc1                 mov eax, ecx
// 0070de6f  59                   pop ecx
// 0070de70  c3                   ret 
// 0070de71  8b442408             mov eax, dword ptr [esp + 8]
// 0070de75  33c9                 xor ecx, ecx
// 0070de77  8908                 mov dword ptr [eax], ecx
// 0070de79  59                   pop ecx
// 0070de7a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
