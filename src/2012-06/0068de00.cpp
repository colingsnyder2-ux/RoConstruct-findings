// roc 2012-06 0068de00  unit: RBX::ModelInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0068de00
//
// 0068de00  51                   push ecx
// 0068de01  6a28                 push 0x28
// 0068de03  c744240400000000     mov dword ptr [esp + 4], 0
// 0068de0b  e80a432f00           call 0x98211a
// 0068de10  83c404               add esp, 4
// 0068de13  85c0                 test eax, eax
// 0068de15  7432                 je 0x68de49
// 0068de17  c7003401b900         mov dword ptr [eax], 0xb90134
// 0068de1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068de21  894808               mov dword ptr [eax + 8], ecx
// 0068de24  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068de28  89500c               mov dword ptr [eax + 0xc], edx
// 0068de2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068de2f  894810               mov dword ptr [eax + 0x10], ecx
// 0068de32  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068de36  895018               mov dword ptr [eax + 0x18], edx
// 0068de39  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068de3d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0068de40  8b542420             mov edx, dword ptr [esp + 0x20]
// 0068de44  895020               mov dword ptr [eax + 0x20], edx
// 0068de47  eb02                 jmp 0x68de4b
// 0068de49  33c0                 xor eax, eax
// 0068de4b  56                   push esi
// 0068de4c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068de50  6a00                 push 0
// 0068de52  8906                 mov dword ptr [esi], eax
// 0068de54  e8bb422f00           call 0x982114
// 0068de59  83c404               add esp, 4
// 0068de5c  8bc6                 mov eax, esi
// 0068de5e  5e                   pop esi
// 0068de5f  59                   pop ecx
// 0068de60  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
