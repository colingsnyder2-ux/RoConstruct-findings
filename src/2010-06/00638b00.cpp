// roc 2010-06 00638b00  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638b00
//
// 00638b00  51                   push ecx
// 00638b01  6a28                 push 0x28
// 00638b03  c744240400000000     mov dword ptr [esp + 4], 0
// 00638b0b  e890ee1600           call 0x7a79a0
// 00638b10  83c404               add esp, 4
// 00638b13  85c0                 test eax, eax
// 00638b15  7432                 je 0x638b49
// 00638b17  c700b865a300         mov dword ptr [eax], 0xa365b8
// 00638b1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638b21  894808               mov dword ptr [eax + 8], ecx
// 00638b24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638b28  89500c               mov dword ptr [eax + 0xc], edx
// 00638b2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00638b2f  894810               mov dword ptr [eax + 0x10], ecx
// 00638b32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638b36  895018               mov dword ptr [eax + 0x18], edx
// 00638b39  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00638b3d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638b40  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638b44  895020               mov dword ptr [eax + 0x20], edx
// 00638b47  eb02                 jmp 0x638b4b
// 00638b49  33c0                 xor eax, eax
// 00638b4b  56                   push esi
// 00638b4c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638b50  6a00                 push 0
// 00638b52  8906                 mov dword ptr [esi], eax
// 00638b54  e841ee1600           call 0x7a799a
// 00638b59  83c404               add esp, 4
// 00638b5c  8bc6                 mov eax, esi
// 00638b5e  5e                   pop esi
// 00638b5f  59                   pop ecx
// 00638b60  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
