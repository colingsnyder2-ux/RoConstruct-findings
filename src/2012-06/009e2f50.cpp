// roc 2012-06 009e2f50  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2f50
//
// 009e2f50  6aff                 push -1
// 009e2f52  68c30dae00           push 0xae0dc3
// 009e2f57  64a100000000         mov eax, dword ptr fs:[0]
// 009e2f5d  50                   push eax
// 009e2f5e  51                   push ecx
// 009e2f5f  56                   push esi
// 009e2f60  57                   push edi
// 009e2f61  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e2f66  33c4                 xor eax, esp
// 009e2f68  50                   push eax
// 009e2f69  8d442410             lea eax, [esp + 0x10]
// 009e2f6d  64a300000000         mov dword ptr fs:[0], eax
// 009e2f73  8bf9                 mov edi, ecx
// 009e2f75  897c240c             mov dword ptr [esp + 0xc], edi
// 009e2f79  c7077c71c100         mov dword ptr [edi], 0xc1717c
// 009e2f7f  33f6                 xor esi, esi
// 009e2f81  397728               cmp dword ptr [edi + 0x28], esi
// 009e2f84  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009e2f8c  7e1f                 jle 0x9e2fad
// 009e2f8e  8bff                 mov edi, edi
// 009e2f90  85f6                 test esi, esi
// 009e2f92  7c47                 jl 0x9e2fdb
// 009e2f94  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009e2f97  7d42                 jge 0x9e2fdb
// 009e2f99  8b4724               mov eax, dword ptr [edi + 0x24]
// 009e2f9c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009e2f9f  8d04b0               lea eax, [eax + esi*4]
// 009e2fa2  e8e3f6f9ff           call 0x98268a
// 009e2fa7  46                   inc esi
// 009e2fa8  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009e2fab  7ce3                 jl 0x9e2f90
// 009e2fad  8d4f20               lea ecx, [edi + 0x20]
// 009e2fb0  c644241800           mov byte ptr [esp + 0x18], 0
// 009e2fb5  e8f6feffff           call 0x9e2eb0
// 009e2fba  8bcf                 mov ecx, edi
// 009e2fbc  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 009e2fc4  e8a3fcf9ff           call 0x982c6c
// 009e2fc9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e2fcd  64890d00000000       mov dword ptr fs:[0], ecx
// 009e2fd4  59                   pop ecx
// 009e2fd5  5f                   pop edi
// 009e2fd6  5e                   pop esi
// 009e2fd7  83c410               add esp, 0x10
// 009e2fda  c3                   ret 
// 009e2fdb  e8e0f3f9ff           call 0x9823c0
// copied from an identical function in another client (function ??1CXTPPropertyGridVerbs@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp