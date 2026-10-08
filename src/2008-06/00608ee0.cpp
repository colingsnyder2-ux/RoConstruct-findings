// roc 2008-06 00608ee0  unit: RBX::VModelInstance::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608ee0
//
// 00608ee0  51                   push ecx
// 00608ee1  6a28                 push 0x28
// 00608ee3  c744240400000000     mov dword ptr [esp + 4], 0
// 00608eeb  e8307a0900           call 0x6a0920
// 00608ef0  83c404               add esp, 4
// 00608ef3  85c0                 test eax, eax
// 00608ef5  743a                 je 0x608f31
// 00608ef7  c70084288400         mov dword ptr [eax], 0x842884
// 00608efd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00608f01  894808               mov dword ptr [eax + 8], ecx
// 00608f04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00608f08  89500c               mov dword ptr [eax + 0xc], edx
// 00608f0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00608f0f  894810               mov dword ptr [eax + 0x10], ecx
// 00608f12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00608f16  895018               mov dword ptr [eax + 0x18], edx
// 00608f19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00608f1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00608f20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00608f24  8b542420             mov edx, dword ptr [esp + 0x20]
// 00608f28  895020               mov dword ptr [eax + 0x20], edx
// 00608f2b  8901                 mov dword ptr [ecx], eax
// 00608f2d  8bc1                 mov eax, ecx
// 00608f2f  59                   pop ecx
// 00608f30  c3                   ret 
// 00608f31  8b442408             mov eax, dword ptr [esp + 8]
// 00608f35  33c9                 xor ecx, ecx
// 00608f37  8908                 mov dword ptr [eax], ecx
// 00608f39  59                   pop ecx
// 00608f3a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
