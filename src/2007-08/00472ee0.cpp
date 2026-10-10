// from server: 100% by tester
// roc 2007-03 00472fd0  unit: seg_00470000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00472fd0
//
// 00472fd0  6aff                 push -1
// 00472fd2  68c4717400           push 0x7471c4
// 00472fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00472fdd  50                   push eax
// 00472fde  83ec08               sub esp, 8
// 00472fe1  53                   push ebx
// 00472fe2  56                   push esi
// 00472fe3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00472fe8  33c4                 xor eax, esp
// 00472fea  50                   push eax
// 00472feb  8d442414             lea eax, [esp + 0x14]
// 00472fef  64a300000000         mov dword ptr fs:[0], eax
// 00472ff5  33db                 xor ebx, ebx
// 00472ff7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00472ffb  895c240c             mov dword ptr [esp + 0xc], ebx
// 00472fff  e8acfeffff           call 0x472eb0
// 00473004  6a38                 push 0x38
// 00473006  e8fdb01a00           call 0x61e108
// 0047300b  83c404               add esp, 4
// 0047300e  89442410             mov dword ptr [esp + 0x10], eax
// 00473012  3bc3                 cmp eax, ebx
// 00473014  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0047301c  7413                 je 0x473031
// 0047301e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00473022  8b542428             mov edx, dword ptr [esp + 0x28]
// 00473026  51                   push ecx
// 00473027  52                   push edx
// 00473028  8bc8                 mov ecx, eax
// 0047302a  e891f7ffff           call 0x4727c0
// 0047302f  eb02                 jmp 0x473033
// 00473031  33c0                 xor eax, eax
// 00473033  8b742424             mov esi, dword ptr [esp + 0x24]
// 00473037  50                   push eax
// 00473038  8bce                 mov ecx, esi
// 0047303a  885c2420             mov byte ptr [esp + 0x20], bl
// 0047303e  891e                 mov dword ptr [esi], ebx
// 00473040  e84b200000           call 0x475090
// 00473045  56                   push esi
// 00473046  b980778b00           mov ecx, 0x8b7780
// 0047304b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0047304f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00473057  e814fdffff           call 0x472d70
// 0047305c  8bc6                 mov eax, esi
// 0047305e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00473062  64890d00000000       mov dword ptr fs:[0], ecx
// 00473069  59                   pop ecx
// 0047306a  5e                   pop esi
// 0047306b  5b                   pop ebx
// 0047306c  83c414               add esp, 0x14
// 0047306f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
