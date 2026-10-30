// from server: 100% by auto
// roc 2008-06 006fe670  unit: CXTPPropExchangeArchive  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe670
//
// 006fe670  56                   push esi
// 006fe671  8bf1                 mov esi, ecx
// 006fe673  8b06                 mov eax, dword ptr [esi]
// 006fe675  85c0                 test eax, eax
// 006fe677  7408                 je 0x6fe681
// 006fe679  8b08                 mov ecx, dword ptr [eax]
// 006fe67b  8b5108               mov edx, dword ptr [ecx + 8]
// 006fe67e  50                   push eax
// 006fe67f  ffd2                 call edx
// 006fe681  8bc6                 mov eax, esi
// 006fe683  c70600000000         mov dword ptr [esi], 0
// 006fe689  5e                   pop esi
// 006fe68a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??I?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEPAPAUIXMLDOMDocument@XTPXML@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
