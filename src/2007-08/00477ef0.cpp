// roc 2007-08 00477ef0  unit: CInstanceRecord::CNameItem  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00477ef0
//
// 00477ef0  6aff                 push -1
// 00477ef2  68215f7400           push 0x745f21
// 00477ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00477efd  50                   push eax
// 00477efe  83ec08               sub esp, 8
// 00477f01  53                   push ebx
// 00477f02  55                   push ebp
// 00477f03  56                   push esi
// 00477f04  57                   push edi
// 00477f05  a188518b00           mov eax, dword ptr [0x8b5188]
// 00477f0a  33c4                 xor eax, esp
// 00477f0c  50                   push eax
// 00477f0d  8d44241c             lea eax, [esp + 0x1c]
// 00477f11  64a300000000         mov dword ptr fs:[0], eax
// 00477f17  8bf9                 mov edi, ecx
// 00477f19  8b4708               mov eax, dword ptr [edi + 8]
// 00477f1c  8b2f                 mov ebp, dword ptr [edi]
// 00477f1e  69c060070000         imul eax, eax, 0x760
// 00477f24  6a10                 push 0x10
// 00477f26  50                   push eax
// 00477f27  e834810800           call 0x500060
// 00477f2c  8b4f08               mov ecx, dword ptr [edi + 8]
// 00477f2f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00477f33  83c408               add esp, 8
// 00477f36  3bd1                 cmp edx, ecx
// 00477f38  8907                 mov dword ptr [edi], eax
// 00477f3a  7d02                 jge 0x477f3e
// 00477f3c  8bca                 mov ecx, edx
// 00477f3e  69c960070000         imul ecx, ecx, 0x760
// 00477f44  03c8                 add ecx, eax
// 00477f46  8bf0                 mov esi, eax
// 00477f48  8bf9                 mov edi, ecx
// 00477f4a  3bf7                 cmp esi, edi
// 00477f4c  8bdd                 mov ebx, ebp
// 00477f4e  89742414             mov dword ptr [esp + 0x14], esi
// 00477f52  7344                 jae 0x477f98
// 00477f54  eb0a                 jmp 0x477f60
// 00477f56  8da42400000000       lea esp, [esp]
// 00477f5d  8d4900               lea ecx, [ecx]
// 00477f60  89742418             mov dword ptr [esp + 0x18], esi
// 00477f64  85f6                 test esi, esi
// 00477f66  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00477f6e  740c                 je 0x477f7c
// 00477f70  53                   push ebx
// 00477f71  8bce                 mov ecx, esi
// 00477f73  e878fbffff           call 0x477af0
// 00477f78  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00477f7c  81c660070000         add esi, 0x760
// 00477f82  81c360070000         add ebx, 0x760
// 00477f88  3bf7                 cmp esi, edi
// 00477f8a  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00477f92  89742414             mov dword ptr [esp + 0x14], esi
// 00477f96  72c8                 jb 0x477f60
// 00477f98  69d260070000         imul edx, edx, 0x760
// 00477f9e  03d5                 add edx, ebp
// 00477fa0  8bfa                 mov edi, edx
// 00477fa2  3bef                 cmp ebp, edi
// 00477fa4  8bf5                 mov esi, ebp
// 00477fa6  7311                 jae 0x477fb9
// 00477fa8  8bce                 mov ecx, esi
// 00477faa  e8b1e8ffff           call 0x476860
// 00477faf  81c660070000         add esi, 0x760
// 00477fb5  3bf7                 cmp esi, edi
// 00477fb7  72ef                 jb 0x477fa8
// 00477fb9  55                   push ebp
// 00477fba  e851780800           call 0x4ff810
// 00477fbf  83c404               add esp, 4
// 00477fc2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00477fc6  64890d00000000       mov dword ptr fs:[0], ecx
// 00477fcd  59                   pop ecx
// 00477fce  5f                   pop edi
// 00477fcf  5e                   pop esi
// 00477fd0  5d                   pop ebp
// 00477fd1  5b                   pop ebx
// 00477fd2  83c414               add esp, 0x14
// 00477fd5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
