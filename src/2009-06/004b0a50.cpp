// from server: 100% by auto
// roc 2009-06 004b0a50  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0a50
//
// 004b0a50  53                   push ebx
// 004b0a51  55                   push ebp
// 004b0a52  8bd9                 mov ebx, ecx
// 004b0a54  33ed                 xor ebp, ebp
// 004b0a56  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004b0a59  7e37                 jle 0x4b0a92
// 004b0a5b  56                   push esi
// 004b0a5c  57                   push edi
// 004b0a5d  8d4900               lea ecx, [ecx]
// 004b0a60  8b4308               mov eax, dword ptr [ebx + 8]
// 004b0a63  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004b0a66  85f6                 test esi, esi
// 004b0a68  7420                 je 0x4b0a8a
// 004b0a6a  8d9b00000000         lea ebx, [ebx]
// 004b0a70  8b7e68               mov edi, dword ptr [esi + 0x68]
// 004b0a73  8d4e04               lea ecx, [esi + 4]
// 004b0a76  e8a5f2ffff           call 0x4afd20
// 004b0a7b  56                   push esi
// 004b0a7c  e8dfa60b00           call 0x56b160
// 004b0a81  83c404               add esp, 4
// 004b0a84  8bf7                 mov esi, edi
// 004b0a86  85ff                 test edi, edi
// 004b0a88  75e6                 jne 0x4b0a70
// 004b0a8a  45                   inc ebp
// 004b0a8b  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004b0a8e  7cd0                 jl 0x4b0a60
// 004b0a90  5f                   pop edi
// 004b0a91  5e                   pop esi
// 004b0a92  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004b0a95  51                   push ecx
// 004b0a96  e8f5a70b00           call 0x56b290
// 004b0a9b  83c404               add esp, 4
// 004b0a9e  33c0                 xor eax, eax
// 004b0aa0  5d                   pop ebp
// 004b0aa1  894308               mov dword ptr [ebx + 8], eax
// 004b0aa4  89430c               mov dword ptr [ebx + 0xc], eax
// 004b0aa7  894304               mov dword ptr [ebx + 4], eax
// 004b0aaa  5b                   pop ebx
// 004b0aab  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
