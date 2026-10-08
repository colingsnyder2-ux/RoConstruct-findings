// roc 2009-06 0062c2d0  unit: RBX::Workspace  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062c2d0
//
// 0062c2d0  51                   push ecx
// 0062c2d1  6a28                 push 0x28
// 0062c2d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062c2db  e858c70e00           call 0x718a38
// 0062c2e0  83c404               add esp, 4
// 0062c2e3  85c0                 test eax, eax
// 0062c2e5  7432                 je 0x62c319
// 0062c2e7  c700fcaa8d00         mov dword ptr [eax], 0x8daafc
// 0062c2ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062c2f1  894808               mov dword ptr [eax + 8], ecx
// 0062c2f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062c2f8  89500c               mov dword ptr [eax + 0xc], edx
// 0062c2fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062c2ff  894810               mov dword ptr [eax + 0x10], ecx
// 0062c302  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062c306  895018               mov dword ptr [eax + 0x18], edx
// 0062c309  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062c30d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0062c310  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062c314  895020               mov dword ptr [eax + 0x20], edx
// 0062c317  eb02                 jmp 0x62c31b
// 0062c319  33c0                 xor eax, eax
// 0062c31b  56                   push esi
// 0062c31c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062c320  6a00                 push 0
// 0062c322  8906                 mov dword ptr [esi], eax
// 0062c324  e809c70e00           call 0x718a32
// 0062c329  83c404               add esp, 4
// 0062c32c  8bc6                 mov eax, esi
// 0062c32e  5e                   pop esi
// 0062c32f  59                   pop ecx
// 0062c330  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
