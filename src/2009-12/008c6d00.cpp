// roc 2009-12 008c6d00  unit: VCEdit::?$CXTMaskEditT  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6d00
//
// 008c6d00  56                   push esi
// 008c6d01  57                   push edi
// 008c6d02  8bf9                 mov edi, ecx
// 008c6d04  8b8f9c000000         mov ecx, dword ptr [edi + 0x9c]
// 008c6d0a  85c9                 test ecx, ecx
// 008c6d0c  7409                 je 0x8c6d17
// 008c6d0e  e83d0cfaff           call 0x867950
// 008c6d13  8bf0                 mov esi, eax
// 008c6d15  eb02                 jmp 0x8c6d19
// 008c6d17  33f6                 xor esi, esi
// 008c6d19  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 008c6d1f  85c0                 test eax, eax
// 008c6d21  0f8490000000         je 0x8c6db7
// 008c6d27  85f6                 test esi, esi
// 008c6d29  0f8488000000         je 0x8c6db7
// 008c6d2f  8b16                 mov edx, dword ptr [esi]
// 008c6d31  53                   push ebx
// 008c6d32  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008c6d36  55                   push ebp
// 008c6d37  8b2b                 mov ebp, dword ptr [ebx]
// 008c6d39  6a01                 push 1
// 008c6d3b  50                   push eax
// 008c6d3c  8b4204               mov eax, dword ptr [edx + 4]
// 008c6d3f  8bce                 mov ecx, esi
// 008c6d41  ffd0                 call eax
// 008c6d43  8b5538               mov edx, dword ptr [ebp + 0x38]
// 008c6d46  50                   push eax
// 008c6d47  8bcb                 mov ecx, ebx
// 008c6d49  ffd2                 call edx
// 008c6d4b  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 008c6d51  8b06                 mov eax, dword ptr [esi]
// 008c6d53  8b5008               mov edx, dword ptr [eax + 8]
// 008c6d56  6a01                 push 1
// 008c6d58  51                   push ecx
// 008c6d59  8bce                 mov ecx, esi
// 008c6d5b  ffd2                 call edx
// 008c6d5d  8be8                 mov ebp, eax
// 008c6d5f  3baf98000000         cmp ebp, dword ptr [edi + 0x98]
// 008c6d65  7510                 jne 0x8c6d77
// 008c6d67  8db790000000         lea esi, [edi + 0x90]
// 008c6d6d  85f6                 test esi, esi
// 008c6d6f  7406                 je 0x8c6d77
// 008c6d71  837e0400             cmp dword ptr [esi + 4], 0
// 008c6d75  7522                 jne 0x8c6d99
// 008c6d77  8db790000000         lea esi, [edi + 0x90]
// 008c6d7d  8bce                 mov ecx, esi
// 008c6d7f  e89ad0f2ff           call 0x7f3e1e
// 008c6d84  55                   push ebp
// 008c6d85  ff1558b19800         call dword ptr [0x98b158]
// 008c6d8b  50                   push eax
// 008c6d8c  8bce                 mov ecx, esi
// 008c6d8e  e897d0f2ff           call 0x7f3e2a
// 008c6d93  89af98000000         mov dword ptr [edi + 0x98], ebp
// 008c6d99  8b8f98000000         mov ecx, dword ptr [edi + 0x98]
// 008c6d9f  8b03                 mov eax, dword ptr [ebx]
// 008c6da1  8b5034               mov edx, dword ptr [eax + 0x34]
// 008c6da4  51                   push ecx
// 008c6da5  8bcb                 mov ecx, ebx
// 008c6da7  ffd2                 call edx
// 008c6da9  5d                   pop ebp
// 008c6daa  5b                   pop ebx
// 008c6dab  85f6                 test esi, esi
// 008c6dad  7408                 je 0x8c6db7
// 008c6daf  8b4604               mov eax, dword ptr [esi + 4]
// 008c6db2  5f                   pop edi
// 008c6db3  5e                   pop esi
// 008c6db4  c20800               ret 8
// 008c6db7  5f                   pop edi
// 008c6db8  33c0                 xor eax, eax
// 008c6dba  5e                   pop esi
// 008c6dbb  c20800               ret 8
// copied from an identical function in another client (function ?CtlColor@CXTPPropertyGridInplaceEdit@@IAEPAUHBRUSH__@@PAVCDC@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp