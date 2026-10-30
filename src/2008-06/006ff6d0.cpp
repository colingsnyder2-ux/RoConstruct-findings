// from server: 100% by auto
// roc 2008-06 006ff6d0  unit: CXTPPropExchangeXMLNode  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ff6d0
//
// 006ff6d0  51                   push ecx
// 006ff6d1  8b442408             mov eax, dword ptr [esp + 8]
// 006ff6d5  56                   push esi
// 006ff6d6  57                   push edi
// 006ff6d7  8bf1                 mov esi, ecx
// 006ff6d9  85c0                 test eax, eax
// 006ff6db  7437                 je 0x6ff714
// 006ff6dd  8b08                 mov ecx, dword ptr [eax]
// 006ff6df  53                   push ebx
// 006ff6e0  8d54240c             lea edx, [esp + 0xc]
// 006ff6e4  52                   push edx
// 006ff6e5  6840af8500           push 0x85af40
// 006ff6ea  50                   push eax
// 006ff6eb  8b01                 mov eax, dword ptr [ecx]
// 006ff6ed  ffd0                 call eax
// 006ff6ef  33db                 xor ebx, ebx
// 006ff6f1  8bf8                 mov edi, eax
// 006ff6f3  8b06                 mov eax, dword ptr [esi]
// 006ff6f5  85ff                 test edi, edi
// 006ff6f7  0f9cc3               setl bl
// 006ff6fa  4b                   dec ebx
// 006ff6fb  235c240c             and ebx, dword ptr [esp + 0xc]
// 006ff6ff  85c0                 test eax, eax
// 006ff701  7408                 je 0x6ff70b
// 006ff703  8b08                 mov ecx, dword ptr [eax]
// 006ff705  8b5108               mov edx, dword ptr [ecx + 8]
// 006ff708  50                   push eax
// 006ff709  ffd2                 call edx
// 006ff70b  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ff70f  891e                 mov dword ptr [esi], ebx
// 006ff711  5b                   pop ebx
// 006ff712  eb1d                 jmp 0x6ff731
// 006ff714  8b0e                 mov ecx, dword ptr [esi]
// 006ff716  85c9                 test ecx, ecx
// 006ff718  7412                 je 0x6ff72c
// 006ff71a  c70600000000         mov dword ptr [esi], 0
// 006ff720  8b01                 mov eax, dword ptr [ecx]
// 006ff722  51                   push ecx
// 006ff723  8b4808               mov ecx, dword ptr [eax + 8]
// 006ff726  ffd1                 call ecx
// 006ff728  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ff72c  bf02400080           mov edi, 0x80004002
// 006ff731  85c0                 test eax, eax
// 006ff733  7408                 je 0x6ff73d
// 006ff735  8b10                 mov edx, dword ptr [eax]
// 006ff737  50                   push eax
// 006ff738  8b4208               mov eax, dword ptr [edx + 8]
// 006ff73b  ffd0                 call eax
// 006ff73d  8bc7                 mov eax, edi
// 006ff73f  5f                   pop edi
// 006ff740  5e                   pop esi
// 006ff741  59                   pop ecx
// 006ff742  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
