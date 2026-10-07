// roc 2007-08 00687a70  unit: CXTPPropExchangeXMLNode  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00687a70
//
// 00687a70  56                   push esi
// 00687a71  8b742408             mov esi, dword ptr [esp + 8]
// 00687a75  85f6                 test esi, esi
// 00687a77  57                   push edi
// 00687a78  8bf9                 mov edi, ecx
// 00687a7a  7446                 je 0x687ac2
// 00687a7c  8b06                 mov eax, dword ptr [esi]
// 00687a7e  8b10                 mov edx, dword ptr [eax]
// 00687a80  53                   push ebx
// 00687a81  55                   push ebp
// 00687a82  8d4c2414             lea ecx, [esp + 0x14]
// 00687a86  51                   push ecx
// 00687a87  6818f57c00           push 0x7cf518
// 00687a8c  56                   push esi
// 00687a8d  ffd2                 call edx
// 00687a8f  8bd8                 mov ebx, eax
// 00687a91  33c0                 xor eax, eax
// 00687a93  85db                 test ebx, ebx
// 00687a95  0f9cc0               setl al
// 00687a98  83e801               sub eax, 1
// 00687a9b  23442414             and eax, dword ptr [esp + 0x14]
// 00687a9f  8be8                 mov ebp, eax
// 00687aa1  8b07                 mov eax, dword ptr [edi]
// 00687aa3  85c0                 test eax, eax
// 00687aa5  7408                 je 0x687aaf
// 00687aa7  8b08                 mov ecx, dword ptr [eax]
// 00687aa9  8b5108               mov edx, dword ptr [ecx + 8]
// 00687aac  50                   push eax
// 00687aad  ffd2                 call edx
// 00687aaf  892f                 mov dword ptr [edi], ebp
// 00687ab1  8b06                 mov eax, dword ptr [esi]
// 00687ab3  8b4808               mov ecx, dword ptr [eax + 8]
// 00687ab6  56                   push esi
// 00687ab7  ffd1                 call ecx
// 00687ab9  5d                   pop ebp
// 00687aba  8bc3                 mov eax, ebx
// 00687abc  5b                   pop ebx
// 00687abd  5f                   pop edi
// 00687abe  5e                   pop esi
// 00687abf  c20400               ret 4
// 00687ac2  8b07                 mov eax, dword ptr [edi]
// 00687ac4  85c0                 test eax, eax
// 00687ac6  740e                 je 0x687ad6
// 00687ac8  c70700000000         mov dword ptr [edi], 0
// 00687ace  8b08                 mov ecx, dword ptr [eax]
// 00687ad0  8b5108               mov edx, dword ptr [ecx + 8]
// 00687ad3  50                   push eax
// 00687ad4  ffd2                 call edx
// 00687ad6  5f                   pop edi
// 00687ad7  b802400080           mov eax, 0x80004002
// 00687adc  5e                   pop esi
// 00687add  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
