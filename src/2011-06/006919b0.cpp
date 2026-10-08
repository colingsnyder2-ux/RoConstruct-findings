// roc 2011-06 006919b0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006919b0
//
// 006919b0  51                   push ecx
// 006919b1  6a28                 push 0x28
// 006919b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006919bb  e89e861700           call 0x80a05e
// 006919c0  83c404               add esp, 4
// 006919c3  85c0                 test eax, eax
// 006919c5  743a                 je 0x691a01
// 006919c7  c700940faa00         mov dword ptr [eax], 0xaa0f94
// 006919cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006919d1  894808               mov dword ptr [eax + 8], ecx
// 006919d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006919d8  89500c               mov dword ptr [eax + 0xc], edx
// 006919db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006919df  894810               mov dword ptr [eax + 0x10], ecx
// 006919e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006919e6  895018               mov dword ptr [eax + 0x18], edx
// 006919e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006919ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 006919f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006919f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 006919f8  895020               mov dword ptr [eax + 0x20], edx
// 006919fb  8901                 mov dword ptr [ecx], eax
// 006919fd  8bc1                 mov eax, ecx
// 006919ff  59                   pop ecx
// 00691a00  c3                   ret 
// 00691a01  8b442408             mov eax, dword ptr [esp + 8]
// 00691a05  33c9                 xor ecx, ecx
// 00691a07  8908                 mov dword ptr [eax], ecx
// 00691a09  59                   pop ecx
// 00691a0a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
