// roc 2011-06 0063ecf0  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063ecf0
//
// 0063ecf0  51                   push ecx
// 0063ecf1  6a28                 push 0x28
// 0063ecf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0063ecfb  e85eb31c00           call 0x80a05e
// 0063ed00  83c404               add esp, 4
// 0063ed03  85c0                 test eax, eax
// 0063ed05  743a                 je 0x63ed41
// 0063ed07  c700307ca900         mov dword ptr [eax], 0xa97c30
// 0063ed0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063ed11  894808               mov dword ptr [eax + 8], ecx
// 0063ed14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063ed18  89500c               mov dword ptr [eax + 0xc], edx
// 0063ed1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063ed1f  894810               mov dword ptr [eax + 0x10], ecx
// 0063ed22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063ed26  895018               mov dword ptr [eax + 0x18], edx
// 0063ed29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063ed2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063ed30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063ed34  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063ed38  895020               mov dword ptr [eax + 0x20], edx
// 0063ed3b  8901                 mov dword ptr [ecx], eax
// 0063ed3d  8bc1                 mov eax, ecx
// 0063ed3f  59                   pop ecx
// 0063ed40  c3                   ret 
// 0063ed41  8b442408             mov eax, dword ptr [esp + 8]
// 0063ed45  33c9                 xor ecx, ecx
// 0063ed47  8908                 mov dword ptr [eax], ecx
// 0063ed49  59                   pop ecx
// 0063ed4a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
