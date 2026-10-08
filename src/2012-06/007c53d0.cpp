// roc 2012-06 007c53d0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c53d0
//
// 007c53d0  51                   push ecx
// 007c53d1  6a28                 push 0x28
// 007c53d3  c744240400000000     mov dword ptr [esp + 4], 0
// 007c53db  e83acd1b00           call 0x98211a
// 007c53e0  83c404               add esp, 4
// 007c53e3  85c0                 test eax, eax
// 007c53e5  7432                 je 0x7c5419
// 007c53e7  c70030d5bb00         mov dword ptr [eax], 0xbbd530
// 007c53ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c53f1  894808               mov dword ptr [eax + 8], ecx
// 007c53f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c53f8  89500c               mov dword ptr [eax + 0xc], edx
// 007c53fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c53ff  894810               mov dword ptr [eax + 0x10], ecx
// 007c5402  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5406  895018               mov dword ptr [eax + 0x18], edx
// 007c5409  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c540d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c5410  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c5414  895020               mov dword ptr [eax + 0x20], edx
// 007c5417  eb02                 jmp 0x7c541b
// 007c5419  33c0                 xor eax, eax
// 007c541b  56                   push esi
// 007c541c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c5420  6a00                 push 0
// 007c5422  8906                 mov dword ptr [esi], eax
// 007c5424  e8ebcc1b00           call 0x982114
// 007c5429  83c404               add esp, 4
// 007c542c  8bc6                 mov eax, esi
// 007c542e  5e                   pop esi
// 007c542f  59                   pop ecx
// 007c5430  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
