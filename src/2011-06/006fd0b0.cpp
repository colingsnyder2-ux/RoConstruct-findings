// roc 2011-06 006fd0b0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fd0b0
//
// 006fd0b0  51                   push ecx
// 006fd0b1  6a28                 push 0x28
// 006fd0b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006fd0bb  e89ecf1000           call 0x80a05e
// 006fd0c0  83c404               add esp, 4
// 006fd0c3  85c0                 test eax, eax
// 006fd0c5  743a                 je 0x6fd101
// 006fd0c7  c700a4b8aa00         mov dword ptr [eax], 0xaab8a4
// 006fd0cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fd0d1  894808               mov dword ptr [eax + 8], ecx
// 006fd0d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd0d8  89500c               mov dword ptr [eax + 0xc], edx
// 006fd0db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fd0df  894810               mov dword ptr [eax + 0x10], ecx
// 006fd0e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fd0e6  895018               mov dword ptr [eax + 0x18], edx
// 006fd0e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd0ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 006fd0f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fd0f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 006fd0f8  895020               mov dword ptr [eax + 0x20], edx
// 006fd0fb  8901                 mov dword ptr [ecx], eax
// 006fd0fd  8bc1                 mov eax, ecx
// 006fd0ff  59                   pop ecx
// 006fd100  c3                   ret 
// 006fd101  8b442408             mov eax, dword ptr [esp + 8]
// 006fd105  33c9                 xor ecx, ecx
// 006fd107  8908                 mov dword ptr [eax], ecx
// 006fd109  59                   pop ecx
// 006fd10a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
