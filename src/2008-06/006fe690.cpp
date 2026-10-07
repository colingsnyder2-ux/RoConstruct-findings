// roc 2008-06 006fe690  unit: CXTPPropExchangeArchive  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe690
//
// 006fe690  51                   push ecx
// 006fe691  8b442408             mov eax, dword ptr [esp + 8]
// 006fe695  56                   push esi
// 006fe696  57                   push edi
// 006fe697  8bf1                 mov esi, ecx
// 006fe699  85c0                 test eax, eax
// 006fe69b  7437                 je 0x6fe6d4
// 006fe69d  8b08                 mov ecx, dword ptr [eax]
// 006fe69f  53                   push ebx
// 006fe6a0  8d54240c             lea edx, [esp + 0xc]
// 006fe6a4  52                   push edx
// 006fe6a5  6830af8500           push 0x85af30
// 006fe6aa  50                   push eax
// 006fe6ab  8b01                 mov eax, dword ptr [ecx]
// 006fe6ad  ffd0                 call eax
// 006fe6af  33db                 xor ebx, ebx
// 006fe6b1  8bf8                 mov edi, eax
// 006fe6b3  8b06                 mov eax, dword ptr [esi]
// 006fe6b5  85ff                 test edi, edi
// 006fe6b7  0f9cc3               setl bl
// 006fe6ba  4b                   dec ebx
// 006fe6bb  235c240c             and ebx, dword ptr [esp + 0xc]
// 006fe6bf  85c0                 test eax, eax
// 006fe6c1  7408                 je 0x6fe6cb
// 006fe6c3  8b08                 mov ecx, dword ptr [eax]
// 006fe6c5  8b5108               mov edx, dword ptr [ecx + 8]
// 006fe6c8  50                   push eax
// 006fe6c9  ffd2                 call edx
// 006fe6cb  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fe6cf  891e                 mov dword ptr [esi], ebx
// 006fe6d1  5b                   pop ebx
// 006fe6d2  eb1d                 jmp 0x6fe6f1
// 006fe6d4  8b0e                 mov ecx, dword ptr [esi]
// 006fe6d6  85c9                 test ecx, ecx
// 006fe6d8  7412                 je 0x6fe6ec
// 006fe6da  c70600000000         mov dword ptr [esi], 0
// 006fe6e0  8b01                 mov eax, dword ptr [ecx]
// 006fe6e2  51                   push ecx
// 006fe6e3  8b4808               mov ecx, dword ptr [eax + 8]
// 006fe6e6  ffd1                 call ecx
// 006fe6e8  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fe6ec  bf02400080           mov edi, 0x80004002
// 006fe6f1  85c0                 test eax, eax
// 006fe6f3  7408                 je 0x6fe6fd
// 006fe6f5  8b10                 mov edx, dword ptr [eax]
// 006fe6f7  50                   push eax
// 006fe6f8  8b4208               mov eax, dword ptr [edx + 8]
// 006fe6fb  ffd0                 call eax
// 006fe6fd  8bc7                 mov eax, edi
// 006fe6ff  5f                   pop edi
// 006fe700  5e                   pop esi
// 006fe701  59                   pop ecx
// 006fe702  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
