// roc 2008-06 006fe720  unit: CXTPPropExchangeArchive  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe720
//
// 006fe720  53                   push ebx
// 006fe721  55                   push ebp
// 006fe722  56                   push esi
// 006fe723  57                   push edi
// 006fe724  e8fd21faff           call 0x6a0926
// 006fe729  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006fe72d  8b2d0c238000         mov ebp, dword ptr [0x80230c]
// 006fe733  8bf8                 mov edi, eax
// 006fe735  8b7720               mov esi, dword ptr [edi + 0x20]
// 006fe738  85f6                 test esi, esi
// 006fe73a  7415                 je 0x6fe751
// 006fe73c  8d642400             lea esp, [esp]
// 006fe740  8b06                 mov eax, dword ptr [esi]
// 006fe742  50                   push eax
// 006fe743  53                   push ebx
// 006fe744  ffd5                 call ebp
// 006fe746  85c0                 test eax, eax
// 006fe748  7435                 je 0x6fe77f
// 006fe74a  8b7614               mov esi, dword ptr [esi + 0x14]
// 006fe74d  85f6                 test esi, esi
// 006fe74f  75ef                 jne 0x6fe740
// 006fe751  8b7f4c               mov edi, dword ptr [edi + 0x4c]
// 006fe754  85ff                 test edi, edi
// 006fe756  7420                 je 0x6fe778
// 006fe758  8b7728               mov esi, dword ptr [edi + 0x28]
// 006fe75b  85f6                 test esi, esi
// 006fe75d  7412                 je 0x6fe771
// 006fe75f  90                   nop 
// 006fe760  8b0e                 mov ecx, dword ptr [esi]
// 006fe762  51                   push ecx
// 006fe763  53                   push ebx
// 006fe764  ffd5                 call ebp
// 006fe766  85c0                 test eax, eax
// 006fe768  7415                 je 0x6fe77f
// 006fe76a  8b7614               mov esi, dword ptr [esi + 0x14]
// 006fe76d  85f6                 test esi, esi
// 006fe76f  75ef                 jne 0x6fe760
// 006fe771  8b7f3c               mov edi, dword ptr [edi + 0x3c]
// 006fe774  85ff                 test edi, edi
// 006fe776  75e0                 jne 0x6fe758
// 006fe778  5f                   pop edi
// 006fe779  5e                   pop esi
// 006fe77a  5d                   pop ebp
// 006fe77b  33c0                 xor eax, eax
// 006fe77d  5b                   pop ebx
// 006fe77e  c3                   ret 
// 006fe77f  5f                   pop edi
// 006fe780  8bc6                 mov eax, esi
// 006fe782  5e                   pop esi
// 006fe783  5d                   pop ebp
// 006fe784  5b                   pop ebx
// 006fe785  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?FindRuntimeClass@CXTPPropExchange@@SAPAUCRuntimeClass@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
