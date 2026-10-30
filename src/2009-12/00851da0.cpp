// roc 2009-12 00851da0  unit: CXTPPropExchangeArchive  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851da0
//
// 00851da0  53                   push ebx
// 00851da1  55                   push ebp
// 00851da2  56                   push esi
// 00851da3  57                   push edi
// 00851da4  e8751dfaff           call 0x7f3b1e
// 00851da9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00851dad  8b2df8b29800         mov ebp, dword ptr [0x98b2f8]
// 00851db3  8bf8                 mov edi, eax
// 00851db5  8b7720               mov esi, dword ptr [edi + 0x20]
// 00851db8  85f6                 test esi, esi
// 00851dba  7415                 je 0x851dd1
// 00851dbc  8d642400             lea esp, [esp]
// 00851dc0  8b06                 mov eax, dword ptr [esi]
// 00851dc2  50                   push eax
// 00851dc3  53                   push ebx
// 00851dc4  ffd5                 call ebp
// 00851dc6  85c0                 test eax, eax
// 00851dc8  7435                 je 0x851dff
// 00851dca  8b7614               mov esi, dword ptr [esi + 0x14]
// 00851dcd  85f6                 test esi, esi
// 00851dcf  75ef                 jne 0x851dc0
// 00851dd1  8b7f4c               mov edi, dword ptr [edi + 0x4c]
// 00851dd4  85ff                 test edi, edi
// 00851dd6  7420                 je 0x851df8
// 00851dd8  8b7728               mov esi, dword ptr [edi + 0x28]
// 00851ddb  85f6                 test esi, esi
// 00851ddd  7412                 je 0x851df1
// 00851ddf  90                   nop 
// 00851de0  8b0e                 mov ecx, dword ptr [esi]
// 00851de2  51                   push ecx
// 00851de3  53                   push ebx
// 00851de4  ffd5                 call ebp
// 00851de6  85c0                 test eax, eax
// 00851de8  7415                 je 0x851dff
// 00851dea  8b7614               mov esi, dword ptr [esi + 0x14]
// 00851ded  85f6                 test esi, esi
// 00851def  75ef                 jne 0x851de0
// 00851df1  8b7f3c               mov edi, dword ptr [edi + 0x3c]
// 00851df4  85ff                 test edi, edi
// 00851df6  75e0                 jne 0x851dd8
// 00851df8  5f                   pop edi
// 00851df9  5e                   pop esi
// 00851dfa  5d                   pop ebp
// 00851dfb  33c0                 xor eax, eax
// 00851dfd  5b                   pop ebx
// 00851dfe  c3                   ret 
// 00851dff  5f                   pop edi
// 00851e00  8bc6                 mov eax, esi
// 00851e02  5e                   pop esi
// 00851e03  5d                   pop ebp
// 00851e04  5b                   pop ebx
// 00851e05  c3                   ret 
// copied from an identical function in another client (function ?FindRuntimeClass@CXTPPropExchange@@SAPAUCRuntimeClass@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp