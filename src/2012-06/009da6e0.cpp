// from server: 100% by auto
// roc 2012-06 009da6e0  unit: CXTPPropExchangeXMLNode  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009da6e0
//
// 009da6e0  51                   push ecx
// 009da6e1  8b442408             mov eax, dword ptr [esp + 8]
// 009da6e5  56                   push esi
// 009da6e6  57                   push edi
// 009da6e7  8bf1                 mov esi, ecx
// 009da6e9  85c0                 test eax, eax
// 009da6eb  7437                 je 0x9da724
// 009da6ed  8b08                 mov ecx, dword ptr [eax]
// 009da6ef  53                   push ebx
// 009da6f0  8d54240c             lea edx, [esp + 0xc]
// 009da6f4  52                   push edx
// 009da6f5  689460c100           push 0xc16094
// 009da6fa  50                   push eax
// 009da6fb  8b01                 mov eax, dword ptr [ecx]
// 009da6fd  ffd0                 call eax
// 009da6ff  33db                 xor ebx, ebx
// 009da701  8bf8                 mov edi, eax
// 009da703  8b06                 mov eax, dword ptr [esi]
// 009da705  85ff                 test edi, edi
// 009da707  0f9cc3               setl bl
// 009da70a  4b                   dec ebx
// 009da70b  235c240c             and ebx, dword ptr [esp + 0xc]
// 009da70f  85c0                 test eax, eax
// 009da711  7408                 je 0x9da71b
// 009da713  8b08                 mov ecx, dword ptr [eax]
// 009da715  8b5108               mov edx, dword ptr [ecx + 8]
// 009da718  50                   push eax
// 009da719  ffd2                 call edx
// 009da71b  8b442414             mov eax, dword ptr [esp + 0x14]
// 009da71f  891e                 mov dword ptr [esi], ebx
// 009da721  5b                   pop ebx
// 009da722  eb1d                 jmp 0x9da741
// 009da724  8b0e                 mov ecx, dword ptr [esi]
// 009da726  85c9                 test ecx, ecx
// 009da728  7412                 je 0x9da73c
// 009da72a  c70600000000         mov dword ptr [esi], 0
// 009da730  8b01                 mov eax, dword ptr [ecx]
// 009da732  51                   push ecx
// 009da733  8b4808               mov ecx, dword ptr [eax + 8]
// 009da736  ffd1                 call ecx
// 009da738  8b442410             mov eax, dword ptr [esp + 0x10]
// 009da73c  bf02400080           mov edi, 0x80004002
// 009da741  85c0                 test eax, eax
// 009da743  7408                 je 0x9da74d
// 009da745  8b10                 mov edx, dword ptr [eax]
// 009da747  50                   push eax
// 009da748  8b4208               mov eax, dword ptr [edx + 8]
// 009da74b  ffd0                 call eax
// 009da74d  8bc7                 mov eax, edi
// 009da74f  5f                   pop edi
// 009da750  5e                   pop esi
// 009da751  59                   pop ecx
// 009da752  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
