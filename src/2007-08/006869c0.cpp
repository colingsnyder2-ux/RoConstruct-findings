// from server: 100% by auto
// roc 2007-08 006869c0  unit: CXTPPropExchangeArchive  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006869c0
//
// 006869c0  56                   push esi
// 006869c1  8bf1                 mov esi, ecx
// 006869c3  8b06                 mov eax, dword ptr [esi]
// 006869c5  85c0                 test eax, eax
// 006869c7  7408                 je 0x6869d1
// 006869c9  8b08                 mov ecx, dword ptr [eax]
// 006869cb  8b5108               mov edx, dword ptr [ecx + 8]
// 006869ce  50                   push eax
// 006869cf  ffd2                 call edx
// 006869d1  8bc6                 mov eax, esi
// 006869d3  c70600000000         mov dword ptr [esi], 0
// 006869d9  5e                   pop esi
// 006869da  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ??I?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEPAPAUIXMLDOMDocument@XTPXML@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
