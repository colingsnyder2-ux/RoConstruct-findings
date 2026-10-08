// roc 2007-03 004f0d80  unit: seg_004f0000  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0d80
//
// 004f0d80  83ec08               sub esp, 8
// 004f0d83  53                   push ebx
// 004f0d84  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f0d88  55                   push ebp
// 004f0d89  56                   push esi
// 004f0d8a  57                   push edi
// 004f0d8b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f0d8f  8bc7                 mov eax, edi
// 004f0d91  2bc3                 sub eax, ebx
// 004f0d93  c1f802               sar eax, 2
// 004f0d96  83f820               cmp eax, 0x20
// 004f0d99  7e7c                 jle 0x4f0e17
// 004f0d9b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004f0d9f  90                   nop 
// 004f0da0  85f6                 test esi, esi
// 004f0da2  0f8e8b000000         jle 0x4f0e33
// 004f0da8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f0dac  50                   push eax
// 004f0dad  57                   push edi
// 004f0dae  8d4c2418             lea ecx, [esp + 0x18]
// 004f0db2  53                   push ebx
// 004f0db3  51                   push ecx
// 004f0db4  e837fdffff           call 0x4f0af0
// 004f0db9  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f0dbd  8bc6                 mov eax, esi
// 004f0dbf  99                   cdq 
// 004f0dc0  2bc2                 sub eax, edx
// 004f0dc2  d1f8                 sar eax, 1
// 004f0dc4  8bf0                 mov esi, eax
// 004f0dc6  99                   cdq 
// 004f0dc7  2bc2                 sub eax, edx
// 004f0dc9  d1f8                 sar eax, 1
// 004f0dcb  03f0                 add esi, eax
// 004f0dcd  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f0dd1  8bd7                 mov edx, edi
// 004f0dd3  8bc8                 mov ecx, eax
// 004f0dd5  2bd5                 sub edx, ebp
// 004f0dd7  2bcb                 sub ecx, ebx
// 004f0dd9  83e2fc               and edx, 0xfffffffc
// 004f0ddc  83e1fc               and ecx, 0xfffffffc
// 004f0ddf  83c410               add esp, 0x10
// 004f0de2  3bca                 cmp ecx, edx
// 004f0de4  7d11                 jge 0x4f0df7
// 004f0de6  8b542428             mov edx, dword ptr [esp + 0x28]
// 004f0dea  52                   push edx
// 004f0deb  56                   push esi
// 004f0dec  50                   push eax
// 004f0ded  53                   push ebx
// 004f0dee  e88dffffff           call 0x4f0d80
// 004f0df3  8bdd                 mov ebx, ebp
// 004f0df5  eb11                 jmp 0x4f0e08
// 004f0df7  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f0dfb  50                   push eax
// 004f0dfc  56                   push esi
// 004f0dfd  57                   push edi
// 004f0dfe  55                   push ebp
// 004f0dff  e87cffffff           call 0x4f0d80
// 004f0e04  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f0e08  8bc7                 mov eax, edi
// 004f0e0a  2bc3                 sub eax, ebx
// 004f0e0c  c1f802               sar eax, 2
// 004f0e0f  83c410               add esp, 0x10
// 004f0e12  83f820               cmp eax, 0x20
// 004f0e15  7f89                 jg 0x4f0da0
// 004f0e17  83f801               cmp eax, 1
// 004f0e1a  7e0f                 jle 0x4f0e2b
// 004f0e1c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f0e20  51                   push ecx
// 004f0e21  57                   push edi
// 004f0e22  53                   push ebx
// 004f0e23  e868feffff           call 0x4f0c90
// 004f0e28  83c40c               add esp, 0xc
// 004f0e2b  5f                   pop edi
// 004f0e2c  5e                   pop esi
// 004f0e2d  5d                   pop ebp
// 004f0e2e  5b                   pop ebx
// 004f0e2f  83c408               add esp, 8
// 004f0e32  c3                   ret 
// 004f0e33  83f820               cmp eax, 0x20
// 004f0e36  7edf                 jle 0x4f0e17
// 004f0e38  8bcf                 mov ecx, edi
// 004f0e3a  2bcb                 sub ecx, ebx
// 004f0e3c  83e1fc               and ecx, 0xfffffffc
// 004f0e3f  83f904               cmp ecx, 4
// 004f0e42  7e13                 jle 0x4f0e57
// 004f0e44  8b542428             mov edx, dword ptr [esp + 0x28]
// 004f0e48  6a00                 push 0
// 004f0e4a  6a00                 push 0
// 004f0e4c  52                   push edx
// 004f0e4d  57                   push edi
// 004f0e4e  53                   push ebx
// 004f0e4f  e85cfcffff           call 0x4f0ab0
// 004f0e54  83c414               add esp, 0x14
// 004f0e57  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f0e5b  50                   push eax
// 004f0e5c  57                   push edi
// 004f0e5d  53                   push ebx
// 004f0e5e  e8cdfeffff           call 0x4f0d30
// 004f0e63  83c40c               add esp, 0xc
// 004f0e66  5f                   pop edi
// 004f0e67  5e                   pop esi
// 004f0e68  5d                   pop ebp
// 004f0e69  5b                   pop ebx
// 004f0e6a  83c408               add esp, 8
// 004f0e6d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort@PAPAVMotorJoint@RBX@@HP6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0HP6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
