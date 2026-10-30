// roc 2012-06 009d1c60  unit: CXTPControls  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d1c60
//
// 009d1c60  53                   push ebx
// 009d1c61  55                   push ebp
// 009d1c62  56                   push esi
// 009d1c63  57                   push edi
// 009d1c64  8bf9                 mov edi, ecx
// 009d1c66  8b07                 mov eax, dword ptr [edi]
// 009d1c68  8b10                 mov edx, dword ptr [eax]
// 009d1c6a  ffd2                 call edx
// 009d1c6c  8bc8                 mov ecx, eax
// 009d1c6e  e8790efbff           call 0x982aec
// 009d1c73  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009d1c77  8bd8                 mov ebx, eax
// 009d1c79  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d1c7c  33f6                 xor esi, esi
// 009d1c7e  85c0                 test eax, eax
// 009d1c80  7e4a                 jle 0x9d1ccc
// 009d1c82  85f6                 test esi, esi
// 009d1c84  7c11                 jl 0x9d1c97
// 009d1c86  3bf0                 cmp esi, eax
// 009d1c88  7d0d                 jge 0x9d1c97
// 009d1c8a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d1c8d  7d5b                 jge 0x9d1cea
// 009d1c8f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 009d1c92  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009d1c95  eb02                 jmp 0x9d1c99
// 009d1c97  33c9                 xor ecx, ecx
// 009d1c99  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 009d1ca0  7522                 jne 0x9d1cc4
// 009d1ca2  85f6                 test esi, esi
// 009d1ca4  7c11                 jl 0x9d1cb7
// 009d1ca6  3bf0                 cmp esi, eax
// 009d1ca8  7d0d                 jge 0x9d1cb7
// 009d1caa  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d1cad  7d3b                 jge 0x9d1cea
// 009d1caf  8b5728               mov edx, dword ptr [edi + 0x28]
// 009d1cb2  8b04b2               mov eax, dword ptr [edx + esi*4]
// 009d1cb5  eb02                 jmp 0x9d1cb9
// 009d1cb7  33c0                 xor eax, eax
// 009d1cb9  55                   push ebp
// 009d1cba  6aff                 push -1
// 009d1cbc  50                   push eax
// 009d1cbd  8bcb                 mov ecx, ebx
// 009d1cbf  e89cf4ffff           call 0x9d1160
// 009d1cc4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d1cc7  46                   inc esi
// 009d1cc8  3bf0                 cmp esi, eax
// 009d1cca  7cb6                 jl 0x9d1c82
// 009d1ccc  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 009d1ccf  85c9                 test ecx, ecx
// 009d1cd1  740e                 je 0x9d1ce1
// 009d1cd3  55                   push ebp
// 009d1cd4  e887ffffff           call 0x9d1c60
// 009d1cd9  50                   push eax
// 009d1cda  8bcb                 mov ecx, ebx
// 009d1cdc  e8ffd3ffff           call 0x9cf0e0
// 009d1ce1  5f                   pop edi
// 009d1ce2  5e                   pop esi
// 009d1ce3  5d                   pop ebp
// 009d1ce4  8bc3                 mov eax, ebx
// 009d1ce6  5b                   pop ebx
// 009d1ce7  c20400               ret 4
// 009d1cea  e8d106fbff           call 0x9823c0
// copied from an identical function in another client (function ?Duplicate@CXTPControls@@QAEPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp