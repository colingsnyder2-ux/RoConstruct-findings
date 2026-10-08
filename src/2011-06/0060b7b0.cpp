// roc 2011-06 0060b7b0  unit: RBX::ModelInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060b7b0
//
// 0060b7b0  51                   push ecx
// 0060b7b1  6a28                 push 0x28
// 0060b7b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0060b7bb  e89ee81f00           call 0x80a05e
// 0060b7c0  83c404               add esp, 4
// 0060b7c3  85c0                 test eax, eax
// 0060b7c5  743a                 je 0x60b801
// 0060b7c7  c7005837a900         mov dword ptr [eax], 0xa93758
// 0060b7cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060b7d1  894808               mov dword ptr [eax + 8], ecx
// 0060b7d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060b7d8  89500c               mov dword ptr [eax + 0xc], edx
// 0060b7db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060b7df  894810               mov dword ptr [eax + 0x10], ecx
// 0060b7e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060b7e6  895018               mov dword ptr [eax + 0x18], edx
// 0060b7e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060b7ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 0060b7f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060b7f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060b7f8  895020               mov dword ptr [eax + 0x20], edx
// 0060b7fb  8901                 mov dword ptr [ecx], eax
// 0060b7fd  8bc1                 mov eax, ecx
// 0060b7ff  59                   pop ecx
// 0060b800  c3                   ret 
// 0060b801  8b442408             mov eax, dword ptr [esp + 8]
// 0060b805  33c9                 xor ecx, ecx
// 0060b807  8908                 mov dword ptr [eax], ecx
// 0060b809  59                   pop ecx
// 0060b80a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
