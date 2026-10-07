// roc 2011-06 008622f0  unit: CXTPPropExchangeXMLNode  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008622f0
//
// 008622f0  51                   push ecx
// 008622f1  8b442408             mov eax, dword ptr [esp + 8]
// 008622f5  56                   push esi
// 008622f6  57                   push edi
// 008622f7  8bf1                 mov esi, ecx
// 008622f9  85c0                 test eax, eax
// 008622fb  7437                 je 0x862334
// 008622fd  8b08                 mov ecx, dword ptr [eax]
// 008622ff  53                   push ebx
// 00862300  8d54240c             lea edx, [esp + 0xc]
// 00862304  52                   push edx
// 00862305  689ca9ac00           push 0xaca99c
// 0086230a  50                   push eax
// 0086230b  8b01                 mov eax, dword ptr [ecx]
// 0086230d  ffd0                 call eax
// 0086230f  33db                 xor ebx, ebx
// 00862311  8bf8                 mov edi, eax
// 00862313  8b06                 mov eax, dword ptr [esi]
// 00862315  85ff                 test edi, edi
// 00862317  0f9cc3               setl bl
// 0086231a  4b                   dec ebx
// 0086231b  235c240c             and ebx, dword ptr [esp + 0xc]
// 0086231f  85c0                 test eax, eax
// 00862321  7408                 je 0x86232b
// 00862323  8b08                 mov ecx, dword ptr [eax]
// 00862325  8b5108               mov edx, dword ptr [ecx + 8]
// 00862328  50                   push eax
// 00862329  ffd2                 call edx
// 0086232b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086232f  891e                 mov dword ptr [esi], ebx
// 00862331  5b                   pop ebx
// 00862332  eb1d                 jmp 0x862351
// 00862334  8b0e                 mov ecx, dword ptr [esi]
// 00862336  85c9                 test ecx, ecx
// 00862338  7412                 je 0x86234c
// 0086233a  c70600000000         mov dword ptr [esi], 0
// 00862340  8b01                 mov eax, dword ptr [ecx]
// 00862342  51                   push ecx
// 00862343  8b4808               mov ecx, dword ptr [eax + 8]
// 00862346  ffd1                 call ecx
// 00862348  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086234c  bf02400080           mov edi, 0x80004002
// 00862351  85c0                 test eax, eax
// 00862353  7408                 je 0x86235d
// 00862355  8b10                 mov edx, dword ptr [eax]
// 00862357  50                   push eax
// 00862358  8b4208               mov eax, dword ptr [edx + 8]
// 0086235b  ffd0                 call eax
// 0086235d  8bc7                 mov eax, edi
// 0086235f  5f                   pop edi
// 00862360  5e                   pop esi
// 00862361  59                   pop ecx
// 00862362  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
