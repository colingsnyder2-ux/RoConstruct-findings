// from server: 100% by auto
// roc 2011-06 008621d0  unit: CXTPPropExchangeXMLNode  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008621d0
//
// 008621d0  56                   push esi
// 008621d1  57                   push edi
// 008621d2  8bf9                 mov edi, ecx
// 008621d4  8b07                 mov eax, dword ptr [edi]
// 008621d6  85c0                 test eax, eax
// 008621d8  7408                 je 0x8621e2
// 008621da  8b08                 mov ecx, dword ptr [eax]
// 008621dc  8b5108               mov edx, dword ptr [ecx + 8]
// 008621df  50                   push eax
// 008621e0  ffd2                 call edx
// 008621e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008621e6  a814                 test al, 0x14
// 008621e8  7453                 je 0x86223d
// 008621ea  8b542410             mov edx, dword ptr [esp + 0x10]
// 008621ee  8d4c2410             lea ecx, [esp + 0x10]
// 008621f2  51                   push ecx
// 008621f3  68e0bca500           push 0xa5bce0
// 008621f8  50                   push eax
// 008621f9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008621fd  52                   push edx
// 008621fe  50                   push eax
// 008621ff  ff158030a400         call dword ptr [0xa43080]
// 00862205  8bf0                 mov esi, eax
// 00862207  85f6                 test esi, esi
// 00862209  7c4f                 jl 0x86225a
// 0086220b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086220f  51                   push ecx
// 00862210  ff15b430a400         call dword ptr [0xa430b4]
// 00862216  8bf0                 mov esi, eax
// 00862218  85f6                 test esi, esi
// 0086221a  7c13                 jl 0x86222f
// 0086221c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00862220  8b10                 mov edx, dword ptr [eax]
// 00862222  57                   push edi
// 00862223  688ca9ac00           push 0xaca98c
// 00862228  50                   push eax
// 00862229  8b02                 mov eax, dword ptr [edx]
// 0086222b  ffd0                 call eax
// 0086222d  8bf0                 mov esi, eax
// 0086222f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00862233  8b08                 mov ecx, dword ptr [eax]
// 00862235  8b5108               mov edx, dword ptr [ecx + 8]
// 00862238  50                   push eax
// 00862239  ffd2                 call edx
// 0086223b  eb19                 jmp 0x862256
// 0086223d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00862241  57                   push edi
// 00862242  688ca9ac00           push 0xaca98c
// 00862247  50                   push eax
// 00862248  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086224c  50                   push eax
// 0086224d  51                   push ecx
// 0086224e  ff158030a400         call dword ptr [0xa43080]
// 00862254  8bf0                 mov esi, eax
// 00862256  85f6                 test esi, esi
// 00862258  7d06                 jge 0x862260
// 0086225a  c70700000000         mov dword ptr [edi], 0
// 00862260  5f                   pop edi
// 00862261  8bc6                 mov eax, esi
// 00862263  5e                   pop esi
// 00862264  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarMemoryDataProvider.cpp (function ?CreateInstance@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEJABU_GUID@@PAUIUnknown@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMemoryDataProvider.cpp
