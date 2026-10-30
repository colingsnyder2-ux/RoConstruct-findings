// roc 2011-06 008df990  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df990
//
// 008df990  56                   push esi
// 008df991  8bf1                 mov esi, ecx
// 008df993  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008df997  57                   push edi
// 008df998  7421                 je 0x8df9bb
// 008df99a  837e2000             cmp dword ptr [esi + 0x20], 0
// 008df99e  741b                 je 0x8df9bb
// 008df9a0  e873cc0e00           call 0x9cc618
// 008df9a5  a900080000           test eax, 0x800
// 008df9aa  750f                 jne 0x8df9bb
// 008df9ac  8d7e70               lea edi, [esi + 0x70]
// 008df9af  8bcf                 mov ecx, edi
// 008df9b1  ff15b026a400         call dword ptr [0xa426b0]
// 008df9b7  84c0                 test al, al
// 008df9b9  7407                 je 0x8df9c2
// 008df9bb  5f                   pop edi
// 008df9bc  33c0                 xor eax, eax
// 008df9be  5e                   pop esi
// 008df9bf  c20800               ret 8
// 008df9c2  8b06                 mov eax, dword ptr [esi]
// 008df9c4  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008df9ca  53                   push ebx
// 008df9cb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008df9cf  0fb60b               movzx ecx, byte ptr [ebx]
// 008df9d2  51                   push ecx
// 008df9d3  8bce                 mov ecx, esi
// 008df9d5  ffd2                 call edx
// 008df9d7  85c0                 test eax, eax
// 008df9d9  750b                 jne 0x8df9e6
// 008df9db  5b                   pop ebx
// 008df9dc  5f                   pop edi
// 008df9dd  b801000000           mov eax, 1
// 008df9e2  5e                   pop esi
// 008df9e3  c20800               ret 8
// 008df9e6  8bcf                 mov ecx, edi
// 008df9e8  ff15a826a400         call dword ptr [0xa426a8]
// 008df9ee  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008df9f2  3bf8                 cmp edi, eax
// 008df9f4  7d0c                 jge 0x8dfa02
// 008df9f6  57                   push edi
// 008df9f7  8bce                 mov ecx, esi
// 008df9f9  e842fcffff           call 0x8df640
// 008df9fe  85c0                 test eax, eax
// 008dfa00  7508                 jne 0x8dfa0a
// 008dfa02  5b                   pop ebx
// 008dfa03  5f                   pop edi
// 008dfa04  33c0                 xor eax, eax
// 008dfa06  5e                   pop esi
// 008dfa07  c20800               ret 8
// 008dfa0a  8b06                 mov eax, dword ptr [esi]
// 008dfa0c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008dfa12  57                   push edi
// 008dfa13  53                   push ebx
// 008dfa14  8bce                 mov ecx, esi
// 008dfa16  ffd2                 call edx
// 008dfa18  5b                   pop ebx
// 008dfa19  5f                   pop edi
// 008dfa1a  5e                   pop esi
// 008dfa1b  c20800               ret 8
// copied from an identical function in another client (function ?CheckChar@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp