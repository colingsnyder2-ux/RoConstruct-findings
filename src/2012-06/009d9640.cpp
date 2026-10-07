// roc 2012-06 009d9640  unit: CXTPPropExchangeArchive  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d9640
//
// 009d9640  56                   push esi
// 009d9641  8bf1                 mov esi, ecx
// 009d9643  8b06                 mov eax, dword ptr [esi]
// 009d9645  85c0                 test eax, eax
// 009d9647  7408                 je 0x9d9651
// 009d9649  8b08                 mov ecx, dword ptr [eax]
// 009d964b  8b5108               mov edx, dword ptr [ecx + 8]
// 009d964e  50                   push eax
// 009d964f  ffd2                 call edx
// 009d9651  8bc6                 mov eax, esi
// 009d9653  c70600000000         mov dword ptr [esi], 0
// 009d9659  5e                   pop esi
// 009d965a  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??I?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEPAPAUIXMLDOMDocument@XTPXML@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
