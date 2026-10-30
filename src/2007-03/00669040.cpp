// roc 2007-03 00669040  unit: seg_00660000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00669040
//
// 00669040  56                   push esi
// 00669041  8b742408             mov esi, dword ptr [esp + 8]
// 00669045  85f6                 test esi, esi
// 00669047  57                   push edi
// 00669048  8bf9                 mov edi, ecx
// 0066904a  7446                 je 0x669092
// 0066904c  8b06                 mov eax, dword ptr [esi]
// 0066904e  8b10                 mov edx, dword ptr [eax]
// 00669050  53                   push ebx
// 00669051  55                   push ebp
// 00669052  8d4c2414             lea ecx, [esp + 0x14]
// 00669056  51                   push ecx
// 00669057  68e8ab7c00           push 0x7cabe8
// 0066905c  56                   push esi
// 0066905d  ffd2                 call edx
// 0066905f  8bd8                 mov ebx, eax
// 00669061  33c0                 xor eax, eax
// 00669063  85db                 test ebx, ebx
// 00669065  0f9cc0               setl al
// 00669068  83e801               sub eax, 1
// 0066906b  23442414             and eax, dword ptr [esp + 0x14]
// 0066906f  8be8                 mov ebp, eax
// 00669071  8b07                 mov eax, dword ptr [edi]
// 00669073  85c0                 test eax, eax
// 00669075  7408                 je 0x66907f
// 00669077  8b08                 mov ecx, dword ptr [eax]
// 00669079  8b5108               mov edx, dword ptr [ecx + 8]
// 0066907c  50                   push eax
// 0066907d  ffd2                 call edx
// 0066907f  892f                 mov dword ptr [edi], ebp
// 00669081  8b06                 mov eax, dword ptr [esi]
// 00669083  8b4808               mov ecx, dword ptr [eax + 8]
// 00669086  56                   push esi
// 00669087  ffd1                 call ecx
// 00669089  5d                   pop ebp
// 0066908a  8bc3                 mov eax, ebx
// 0066908c  5b                   pop ebx
// 0066908d  5f                   pop edi
// 0066908e  5e                   pop esi
// 0066908f  c20400               ret 4
// 00669092  8b07                 mov eax, dword ptr [edi]
// 00669094  85c0                 test eax, eax
// 00669096  740e                 je 0x6690a6
// 00669098  c70700000000         mov dword ptr [edi], 0
// 0066909e  8b08                 mov ecx, dword ptr [eax]
// 006690a0  8b5108               mov edx, dword ptr [ecx + 8]
// 006690a3  50                   push eax
// 006690a4  ffd2                 call edx
// 006690a6  5f                   pop edi
// 006690a7  b802400080           mov eax, 0x80004002
// 006690ac  5e                   pop esi
// 006690ad  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
