// roc 2012-06 007a4ba0  unit: RBX::ExtrudedPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a4ba0
//
// 007a4ba0  51                   push ecx
// 007a4ba1  6a28                 push 0x28
// 007a4ba3  c744240400000000     mov dword ptr [esp + 4], 0
// 007a4bab  e86ad51d00           call 0x98211a
// 007a4bb0  83c404               add esp, 4
// 007a4bb3  85c0                 test eax, eax
// 007a4bb5  7432                 je 0x7a4be9
// 007a4bb7  c700c45bbb00         mov dword ptr [eax], 0xbb5bc4
// 007a4bbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a4bc1  894808               mov dword ptr [eax + 8], ecx
// 007a4bc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a4bc8  89500c               mov dword ptr [eax + 0xc], edx
// 007a4bcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a4bcf  894810               mov dword ptr [eax + 0x10], ecx
// 007a4bd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a4bd6  895018               mov dword ptr [eax + 0x18], edx
// 007a4bd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a4bdd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007a4be0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a4be4  895020               mov dword ptr [eax + 0x20], edx
// 007a4be7  eb02                 jmp 0x7a4beb
// 007a4be9  33c0                 xor eax, eax
// 007a4beb  56                   push esi
// 007a4bec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a4bf0  6a00                 push 0
// 007a4bf2  8906                 mov dword ptr [esi], eax
// 007a4bf4  e81bd51d00           call 0x982114
// 007a4bf9  83c404               add esp, 4
// 007a4bfc  8bc6                 mov eax, esi
// 007a4bfe  5e                   pop esi
// 007a4bff  59                   pop ecx
// 007a4c00  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
