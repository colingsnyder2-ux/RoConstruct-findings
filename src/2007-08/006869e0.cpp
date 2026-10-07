// roc 2007-08 006869e0  unit: CXTPPropExchangeArchive  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006869e0
//
// 006869e0  56                   push esi
// 006869e1  8b742408             mov esi, dword ptr [esp + 8]
// 006869e5  85f6                 test esi, esi
// 006869e7  57                   push edi
// 006869e8  8bf9                 mov edi, ecx
// 006869ea  7446                 je 0x686a32
// 006869ec  8b06                 mov eax, dword ptr [esi]
// 006869ee  8b10                 mov edx, dword ptr [eax]
// 006869f0  53                   push ebx
// 006869f1  55                   push ebp
// 006869f2  8d4c2414             lea ecx, [esp + 0x14]
// 006869f6  51                   push ecx
// 006869f7  6808f57c00           push 0x7cf508
// 006869fc  56                   push esi
// 006869fd  ffd2                 call edx
// 006869ff  8bd8                 mov ebx, eax
// 00686a01  33c0                 xor eax, eax
// 00686a03  85db                 test ebx, ebx
// 00686a05  0f9cc0               setl al
// 00686a08  83e801               sub eax, 1
// 00686a0b  23442414             and eax, dword ptr [esp + 0x14]
// 00686a0f  8be8                 mov ebp, eax
// 00686a11  8b07                 mov eax, dword ptr [edi]
// 00686a13  85c0                 test eax, eax
// 00686a15  7408                 je 0x686a1f
// 00686a17  8b08                 mov ecx, dword ptr [eax]
// 00686a19  8b5108               mov edx, dword ptr [ecx + 8]
// 00686a1c  50                   push eax
// 00686a1d  ffd2                 call edx
// 00686a1f  892f                 mov dword ptr [edi], ebp
// 00686a21  8b06                 mov eax, dword ptr [esi]
// 00686a23  8b4808               mov ecx, dword ptr [eax + 8]
// 00686a26  56                   push esi
// 00686a27  ffd1                 call ecx
// 00686a29  5d                   pop ebp
// 00686a2a  8bc3                 mov eax, ebx
// 00686a2c  5b                   pop ebx
// 00686a2d  5f                   pop edi
// 00686a2e  5e                   pop esi
// 00686a2f  c20400               ret 4
// 00686a32  8b07                 mov eax, dword ptr [edi]
// 00686a34  85c0                 test eax, eax
// 00686a36  740e                 je 0x686a46
// 00686a38  c70700000000         mov dword ptr [edi], 0
// 00686a3e  8b08                 mov ecx, dword ptr [eax]
// 00686a40  8b5108               mov edx, dword ptr [ecx + 8]
// 00686a43  50                   push eax
// 00686a44  ffd2                 call edx
// 00686a46  5f                   pop edi
// 00686a47  b802400080           mov eax, 0x80004002
// 00686a4c  5e                   pop esi
// 00686a4d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
