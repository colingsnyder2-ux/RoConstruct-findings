// roc 2012-06 007c51a0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c51a0
//
// 007c51a0  51                   push ecx
// 007c51a1  6a28                 push 0x28
// 007c51a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007c51ab  e86acf1b00           call 0x98211a
// 007c51b0  83c404               add esp, 4
// 007c51b3  85c0                 test eax, eax
// 007c51b5  7432                 je 0x7c51e9
// 007c51b7  c700ccd4bb00         mov dword ptr [eax], 0xbbd4cc
// 007c51bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c51c1  894808               mov dword ptr [eax + 8], ecx
// 007c51c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c51c8  89500c               mov dword ptr [eax + 0xc], edx
// 007c51cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c51cf  894810               mov dword ptr [eax + 0x10], ecx
// 007c51d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c51d6  895018               mov dword ptr [eax + 0x18], edx
// 007c51d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c51dd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007c51e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c51e4  895020               mov dword ptr [eax + 0x20], edx
// 007c51e7  eb02                 jmp 0x7c51eb
// 007c51e9  33c0                 xor eax, eax
// 007c51eb  56                   push esi
// 007c51ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007c51f0  6a00                 push 0
// 007c51f2  8906                 mov dword ptr [esi], eax
// 007c51f4  e81bcf1b00           call 0x982114
// 007c51f9  83c404               add esp, 4
// 007c51fc  8bc6                 mov eax, esi
// 007c51fe  5e                   pop esi
// 007c51ff  59                   pop ecx
// 007c5200  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
