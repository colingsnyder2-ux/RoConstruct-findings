// roc 2011-06 00690bf0  unit: RBX::FormFactorPart  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00690bf0
//
// 00690bf0  51                   push ecx
// 00690bf1  6a28                 push 0x28
// 00690bf3  c744240400000000     mov dword ptr [esp + 4], 0
// 00690bfb  e85e941700           call 0x80a05e
// 00690c00  83c404               add esp, 4
// 00690c03  85c0                 test eax, eax
// 00690c05  743a                 je 0x690c41
// 00690c07  c7009806aa00         mov dword ptr [eax], 0xaa0698
// 00690c0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00690c11  894808               mov dword ptr [eax + 8], ecx
// 00690c14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00690c18  89500c               mov dword ptr [eax + 0xc], edx
// 00690c1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00690c1f  894810               mov dword ptr [eax + 0x10], ecx
// 00690c22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00690c26  895018               mov dword ptr [eax + 0x18], edx
// 00690c29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00690c2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00690c30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00690c34  8b542420             mov edx, dword ptr [esp + 0x20]
// 00690c38  895020               mov dword ptr [eax + 0x20], edx
// 00690c3b  8901                 mov dword ptr [ecx], eax
// 00690c3d  8bc1                 mov eax, ecx
// 00690c3f  59                   pop ecx
// 00690c40  c3                   ret 
// 00690c41  8b442408             mov eax, dword ptr [esp + 8]
// 00690c45  33c9                 xor ecx, ecx
// 00690c47  8908                 mov dword ptr [eax], ecx
// 00690c49  59                   pop ecx
// 00690c4a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
