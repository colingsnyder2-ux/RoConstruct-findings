// roc 2010-06 00499a00  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499a00
//
// 00499a00  53                   push ebx
// 00499a01  55                   push ebp
// 00499a02  8bd9                 mov ebx, ecx
// 00499a04  33ed                 xor ebp, ebp
// 00499a06  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00499a09  7e37                 jle 0x499a42
// 00499a0b  56                   push esi
// 00499a0c  57                   push edi
// 00499a0d  8d4900               lea ecx, [ecx]
// 00499a10  8b4308               mov eax, dword ptr [ebx + 8]
// 00499a13  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00499a16  85f6                 test esi, esi
// 00499a18  7420                 je 0x499a3a
// 00499a1a  8d9b00000000         lea ebx, [ebx]
// 00499a20  8b7e68               mov edi, dword ptr [esi + 0x68]
// 00499a23  8d4e04               lea ecx, [esi + 4]
// 00499a26  e8a5f2ffff           call 0x498cd0
// 00499a2b  56                   push esi
// 00499a2c  e87f110700           call 0x50abb0
// 00499a31  83c404               add esp, 4
// 00499a34  8bf7                 mov esi, edi
// 00499a36  85ff                 test edi, edi
// 00499a38  75e6                 jne 0x499a20
// 00499a3a  45                   inc ebp
// 00499a3b  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00499a3e  7cd0                 jl 0x499a10
// 00499a40  5f                   pop edi
// 00499a41  5e                   pop esi
// 00499a42  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00499a45  51                   push ecx
// 00499a46  e8753f0b00           call 0x54d9c0
// 00499a4b  83c404               add esp, 4
// 00499a4e  33c0                 xor eax, eax
// 00499a50  5d                   pop ebp
// 00499a51  894308               mov dword ptr [ebx + 8], eax
// 00499a54  89430c               mov dword ptr [ebx + 0xc], eax
// 00499a57  894304               mov dword ptr [ebx + 4], eax
// 00499a5a  5b                   pop ebx
// 00499a5b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
