// roc 2008-06 00486ba0  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486ba0
//
// 00486ba0  53                   push ebx
// 00486ba1  55                   push ebp
// 00486ba2  8bd9                 mov ebx, ecx
// 00486ba4  33ed                 xor ebp, ebp
// 00486ba6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00486ba9  7e37                 jle 0x486be2
// 00486bab  56                   push esi
// 00486bac  57                   push edi
// 00486bad  8d4900               lea ecx, [ecx]
// 00486bb0  8b4308               mov eax, dword ptr [ebx + 8]
// 00486bb3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00486bb6  85f6                 test esi, esi
// 00486bb8  7420                 je 0x486bda
// 00486bba  8d9b00000000         lea ebx, [ebx]
// 00486bc0  8b7e68               mov edi, dword ptr [esi + 0x68]
// 00486bc3  8d4e04               lea ecx, [esi + 4]
// 00486bc6  e8a5f2ffff           call 0x485e70
// 00486bcb  56                   push esi
// 00486bcc  e82f110800           call 0x507d00
// 00486bd1  83c404               add esp, 4
// 00486bd4  8bf7                 mov esi, edi
// 00486bd6  85ff                 test edi, edi
// 00486bd8  75e6                 jne 0x486bc0
// 00486bda  45                   inc ebp
// 00486bdb  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00486bde  7cd0                 jl 0x486bb0
// 00486be0  5f                   pop edi
// 00486be1  5e                   pop esi
// 00486be2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00486be5  51                   push ecx
// 00486be6  e835110800           call 0x507d20
// 00486beb  83c404               add esp, 4
// 00486bee  33c0                 xor eax, eax
// 00486bf0  5d                   pop ebp
// 00486bf1  894308               mov dword ptr [ebx + 8], eax
// 00486bf4  89430c               mov dword ptr [ebx + 0xc], eax
// 00486bf7  894304               mov dword ptr [ebx + 4], eax
// 00486bfa  5b                   pop ebx
// 00486bfb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
