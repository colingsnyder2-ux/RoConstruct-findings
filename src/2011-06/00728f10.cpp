// roc 2011-06 00728f10  unit: RBX::FaceInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00728f10
//
// 00728f10  51                   push ecx
// 00728f11  6a28                 push 0x28
// 00728f13  c744240400000000     mov dword ptr [esp + 4], 0
// 00728f1b  e83e110e00           call 0x80a05e
// 00728f20  83c404               add esp, 4
// 00728f23  85c0                 test eax, eax
// 00728f25  743a                 je 0x728f61
// 00728f27  c700e82fab00         mov dword ptr [eax], 0xab2fe8
// 00728f2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00728f31  894808               mov dword ptr [eax + 8], ecx
// 00728f34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00728f38  89500c               mov dword ptr [eax + 0xc], edx
// 00728f3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00728f3f  894810               mov dword ptr [eax + 0x10], ecx
// 00728f42  8b542418             mov edx, dword ptr [esp + 0x18]
// 00728f46  895018               mov dword ptr [eax + 0x18], edx
// 00728f49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00728f4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00728f50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00728f54  8b542420             mov edx, dword ptr [esp + 0x20]
// 00728f58  895020               mov dword ptr [eax + 0x20], edx
// 00728f5b  8901                 mov dword ptr [ecx], eax
// 00728f5d  8bc1                 mov eax, ecx
// 00728f5f  59                   pop ecx
// 00728f60  c3                   ret 
// 00728f61  8b442408             mov eax, dword ptr [esp + 8]
// 00728f65  33c9                 xor ecx, ecx
// 00728f67  8908                 mov dword ptr [eax], ecx
// 00728f69  59                   pop ecx
// 00728f6a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
