// roc 2007-08 00509320  unit: G3D::GCamera  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509320
//
// 00509320  6aff                 push -1
// 00509322  6849fb7400           push 0x74fb49
// 00509327  64a100000000         mov eax, dword ptr fs:[0]
// 0050932d  50                   push eax
// 0050932e  83ec1c               sub esp, 0x1c
// 00509331  53                   push ebx
// 00509332  56                   push esi
// 00509333  57                   push edi
// 00509334  a188518b00           mov eax, dword ptr [0x8b5188]
// 00509339  33c4                 xor eax, esp
// 0050933b  50                   push eax
// 0050933c  8d44242c             lea eax, [esp + 0x2c]
// 00509340  64a300000000         mov dword ptr fs:[0], eax
// 00509346  8bf9                 mov edi, ecx
// 00509348  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0050934c  8d742410             lea esi, [esp + 0x10]
// 00509350  e8cbf4ffff           call 0x508820
// 00509355  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00509359  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00509361  7205                 jb 0x509368
// 00509363  8b4004               mov eax, dword ptr [eax + 4]
// 00509366  eb03                 jmp 0x50936b
// 00509368  83c004               add eax, 4
// 0050936b  50                   push eax
// 0050936c  68340b7a00           push 0x7a0b34
// 00509371  57                   push edi
// 00509372  e889ffffff           call 0x509300
// 00509377  83c40c               add esp, 0xc
// 0050937a  8d4c2410             lea ecx, [esp + 0x10]
// 0050937e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00509386  ff15ace67700         call dword ptr [0x77e6ac]
// 0050938c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00509390  64890d00000000       mov dword ptr fs:[0], ecx
// 00509397  59                   pop ecx
// 00509398  5f                   pop edi
// 00509399  5e                   pop esi
// 0050939a  5b                   pop ebx
// 0050939b  83c428               add esp, 0x28
// 0050939e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
