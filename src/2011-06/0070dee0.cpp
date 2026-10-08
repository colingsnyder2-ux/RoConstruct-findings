// roc 2011-06 0070dee0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070dee0
//
// 0070dee0  51                   push ecx
// 0070dee1  6a28                 push 0x28
// 0070dee3  c744240400000000     mov dword ptr [esp + 4], 0
// 0070deeb  e86ec10f00           call 0x80a05e
// 0070def0  83c404               add esp, 4
// 0070def3  85c0                 test eax, eax
// 0070def5  743a                 je 0x70df31
// 0070def7  c70070e5aa00         mov dword ptr [eax], 0xaae570
// 0070defd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070df01  894808               mov dword ptr [eax + 8], ecx
// 0070df04  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070df08  89500c               mov dword ptr [eax + 0xc], edx
// 0070df0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070df0f  894810               mov dword ptr [eax + 0x10], ecx
// 0070df12  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070df16  895018               mov dword ptr [eax + 0x18], edx
// 0070df19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070df1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0070df20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070df24  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070df28  895020               mov dword ptr [eax + 0x20], edx
// 0070df2b  8901                 mov dword ptr [ecx], eax
// 0070df2d  8bc1                 mov eax, ecx
// 0070df2f  59                   pop ecx
// 0070df30  c3                   ret 
// 0070df31  8b442408             mov eax, dword ptr [esp + 8]
// 0070df35  33c9                 xor ecx, ecx
// 0070df37  8908                 mov dword ptr [eax], ecx
// 0070df39  59                   pop ecx
// 0070df3a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
