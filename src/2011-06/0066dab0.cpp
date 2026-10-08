// roc 2011-06 0066dab0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066dab0
//
// 0066dab0  51                   push ecx
// 0066dab1  6a28                 push 0x28
// 0066dab3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066dabb  e89ec51900           call 0x80a05e
// 0066dac0  83c404               add esp, 4
// 0066dac3  85c0                 test eax, eax
// 0066dac5  743a                 je 0x66db01
// 0066dac7  c700d8c8a900         mov dword ptr [eax], 0xa9c8d8
// 0066dacd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066dad1  894808               mov dword ptr [eax + 8], ecx
// 0066dad4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066dad8  89500c               mov dword ptr [eax + 0xc], edx
// 0066dadb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066dadf  894810               mov dword ptr [eax + 0x10], ecx
// 0066dae2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066dae6  895018               mov dword ptr [eax + 0x18], edx
// 0066dae9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066daed  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066daf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066daf4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066daf8  895020               mov dword ptr [eax + 0x20], edx
// 0066dafb  8901                 mov dword ptr [ecx], eax
// 0066dafd  8bc1                 mov eax, ecx
// 0066daff  59                   pop ecx
// 0066db00  c3                   ret 
// 0066db01  8b442408             mov eax, dword ptr [esp + 8]
// 0066db05  33c9                 xor ecx, ecx
// 0066db07  8908                 mov dword ptr [eax], ecx
// 0066db09  59                   pop ecx
// 0066db0a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
