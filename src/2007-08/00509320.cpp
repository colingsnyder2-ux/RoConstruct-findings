// from server: 100% by tester
// roc 2007-03 004fe6d0  unit: seg_004f0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe6d0
//
// 004fe6d0  6aff                 push -1
// 004fe6d2  6849fe7400           push 0x74fe49
// 004fe6d7  64a100000000         mov eax, dword ptr fs:[0]
// 004fe6dd  50                   push eax
// 004fe6de  83ec1c               sub esp, 0x1c
// 004fe6e1  53                   push ebx
// 004fe6e2  56                   push esi
// 004fe6e3  57                   push edi
// 004fe6e4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fe6e9  33c4                 xor eax, esp
// 004fe6eb  50                   push eax
// 004fe6ec  8d44242c             lea eax, [esp + 0x2c]
// 004fe6f0  64a300000000         mov dword ptr fs:[0], eax
// 004fe6f6  8bf9                 mov edi, ecx
// 004fe6f8  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004fe6fc  8d742410             lea esi, [esp + 0x10]
// 004fe700  e89bf4ffff           call 0x4fdba0
// 004fe705  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004fe709  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004fe711  7205                 jb 0x4fe718
// 004fe713  8b4004               mov eax, dword ptr [eax + 4]
// 004fe716  eb03                 jmp 0x4fe71b
// 004fe718  83c004               add eax, 4
// 004fe71b  50                   push eax
// 004fe71c  6834037a00           push 0x7a0334
// 004fe721  57                   push edi
// 004fe722  e889ffffff           call 0x4fe6b0
// 004fe727  83c40c               add esp, 0xc
// 004fe72a  8d4c2410             lea ecx, [esp + 0x10]
// 004fe72e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004fe736  ff158ce77700         call dword ptr [0x77e78c]
// 004fe73c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004fe740  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe747  59                   pop ecx
// 004fe748  5f                   pop edi
// 004fe749  5e                   pop esi
// 004fe74a  5b                   pop ebx
// 004fe74b  83c428               add esp, 0x28
// 004fe74e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
