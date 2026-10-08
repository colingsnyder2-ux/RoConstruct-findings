// roc 2011-06 0063ed50  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063ed50
//
// 0063ed50  51                   push ecx
// 0063ed51  6a28                 push 0x28
// 0063ed53  c744240400000000     mov dword ptr [esp + 4], 0
// 0063ed5b  e8feb21c00           call 0x80a05e
// 0063ed60  83c404               add esp, 4
// 0063ed63  85c0                 test eax, eax
// 0063ed65  743a                 je 0x63eda1
// 0063ed67  c700447ca900         mov dword ptr [eax], 0xa97c44
// 0063ed6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063ed71  894808               mov dword ptr [eax + 8], ecx
// 0063ed74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063ed78  89500c               mov dword ptr [eax + 0xc], edx
// 0063ed7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063ed7f  894810               mov dword ptr [eax + 0x10], ecx
// 0063ed82  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063ed86  895018               mov dword ptr [eax + 0x18], edx
// 0063ed89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063ed8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063ed90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063ed94  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063ed98  895020               mov dword ptr [eax + 0x20], edx
// 0063ed9b  8901                 mov dword ptr [ecx], eax
// 0063ed9d  8bc1                 mov eax, ecx
// 0063ed9f  59                   pop ecx
// 0063eda0  c3                   ret 
// 0063eda1  8b442408             mov eax, dword ptr [esp + 8]
// 0063eda5  33c9                 xor ecx, ecx
// 0063eda7  8908                 mov dword ptr [eax], ecx
// 0063eda9  59                   pop ecx
// 0063edaa  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
