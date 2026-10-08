// roc 2011-06 007291b0  unit: RBX::FaceInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007291b0
//
// 007291b0  51                   push ecx
// 007291b1  6a28                 push 0x28
// 007291b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007291bb  e89e0e0e00           call 0x80a05e
// 007291c0  83c404               add esp, 4
// 007291c3  85c0                 test eax, eax
// 007291c5  743a                 je 0x729201
// 007291c7  c7006830ab00         mov dword ptr [eax], 0xab3068
// 007291cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007291d1  894808               mov dword ptr [eax + 8], ecx
// 007291d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007291d8  89500c               mov dword ptr [eax + 0xc], edx
// 007291db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007291df  894810               mov dword ptr [eax + 0x10], ecx
// 007291e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007291e6  895018               mov dword ptr [eax + 0x18], edx
// 007291e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007291ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 007291f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007291f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 007291f8  895020               mov dword ptr [eax + 0x20], edx
// 007291fb  8901                 mov dword ptr [ecx], eax
// 007291fd  8bc1                 mov eax, ecx
// 007291ff  59                   pop ecx
// 00729200  c3                   ret 
// 00729201  8b442408             mov eax, dword ptr [esp + 8]
// 00729205  33c9                 xor ecx, ecx
// 00729207  8908                 mov dword ptr [eax], ecx
// 00729209  59                   pop ecx
// 0072920a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
