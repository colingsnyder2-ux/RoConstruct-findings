// roc 2012-06 009d9660  unit: CXTPPropExchangeArchive  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d9660
//
// 009d9660  51                   push ecx
// 009d9661  8b442408             mov eax, dword ptr [esp + 8]
// 009d9665  56                   push esi
// 009d9666  57                   push edi
// 009d9667  8bf1                 mov esi, ecx
// 009d9669  85c0                 test eax, eax
// 009d966b  7437                 je 0x9d96a4
// 009d966d  8b08                 mov ecx, dword ptr [eax]
// 009d966f  53                   push ebx
// 009d9670  8d54240c             lea edx, [esp + 0xc]
// 009d9674  52                   push edx
// 009d9675  688460c100           push 0xc16084
// 009d967a  50                   push eax
// 009d967b  8b01                 mov eax, dword ptr [ecx]
// 009d967d  ffd0                 call eax
// 009d967f  33db                 xor ebx, ebx
// 009d9681  8bf8                 mov edi, eax
// 009d9683  8b06                 mov eax, dword ptr [esi]
// 009d9685  85ff                 test edi, edi
// 009d9687  0f9cc3               setl bl
// 009d968a  4b                   dec ebx
// 009d968b  235c240c             and ebx, dword ptr [esp + 0xc]
// 009d968f  85c0                 test eax, eax
// 009d9691  7408                 je 0x9d969b
// 009d9693  8b08                 mov ecx, dword ptr [eax]
// 009d9695  8b5108               mov edx, dword ptr [ecx + 8]
// 009d9698  50                   push eax
// 009d9699  ffd2                 call edx
// 009d969b  8b442414             mov eax, dword ptr [esp + 0x14]
// 009d969f  891e                 mov dword ptr [esi], ebx
// 009d96a1  5b                   pop ebx
// 009d96a2  eb1d                 jmp 0x9d96c1
// 009d96a4  8b0e                 mov ecx, dword ptr [esi]
// 009d96a6  85c9                 test ecx, ecx
// 009d96a8  7412                 je 0x9d96bc
// 009d96aa  c70600000000         mov dword ptr [esi], 0
// 009d96b0  8b01                 mov eax, dword ptr [ecx]
// 009d96b2  51                   push ecx
// 009d96b3  8b4808               mov ecx, dword ptr [eax + 8]
// 009d96b6  ffd1                 call ecx
// 009d96b8  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d96bc  bf02400080           mov edi, 0x80004002
// 009d96c1  85c0                 test eax, eax
// 009d96c3  7408                 je 0x9d96cd
// 009d96c5  8b10                 mov edx, dword ptr [eax]
// 009d96c7  50                   push eax
// 009d96c8  8b4208               mov eax, dword ptr [edx + 8]
// 009d96cb  ffd0                 call eax
// 009d96cd  8bc7                 mov eax, edi
// 009d96cf  5f                   pop edi
// 009d96d0  5e                   pop esi
// 009d96d1  59                   pop ecx
// 009d96d2  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
