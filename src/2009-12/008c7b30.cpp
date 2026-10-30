// roc 2009-12 008c7b30  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7b30
//
// 008c7b30  56                   push esi
// 008c7b31  8bf1                 mov esi, ecx
// 008c7b33  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c7b37  57                   push edi
// 008c7b38  7421                 je 0x8c7b5b
// 008c7b3a  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c7b3e  741b                 je 0x8c7b5b
// 008c7b40  e82de90500           call 0x926472
// 008c7b45  a900080000           test eax, 0x800
// 008c7b4a  750f                 jne 0x8c7b5b
// 008c7b4c  8d7e70               lea edi, [esi + 0x70]
// 008c7b4f  8bcf                 mov ecx, edi
// 008c7b51  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c7b57  84c0                 test al, al
// 008c7b59  7407                 je 0x8c7b62
// 008c7b5b  5f                   pop edi
// 008c7b5c  33c0                 xor eax, eax
// 008c7b5e  5e                   pop esi
// 008c7b5f  c20800               ret 8
// 008c7b62  8b06                 mov eax, dword ptr [esi]
// 008c7b64  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008c7b6a  53                   push ebx
// 008c7b6b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008c7b6f  0fb60b               movzx ecx, byte ptr [ebx]
// 008c7b72  51                   push ecx
// 008c7b73  8bce                 mov ecx, esi
// 008c7b75  ffd2                 call edx
// 008c7b77  85c0                 test eax, eax
// 008c7b79  750b                 jne 0x8c7b86
// 008c7b7b  5b                   pop ebx
// 008c7b7c  5f                   pop edi
// 008c7b7d  b801000000           mov eax, 1
// 008c7b82  5e                   pop esi
// 008c7b83  c20800               ret 8
// 008c7b86  8bcf                 mov ecx, edi
// 008c7b88  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7b8e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008c7b92  3bf8                 cmp edi, eax
// 008c7b94  7d0c                 jge 0x8c7ba2
// 008c7b96  57                   push edi
// 008c7b97  8bce                 mov ecx, esi
// 008c7b99  e822fcffff           call 0x8c77c0
// 008c7b9e  85c0                 test eax, eax
// 008c7ba0  7508                 jne 0x8c7baa
// 008c7ba2  5b                   pop ebx
// 008c7ba3  5f                   pop edi
// 008c7ba4  33c0                 xor eax, eax
// 008c7ba6  5e                   pop esi
// 008c7ba7  c20800               ret 8
// 008c7baa  8b06                 mov eax, dword ptr [esi]
// 008c7bac  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008c7bb2  57                   push edi
// 008c7bb3  53                   push ebx
// 008c7bb4  8bce                 mov ecx, esi
// 008c7bb6  ffd2                 call edx
// 008c7bb8  5b                   pop ebx
// 008c7bb9  5f                   pop edi
// 008c7bba  5e                   pop esi
// 008c7bbb  c20800               ret 8
// copied from an identical function in another client (function ?CheckChar@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp