// roc 2012-06 009d9730  unit: CXTPPropExchangeArchive  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d9730
//
// 009d9730  53                   push ebx
// 009d9731  55                   push ebp
// 009d9732  56                   push esi
// 009d9733  57                   push edi
// 009d9734  e8998cfaff           call 0x9823d2
// 009d9739  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009d973d  8b2d6c22b200         mov ebp, dword ptr [0xb2226c]
// 009d9743  8bf8                 mov edi, eax
// 009d9745  8b7720               mov esi, dword ptr [edi + 0x20]
// 009d9748  85f6                 test esi, esi
// 009d974a  7415                 je 0x9d9761
// 009d974c  8d642400             lea esp, [esp]
// 009d9750  8b06                 mov eax, dword ptr [esi]
// 009d9752  50                   push eax
// 009d9753  53                   push ebx
// 009d9754  ffd5                 call ebp
// 009d9756  85c0                 test eax, eax
// 009d9758  7435                 je 0x9d978f
// 009d975a  8b7614               mov esi, dword ptr [esi + 0x14]
// 009d975d  85f6                 test esi, esi
// 009d975f  75ef                 jne 0x9d9750
// 009d9761  8b7f4c               mov edi, dword ptr [edi + 0x4c]
// 009d9764  85ff                 test edi, edi
// 009d9766  7420                 je 0x9d9788
// 009d9768  8b7728               mov esi, dword ptr [edi + 0x28]
// 009d976b  85f6                 test esi, esi
// 009d976d  7412                 je 0x9d9781
// 009d976f  90                   nop 
// 009d9770  8b0e                 mov ecx, dword ptr [esi]
// 009d9772  51                   push ecx
// 009d9773  53                   push ebx
// 009d9774  ffd5                 call ebp
// 009d9776  85c0                 test eax, eax
// 009d9778  7415                 je 0x9d978f
// 009d977a  8b7614               mov esi, dword ptr [esi + 0x14]
// 009d977d  85f6                 test esi, esi
// 009d977f  75ef                 jne 0x9d9770
// 009d9781  8b7f3c               mov edi, dword ptr [edi + 0x3c]
// 009d9784  85ff                 test edi, edi
// 009d9786  75e0                 jne 0x9d9768
// 009d9788  5f                   pop edi
// 009d9789  5e                   pop esi
// 009d978a  5d                   pop ebp
// 009d978b  33c0                 xor eax, eax
// 009d978d  5b                   pop ebx
// 009d978e  c3                   ret 
// 009d978f  5f                   pop edi
// 009d9790  8bc6                 mov eax, esi
// 009d9792  5e                   pop esi
// 009d9793  5d                   pop ebp
// 009d9794  5b                   pop ebx
// 009d9795  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?FindRuntimeClass@CXTPPropExchange@@SAPAUCRuntimeClass@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
