// roc 2011-06 00861240  unit: CXTPPropExchangeArchive  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00861240
//
// 00861240  56                   push esi
// 00861241  8bf1                 mov esi, ecx
// 00861243  8b06                 mov eax, dword ptr [esi]
// 00861245  85c0                 test eax, eax
// 00861247  7408                 je 0x861251
// 00861249  8b08                 mov ecx, dword ptr [eax]
// 0086124b  8b5108               mov edx, dword ptr [ecx + 8]
// 0086124e  50                   push eax
// 0086124f  ffd2                 call edx
// 00861251  8bc6                 mov eax, esi
// 00861253  c70600000000         mov dword ptr [esi], 0
// 00861259  5e                   pop esi
// 0086125a  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??I?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEPAPAUIXMLDOMDocument@XTPXML@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
