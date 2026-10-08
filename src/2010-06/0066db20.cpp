// roc 2010-06 0066db20  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066db20
//
// 0066db20  51                   push ecx
// 0066db21  6a28                 push 0x28
// 0066db23  c744240400000000     mov dword ptr [esp + 4], 0
// 0066db2b  e8709e1300           call 0x7a79a0
// 0066db30  83c404               add esp, 4
// 0066db33  85c0                 test eax, eax
// 0066db35  7432                 je 0x66db69
// 0066db37  c700a0c8a300         mov dword ptr [eax], 0xa3c8a0
// 0066db3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066db41  894808               mov dword ptr [eax + 8], ecx
// 0066db44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066db48  89500c               mov dword ptr [eax + 0xc], edx
// 0066db4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066db4f  894810               mov dword ptr [eax + 0x10], ecx
// 0066db52  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066db56  895018               mov dword ptr [eax + 0x18], edx
// 0066db59  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066db5d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066db60  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066db64  895020               mov dword ptr [eax + 0x20], edx
// 0066db67  eb02                 jmp 0x66db6b
// 0066db69  33c0                 xor eax, eax
// 0066db6b  56                   push esi
// 0066db6c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066db70  6a00                 push 0
// 0066db72  8906                 mov dword ptr [esi], eax
// 0066db74  e8219e1300           call 0x7a799a
// 0066db79  83c404               add esp, 4
// 0066db7c  8bc6                 mov eax, esi
// 0066db7e  5e                   pop esi
// 0066db7f  59                   pop ecx
// 0066db80  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
