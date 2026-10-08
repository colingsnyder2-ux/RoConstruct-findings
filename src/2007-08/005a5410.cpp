// roc 2007-08 005a5410  unit: RBX::Humanoid  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5410
//
// 005a5410  51                   push ecx
// 005a5411  6a28                 push 0x28
// 005a5413  c744240400000000     mov dword ptr [esp + 4], 0
// 005a541b  e8d6aa0800           call 0x62fef6
// 005a5420  83c404               add esp, 4
// 005a5423  85c0                 test eax, eax
// 005a5425  7432                 je 0x5a5459
// 005a5427  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a542b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a542f  894808               mov dword ptr [eax + 8], ecx
// 005a5432  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a5436  89500c               mov dword ptr [eax + 0xc], edx
// 005a5439  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a543d  895018               mov dword ptr [eax + 0x18], edx
// 005a5440  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a5444  894810               mov dword ptr [eax + 0x10], ecx
// 005a5447  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a544b  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a544e  c70040537b00         mov dword ptr [eax], 0x7b5340
// 005a5454  895020               mov dword ptr [eax + 0x20], edx
// 005a5457  eb02                 jmp 0x5a545b
// 005a5459  33c0                 xor eax, eax
// 005a545b  56                   push esi
// 005a545c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a5460  6a00                 push 0
// 005a5462  c744240800000000     mov dword ptr [esp + 8], 0
// 005a546a  8906                 mov dword ptr [esi], eax
// 005a546c  e8f1a70800           call 0x62fc62
// 005a5471  83c404               add esp, 4
// 005a5474  8bc6                 mov eax, esi
// 005a5476  5e                   pop esi
// 005a5477  59                   pop ecx
// 005a5478  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$getset@P8Humanoid@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VHumanoid@RBX@@VVector3@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@@std@@P8Humanoid@2@BEABVVector3@G3D@@XZP852@AEXABV67@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
