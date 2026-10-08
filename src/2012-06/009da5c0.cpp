// from server: 100% by auto
// roc 2012-06 009da5c0  unit: CXTPPropExchangeXMLNode  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009da5c0
//
// 009da5c0  56                   push esi
// 009da5c1  57                   push edi
// 009da5c2  8bf9                 mov edi, ecx
// 009da5c4  8b07                 mov eax, dword ptr [edi]
// 009da5c6  85c0                 test eax, eax
// 009da5c8  7408                 je 0x9da5d2
// 009da5ca  8b08                 mov ecx, dword ptr [eax]
// 009da5cc  8b5108               mov edx, dword ptr [ecx + 8]
// 009da5cf  50                   push eax
// 009da5d0  ffd2                 call edx
// 009da5d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 009da5d6  a814                 test al, 0x14
// 009da5d8  7453                 je 0x9da62d
// 009da5da  8b542410             mov edx, dword ptr [esp + 0x10]
// 009da5de  8d4c2410             lea ecx, [esp + 0x10]
// 009da5e2  51                   push ecx
// 009da5e3  68503ab400           push 0xb43a50
// 009da5e8  50                   push eax
// 009da5e9  8b442418             mov eax, dword ptr [esp + 0x18]
// 009da5ed  52                   push edx
// 009da5ee  50                   push eax
// 009da5ef  ff151851b200         call dword ptr [0xb25118]
// 009da5f5  8bf0                 mov esi, eax
// 009da5f7  85f6                 test esi, esi
// 009da5f9  7c4f                 jl 0x9da64a
// 009da5fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009da5ff  51                   push ecx
// 009da600  ff152451b200         call dword ptr [0xb25124]
// 009da606  8bf0                 mov esi, eax
// 009da608  85f6                 test esi, esi
// 009da60a  7c13                 jl 0x9da61f
// 009da60c  8b442410             mov eax, dword ptr [esp + 0x10]
// 009da610  8b10                 mov edx, dword ptr [eax]
// 009da612  57                   push edi
// 009da613  688460c100           push 0xc16084
// 009da618  50                   push eax
// 009da619  8b02                 mov eax, dword ptr [edx]
// 009da61b  ffd0                 call eax
// 009da61d  8bf0                 mov esi, eax
// 009da61f  8b442410             mov eax, dword ptr [esp + 0x10]
// 009da623  8b08                 mov ecx, dword ptr [eax]
// 009da625  8b5108               mov edx, dword ptr [ecx + 8]
// 009da628  50                   push eax
// 009da629  ffd2                 call edx
// 009da62b  eb19                 jmp 0x9da646
// 009da62d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009da631  57                   push edi
// 009da632  688460c100           push 0xc16084
// 009da637  50                   push eax
// 009da638  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009da63c  50                   push eax
// 009da63d  51                   push ecx
// 009da63e  ff151851b200         call dword ptr [0xb25118]
// 009da644  8bf0                 mov esi, eax
// 009da646  85f6                 test esi, esi
// 009da648  7d06                 jge 0x9da650
// 009da64a  c70700000000         mov dword ptr [edi], 0
// 009da650  5f                   pop edi
// 009da651  8bc6                 mov eax, esi
// 009da653  5e                   pop esi
// 009da654  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarMemoryDataProvider.cpp (function ?CreateInstance@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEJABU_GUID@@PAUIUnknown@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMemoryDataProvider.cpp
