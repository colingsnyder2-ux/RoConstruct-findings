// from server: 100% by auto
// roc 2007-08 00687950  unit: CXTPPropExchangeXMLNode  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00687950
//
// 00687950  56                   push esi
// 00687951  57                   push edi
// 00687952  8bf9                 mov edi, ecx
// 00687954  8b07                 mov eax, dword ptr [edi]
// 00687956  85c0                 test eax, eax
// 00687958  7408                 je 0x687962
// 0068795a  8b08                 mov ecx, dword ptr [eax]
// 0068795c  8b5108               mov edx, dword ptr [ecx + 8]
// 0068795f  50                   push eax
// 00687960  ffd2                 call edx
// 00687962  8b442414             mov eax, dword ptr [esp + 0x14]
// 00687966  a814                 test al, 0x14
// 00687968  7453                 je 0x6879bd
// 0068796a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068796e  8d4c2410             lea ecx, [esp + 0x10]
// 00687972  51                   push ecx
// 00687973  68b44e7800           push 0x784eb4
// 00687978  50                   push eax
// 00687979  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068797d  52                   push edx
// 0068797e  50                   push eax
// 0068797f  ff1518f07700         call dword ptr [0x77f018]
// 00687985  8bf0                 mov esi, eax
// 00687987  85f6                 test esi, esi
// 00687989  7c4f                 jl 0x6879da
// 0068798b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068798f  51                   push ecx
// 00687990  ff15f4ef7700         call dword ptr [0x77eff4]
// 00687996  8bf0                 mov esi, eax
// 00687998  85f6                 test esi, esi
// 0068799a  7c13                 jl 0x6879af
// 0068799c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006879a0  8b10                 mov edx, dword ptr [eax]
// 006879a2  57                   push edi
// 006879a3  6808f57c00           push 0x7cf508
// 006879a8  50                   push eax
// 006879a9  8b02                 mov eax, dword ptr [edx]
// 006879ab  ffd0                 call eax
// 006879ad  8bf0                 mov esi, eax
// 006879af  8b442410             mov eax, dword ptr [esp + 0x10]
// 006879b3  8b08                 mov ecx, dword ptr [eax]
// 006879b5  8b5108               mov edx, dword ptr [ecx + 8]
// 006879b8  50                   push eax
// 006879b9  ffd2                 call edx
// 006879bb  eb19                 jmp 0x6879d6
// 006879bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006879c1  57                   push edi
// 006879c2  6808f57c00           push 0x7cf508
// 006879c7  50                   push eax
// 006879c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006879cc  50                   push eax
// 006879cd  51                   push ecx
// 006879ce  ff1518f07700         call dword ptr [0x77f018]
// 006879d4  8bf0                 mov esi, eax
// 006879d6  85f6                 test esi, esi
// 006879d8  7d06                 jge 0x6879e0
// 006879da  c70700000000         mov dword ptr [edi], 0
// 006879e0  5f                   pop edi
// 006879e1  8bc6                 mov eax, esi
// 006879e3  5e                   pop esi
// 006879e4  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarMemoryDataProvider.cpp (function ?CreateInstance@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@QAEJABU_GUID@@PAUIUnknown@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarMemoryDataProvider.cpp
