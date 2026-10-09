// roc 2009-12 0067eb60  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067eb60
//
// 0067eb60  51                   push ecx
// 0067eb61  6a28                 push 0x28
// 0067eb63  c744240400000000     mov dword ptr [esp + 4], 0
// 0067eb6b  e8f04c1700           call 0x7f3860
// 0067eb70  83c404               add esp, 4
// 0067eb73  85c0                 test eax, eax
// 0067eb75  7432                 je 0x67eba9
// 0067eb77  c70000009d00         mov dword ptr [eax], 0x9d0000
// 0067eb7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067eb81  894808               mov dword ptr [eax + 8], ecx
// 0067eb84  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067eb88  89500c               mov dword ptr [eax + 0xc], edx
// 0067eb8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067eb8f  894810               mov dword ptr [eax + 0x10], ecx
// 0067eb92  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067eb96  895018               mov dword ptr [eax + 0x18], edx
// 0067eb99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067eb9d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067eba0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067eba4  895020               mov dword ptr [eax + 0x20], edx
// 0067eba7  eb02                 jmp 0x67ebab
// 0067eba9  33c0                 xor eax, eax
// 0067ebab  56                   push esi
// 0067ebac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067ebb0  6a00                 push 0
// 0067ebb2  8906                 mov dword ptr [esi], eax
// 0067ebb4  e8a14c1700           call 0x7f385a
// 0067ebb9  83c404               add esp, 4
// 0067ebbc  8bc6                 mov eax, esi
// 0067ebbe  5e                   pop esi
// 0067ebbf  59                   pop ecx
// 0067ebc0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
