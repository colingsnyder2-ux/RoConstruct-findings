// roc 2008-06 005d81d0  unit: RBX::Humanoid  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d81d0
//
// 005d81d0  51                   push ecx
// 005d81d1  6a28                 push 0x28
// 005d81d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005d81db  e840870c00           call 0x6a0920
// 005d81e0  83c404               add esp, 4
// 005d81e3  85c0                 test eax, eax
// 005d81e5  743a                 je 0x5d8221
// 005d81e7  c7001cd38300         mov dword ptr [eax], 0x83d31c
// 005d81ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d81f1  894808               mov dword ptr [eax + 8], ecx
// 005d81f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d81f8  89500c               mov dword ptr [eax + 0xc], edx
// 005d81fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d81ff  894810               mov dword ptr [eax + 0x10], ecx
// 005d8202  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d8206  895018               mov dword ptr [eax + 0x18], edx
// 005d8209  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d820d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d8210  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d8214  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d8218  895020               mov dword ptr [eax + 0x20], edx
// 005d821b  8901                 mov dword ptr [ecx], eax
// 005d821d  8bc1                 mov eax, ecx
// 005d821f  59                   pop ecx
// 005d8220  c3                   ret 
// 005d8221  8b442408             mov eax, dword ptr [esp + 8]
// 005d8225  33c9                 xor ecx, ecx
// 005d8227  8908                 mov dword ptr [eax], ecx
// 005d8229  59                   pop ecx
// 005d822a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
