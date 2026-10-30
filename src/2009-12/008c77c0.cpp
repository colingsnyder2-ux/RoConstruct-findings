// roc 2009-12 008c77c0  unit: VCEdit::?$CXTMaskEditT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c77c0
//
// 008c77c0  53                   push ebx
// 008c77c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008c77c5  56                   push esi
// 008c77c6  8bf1                 mov esi, ecx
// 008c77c8  57                   push edi
// 008c77c9  8dbe84000000         lea edi, [esi + 0x84]
// 008c77cf  85db                 test ebx, ebx
// 008c77d1  7c25                 jl 0x8c77f8
// 008c77d3  8bcf                 mov ecx, edi
// 008c77d5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c77db  3bd8                 cmp ebx, eax
// 008c77dd  7d19                 jge 0x8c77f8
// 008c77df  53                   push ebx
// 008c77e0  8bcf                 mov ecx, edi
// 008c77e2  ff1510d59800         call dword ptr [0x98d510]
// 008c77e8  3a466c               cmp al, byte ptr [esi + 0x6c]
// 008c77eb  750b                 jne 0x8c77f8
// 008c77ed  5f                   pop edi
// 008c77ee  5e                   pop esi
// 008c77ef  b801000000           mov eax, 1
// 008c77f4  5b                   pop ebx
// 008c77f5  c20400               ret 4
// 008c77f8  5f                   pop edi
// 008c77f9  5e                   pop esi
// 008c77fa  33c0                 xor eax, eax
// 008c77fc  5b                   pop ebx
// 008c77fd  c20400               ret 4
// copied from an identical function in another client (function ?IsPromptPos@?$CXTMaskEditT@VCEdit@@@@IBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp