// from server: 100% by auto
// roc 2011-06 00861260  unit: CXTPPropExchangeArchive  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00861260
//
// 00861260  51                   push ecx
// 00861261  8b442408             mov eax, dword ptr [esp + 8]
// 00861265  56                   push esi
// 00861266  57                   push edi
// 00861267  8bf1                 mov esi, ecx
// 00861269  85c0                 test eax, eax
// 0086126b  7437                 je 0x8612a4
// 0086126d  8b08                 mov ecx, dword ptr [eax]
// 0086126f  53                   push ebx
// 00861270  8d54240c             lea edx, [esp + 0xc]
// 00861274  52                   push edx
// 00861275  688ca9ac00           push 0xaca98c
// 0086127a  50                   push eax
// 0086127b  8b01                 mov eax, dword ptr [ecx]
// 0086127d  ffd0                 call eax
// 0086127f  33db                 xor ebx, ebx
// 00861281  8bf8                 mov edi, eax
// 00861283  8b06                 mov eax, dword ptr [esi]
// 00861285  85ff                 test edi, edi
// 00861287  0f9cc3               setl bl
// 0086128a  4b                   dec ebx
// 0086128b  235c240c             and ebx, dword ptr [esp + 0xc]
// 0086128f  85c0                 test eax, eax
// 00861291  7408                 je 0x86129b
// 00861293  8b08                 mov ecx, dword ptr [eax]
// 00861295  8b5108               mov edx, dword ptr [ecx + 8]
// 00861298  50                   push eax
// 00861299  ffd2                 call edx
// 0086129b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086129f  891e                 mov dword ptr [esi], ebx
// 008612a1  5b                   pop ebx
// 008612a2  eb1d                 jmp 0x8612c1
// 008612a4  8b0e                 mov ecx, dword ptr [esi]
// 008612a6  85c9                 test ecx, ecx
// 008612a8  7412                 je 0x8612bc
// 008612aa  c70600000000         mov dword ptr [esi], 0
// 008612b0  8b01                 mov eax, dword ptr [ecx]
// 008612b2  51                   push ecx
// 008612b3  8b4808               mov ecx, dword ptr [eax + 8]
// 008612b6  ffd1                 call ecx
// 008612b8  8b442410             mov eax, dword ptr [esp + 0x10]
// 008612bc  bf02400080           mov edi, 0x80004002
// 008612c1  85c0                 test eax, eax
// 008612c3  7408                 je 0x8612cd
// 008612c5  8b10                 mov edx, dword ptr [eax]
// 008612c7  50                   push eax
// 008612c8  8b4208               mov eax, dword ptr [edx + 8]
// 008612cb  ffd0                 call eax
// 008612cd  8bc7                 mov eax, edi
// 008612cf  5f                   pop edi
// 008612d0  5e                   pop esi
// 008612d1  59                   pop ecx
// 008612d2  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
