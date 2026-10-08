// roc 2008-06 0059a700  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a700
//
// 0059a700  51                   push ecx
// 0059a701  6a28                 push 0x28
// 0059a703  c744240400000000     mov dword ptr [esp + 4], 0
// 0059a70b  e810621000           call 0x6a0920
// 0059a710  83c404               add esp, 4
// 0059a713  85c0                 test eax, eax
// 0059a715  743a                 je 0x59a751
// 0059a717  c700a42b8300         mov dword ptr [eax], 0x832ba4
// 0059a71d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a721  894808               mov dword ptr [eax + 8], ecx
// 0059a724  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a728  89500c               mov dword ptr [eax + 0xc], edx
// 0059a72b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a72f  894810               mov dword ptr [eax + 0x10], ecx
// 0059a732  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a736  895018               mov dword ptr [eax + 0x18], edx
// 0059a739  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a73d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059a740  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059a744  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059a748  895020               mov dword ptr [eax + 0x20], edx
// 0059a74b  8901                 mov dword ptr [ecx], eax
// 0059a74d  8bc1                 mov eax, ecx
// 0059a74f  59                   pop ecx
// 0059a750  c3                   ret 
// 0059a751  8b442408             mov eax, dword ptr [esp + 8]
// 0059a755  33c9                 xor ecx, ecx
// 0059a757  8908                 mov dword ptr [eax], ecx
// 0059a759  59                   pop ecx
// 0059a75a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
