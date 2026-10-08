// roc 2007-08 00581900  unit: RBX::VHat::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581900
//
// 00581900  51                   push ecx
// 00581901  6a28                 push 0x28
// 00581903  c744240400000000     mov dword ptr [esp + 4], 0
// 0058190b  e8e6e50a00           call 0x62fef6
// 00581910  83c404               add esp, 4
// 00581913  85c0                 test eax, eax
// 00581915  7432                 je 0x581949
// 00581917  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058191b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058191f  894808               mov dword ptr [eax + 8], ecx
// 00581922  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581926  89500c               mov dword ptr [eax + 0xc], edx
// 00581929  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058192d  895018               mov dword ptr [eax + 0x18], edx
// 00581930  8b542420             mov edx, dword ptr [esp + 0x20]
// 00581934  894810               mov dword ptr [eax + 0x10], ecx
// 00581937  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058193b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0058193e  c70024c17a00         mov dword ptr [eax], 0x7ac124
// 00581944  895020               mov dword ptr [eax + 0x20], edx
// 00581947  eb02                 jmp 0x58194b
// 00581949  33c0                 xor eax, eax
// 0058194b  56                   push esi
// 0058194c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00581950  6a00                 push 0
// 00581952  c744240800000000     mov dword ptr [esp + 8], 0
// 0058195a  8906                 mov dword ptr [esi], eax
// 0058195c  e801e30a00           call 0x62fc62
// 00581961  83c404               add esp, 4
// 00581964  8bc6                 mov eax, esi
// 00581966  5e                   pop esi
// 00581967  59                   pop ecx
// 00581968  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
