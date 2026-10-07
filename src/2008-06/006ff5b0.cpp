// roc 2008-06 006ff5b0  unit: CXTPPropExchangeXMLNode  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ff5b0
//
// 006ff5b0  56                   push esi
// 006ff5b1  57                   push edi
// 006ff5b2  8bf9                 mov edi, ecx
// 006ff5b4  8b07                 mov eax, dword ptr [edi]
// 006ff5b6  85c0                 test eax, eax
// 006ff5b8  7408                 je 0x6ff5c2
// 006ff5ba  8b08                 mov ecx, dword ptr [eax]
// 006ff5bc  8b5108               mov edx, dword ptr [ecx + 8]
// 006ff5bf  50                   push eax
// 006ff5c0  ffd2                 call edx
// 006ff5c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ff5c6  a814                 test al, 0x14
// 006ff5c8  7453                 je 0x6ff61d
// 006ff5ca  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ff5ce  8d4c2410             lea ecx, [esp + 0x10]
// 006ff5d2  51                   push ecx
// 006ff5d3  6854b18000           push 0x80b154
// 006ff5d8  50                   push eax
// 006ff5d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ff5dd  52                   push edx
// 006ff5de  50                   push eax
// 006ff5df  ff1518418000         call dword ptr [0x804118]
// 006ff5e5  8bf0                 mov esi, eax
// 006ff5e7  85f6                 test esi, esi
// 006ff5e9  7c4f                 jl 0x6ff63a
// 006ff5eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ff5ef  51                   push ecx
// 006ff5f0  ff1500418000         call dword ptr [0x804100]
// 006ff5f6  8bf0                 mov esi, eax
// 006ff5f8  85f6                 test esi, esi
// 006ff5fa  7c13                 jl 0x6ff60f
// 006ff5fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ff600  8b10                 mov edx, dword ptr [eax]
// 006ff602  57                   push edi
// 006ff603  6830af8500           push 0x85af30
// 006ff608  50                   push eax
// 006ff609  8b02                 mov eax, dword ptr [edx]
// 006ff60b  ffd0                 call eax
// 006ff60d  8bf0                 mov esi, eax
// 006ff60f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ff613  8b08                 mov ecx, dword ptr [eax]
// 006ff615  8b5108               mov edx, dword ptr [ecx + 8]
// 006ff618  50                   push eax
// 006ff619  ffd2                 call edx
// 006ff61b  eb19                 jmp 0x6ff636
// 006ff61d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ff621  57                   push edi
// 006ff622  6830af8500           push 0x85af30
// 006ff627  50                   push eax
// 006ff628  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ff62c  50                   push eax
// 006ff62d  51                   push ecx
// 006ff62e  ff1518418000         call dword ptr [0x804118]
// 006ff634  8bf0                 mov esi, eax
// 006ff636  85f6                 test esi, esi
// 006ff638  7d06                 jge 0x6ff640
// 006ff63a  c70700000000         mov dword ptr [edi], 0
// 006ff640  5f                   pop edi
// 006ff641  8bc6                 mov eax, esi
// 006ff643  5e                   pop esi
// 006ff644  c20c00               ret 0xc
// library xtp-11.2.2/Source\Calendar\XTPCalendarMemoryDataProvider.cpp (function ?CreateInstance@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEJABU_GUID@@PAUIUnknown@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarMemoryDataProvider.cpp
