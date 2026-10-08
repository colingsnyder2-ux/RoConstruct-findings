// roc 2012-06 007c5070  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5070
//
// 007c5070  51                   push ecx
// 007c5071  6a28                 push 0x28
// 007c5073  c744240400000000     mov dword ptr [esp + 4], 0
// 007c507b  e89ad01b00           call 0x98211a
// 007c5080  83c404               add esp, 4
// 007c5083  85c0                 test eax, eax
// 007c5085  7432                 je 0x7c50b9
// 007c5087  c70090d4bb00         mov dword ptr [eax], 0xbbd490
// 007c508d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c5091  894808               mov dword ptr [eax + 8], ecx
// 007c5094  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c5098  89500c               mov dword ptr [eax + 0xc], edx
// 007c509b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c509f  894810               mov dword ptr [eax + 0x10], ecx
// 007c50a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c50a6  895018               mov dword ptr [eax + 0x18], edx
// 007c50a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c50ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c50b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c50b4  895020               mov dword ptr [eax + 0x20], edx
// 007c50b7  eb02                 jmp 0x7c50bb
// 007c50b9  33c0                 xor eax, eax
// 007c50bb  56                   push esi
// 007c50bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c50c0  6a00                 push 0
// 007c50c2  8906                 mov dword ptr [esi], eax
// 007c50c4  e84bd01b00           call 0x982114
// 007c50c9  83c404               add esp, 4
// 007c50cc  8bc6                 mov eax, esi
// 007c50ce  5e                   pop esi
// 007c50cf  59                   pop ecx
// 007c50d0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
