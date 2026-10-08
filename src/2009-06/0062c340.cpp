// roc 2009-06 0062c340  unit: RBX::Workspace  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062c340
//
// 0062c340  51                   push ecx
// 0062c341  6a28                 push 0x28
// 0062c343  c744240400000000     mov dword ptr [esp + 4], 0
// 0062c34b  e8e8c60e00           call 0x718a38
// 0062c350  83c404               add esp, 4
// 0062c353  85c0                 test eax, eax
// 0062c355  7432                 je 0x62c389
// 0062c357  c70010ab8d00         mov dword ptr [eax], 0x8dab10
// 0062c35d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062c361  894808               mov dword ptr [eax + 8], ecx
// 0062c364  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062c368  89500c               mov dword ptr [eax + 0xc], edx
// 0062c36b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062c36f  894810               mov dword ptr [eax + 0x10], ecx
// 0062c372  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062c376  895018               mov dword ptr [eax + 0x18], edx
// 0062c379  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062c37d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0062c380  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062c384  895020               mov dword ptr [eax + 0x20], edx
// 0062c387  eb02                 jmp 0x62c38b
// 0062c389  33c0                 xor eax, eax
// 0062c38b  56                   push esi
// 0062c38c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062c390  6a00                 push 0
// 0062c392  8906                 mov dword ptr [esi], eax
// 0062c394  e899c60e00           call 0x718a32
// 0062c399  83c404               add esp, 4
// 0062c39c  8bc6                 mov eax, esi
// 0062c39e  5e                   pop esi
// 0062c39f  59                   pop ecx
// 0062c3a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
