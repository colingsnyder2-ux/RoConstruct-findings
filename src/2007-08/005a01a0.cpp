// roc 2007-08 005a01a0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a01a0
//
// 005a01a0  51                   push ecx
// 005a01a1  6a28                 push 0x28
// 005a01a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a01ab  e846fd0800           call 0x62fef6
// 005a01b0  83c404               add esp, 4
// 005a01b3  85c0                 test eax, eax
// 005a01b5  7432                 je 0x5a01e9
// 005a01b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a01bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a01bf  894808               mov dword ptr [eax + 8], ecx
// 005a01c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a01c6  89500c               mov dword ptr [eax + 0xc], edx
// 005a01c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a01cd  895018               mov dword ptr [eax + 0x18], edx
// 005a01d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a01d4  894810               mov dword ptr [eax + 0x10], ecx
// 005a01d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a01db  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a01de  c7003c377b00         mov dword ptr [eax], 0x7b373c
// 005a01e4  895020               mov dword ptr [eax + 0x20], edx
// 005a01e7  eb02                 jmp 0x5a01eb
// 005a01e9  33c0                 xor eax, eax
// 005a01eb  56                   push esi
// 005a01ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a01f0  6a00                 push 0
// 005a01f2  c744240800000000     mov dword ptr [esp + 8], 0
// 005a01fa  8906                 mov dword ptr [esi], eax
// 005a01fc  e861fa0800           call 0x62fc62
// 005a0201  83c404               add esp, 4
// 005a0204  8bc6                 mov eax, esi
// 005a0206  5e                   pop esi
// 005a0207  59                   pop ecx
// 005a0208  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
