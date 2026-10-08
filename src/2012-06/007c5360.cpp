// roc 2012-06 007c5360  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5360
//
// 007c5360  51                   push ecx
// 007c5361  6a28                 push 0x28
// 007c5363  c744240400000000     mov dword ptr [esp + 4], 0
// 007c536b  e8aacd1b00           call 0x98211a
// 007c5370  83c404               add esp, 4
// 007c5373  85c0                 test eax, eax
// 007c5375  7432                 je 0x7c53a9
// 007c5377  c7001cd5bb00         mov dword ptr [eax], 0xbbd51c
// 007c537d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c5381  894808               mov dword ptr [eax + 8], ecx
// 007c5384  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c5388  89500c               mov dword ptr [eax + 0xc], edx
// 007c538b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c538f  894810               mov dword ptr [eax + 0x10], ecx
// 007c5392  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5396  895018               mov dword ptr [eax + 0x18], edx
// 007c5399  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c539d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c53a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c53a4  895020               mov dword ptr [eax + 0x20], edx
// 007c53a7  eb02                 jmp 0x7c53ab
// 007c53a9  33c0                 xor eax, eax
// 007c53ab  56                   push esi
// 007c53ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c53b0  6a00                 push 0
// 007c53b2  8906                 mov dword ptr [esi], eax
// 007c53b4  e85bcd1b00           call 0x982114
// 007c53b9  83c404               add esp, 4
// 007c53bc  8bc6                 mov eax, esi
// 007c53be  5e                   pop esi
// 007c53bf  59                   pop ecx
// 007c53c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
