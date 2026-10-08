// roc 2011-06 0066db10  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066db10
//
// 0066db10  51                   push ecx
// 0066db11  6a28                 push 0x28
// 0066db13  c744240400000000     mov dword ptr [esp + 4], 0
// 0066db1b  e83ec51900           call 0x80a05e
// 0066db20  83c404               add esp, 4
// 0066db23  85c0                 test eax, eax
// 0066db25  743a                 je 0x66db61
// 0066db27  c700ecc8a900         mov dword ptr [eax], 0xa9c8ec
// 0066db2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066db31  894808               mov dword ptr [eax + 8], ecx
// 0066db34  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066db38  89500c               mov dword ptr [eax + 0xc], edx
// 0066db3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066db3f  894810               mov dword ptr [eax + 0x10], ecx
// 0066db42  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066db46  895018               mov dword ptr [eax + 0x18], edx
// 0066db49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066db4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066db50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066db54  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066db58  895020               mov dword ptr [eax + 0x20], edx
// 0066db5b  8901                 mov dword ptr [ecx], eax
// 0066db5d  8bc1                 mov eax, ecx
// 0066db5f  59                   pop ecx
// 0066db60  c3                   ret 
// 0066db61  8b442408             mov eax, dword ptr [esp + 8]
// 0066db65  33c9                 xor ecx, ecx
// 0066db67  8908                 mov dword ptr [eax], ecx
// 0066db69  59                   pop ecx
// 0066db6a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
