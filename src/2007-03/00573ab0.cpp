// roc 2007-03 00573ab0  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573ab0
//
// 00573ab0  51                   push ecx
// 00573ab1  6a28                 push 0x28
// 00573ab3  c744240400000000     mov dword ptr [esp + 4], 0
// 00573abb  e848a60a00           call 0x61e108
// 00573ac0  83c404               add esp, 4
// 00573ac3  85c0                 test eax, eax
// 00573ac5  7432                 je 0x573af9
// 00573ac7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573acb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573acf  894808               mov dword ptr [eax + 8], ecx
// 00573ad2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00573ad6  89500c               mov dword ptr [eax + 0xc], edx
// 00573ad9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573add  895018               mov dword ptr [eax + 0x18], edx
// 00573ae0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00573ae4  894810               mov dword ptr [eax + 0x10], ecx
// 00573ae7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573aeb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00573aee  c700c4c07a00         mov dword ptr [eax], 0x7ac0c4
// 00573af4  895020               mov dword ptr [eax + 0x20], edx
// 00573af7  eb02                 jmp 0x573afb
// 00573af9  33c0                 xor eax, eax
// 00573afb  56                   push esi
// 00573afc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573b00  6a00                 push 0
// 00573b02  c744240800000000     mov dword ptr [esp + 8], 0
// 00573b0a  8906                 mov dword ptr [esi], eax
// 00573b0c  e8dfa50a00           call 0x61e0f0
// 00573b11  83c404               add esp, 4
// 00573b14  8bc6                 mov eax, esi
// 00573b16  5e                   pop esi
// 00573b17  59                   pop ecx
// 00573b18  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
