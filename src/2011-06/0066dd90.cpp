// roc 2011-06 0066dd90  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066dd90
//
// 0066dd90  51                   push ecx
// 0066dd91  6a28                 push 0x28
// 0066dd93  c744240400000000     mov dword ptr [esp + 4], 0
// 0066dd9b  e8bec21900           call 0x80a05e
// 0066dda0  83c404               add esp, 4
// 0066dda3  85c0                 test eax, eax
// 0066dda5  743a                 je 0x66dde1
// 0066dda7  c70078c9a900         mov dword ptr [eax], 0xa9c978
// 0066ddad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066ddb1  894808               mov dword ptr [eax + 8], ecx
// 0066ddb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066ddb8  89500c               mov dword ptr [eax + 0xc], edx
// 0066ddbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066ddbf  894810               mov dword ptr [eax + 0x10], ecx
// 0066ddc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066ddc6  895018               mov dword ptr [eax + 0x18], edx
// 0066ddc9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066ddcd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066ddd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066ddd4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066ddd8  895020               mov dword ptr [eax + 0x20], edx
// 0066dddb  8901                 mov dword ptr [ecx], eax
// 0066dddd  8bc1                 mov eax, ecx
// 0066dddf  59                   pop ecx
// 0066dde0  c3                   ret 
// 0066dde1  8b442408             mov eax, dword ptr [esp + 8]
// 0066dde5  33c9                 xor ecx, ecx
// 0066dde7  8908                 mov dword ptr [eax], ecx
// 0066dde9  59                   pop ecx
// 0066ddea  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
