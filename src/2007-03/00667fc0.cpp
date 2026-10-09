// roc 2007-03 00667fc0  unit: seg_00660000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00667fc0
//
// 00667fc0  56                   push esi
// 00667fc1  8b742408             mov esi, dword ptr [esp + 8]
// 00667fc5  85f6                 test esi, esi
// 00667fc7  57                   push edi
// 00667fc8  8bf9                 mov edi, ecx
// 00667fca  7446                 je 0x668012
// 00667fcc  8b06                 mov eax, dword ptr [esi]
// 00667fce  8b10                 mov edx, dword ptr [eax]
// 00667fd0  53                   push ebx
// 00667fd1  55                   push ebp
// 00667fd2  8d4c2414             lea ecx, [esp + 0x14]
// 00667fd6  51                   push ecx
// 00667fd7  68d8ab7c00           push 0x7cabd8
// 00667fdc  56                   push esi
// 00667fdd  ffd2                 call edx
// 00667fdf  8bd8                 mov ebx, eax
// 00667fe1  33c0                 xor eax, eax
// 00667fe3  85db                 test ebx, ebx
// 00667fe5  0f9cc0               setl al
// 00667fe8  83e801               sub eax, 1
// 00667feb  23442414             and eax, dword ptr [esp + 0x14]
// 00667fef  8be8                 mov ebp, eax
// 00667ff1  8b07                 mov eax, dword ptr [edi]
// 00667ff3  85c0                 test eax, eax
// 00667ff5  7408                 je 0x667fff
// 00667ff7  8b08                 mov ecx, dword ptr [eax]
// 00667ff9  8b5108               mov edx, dword ptr [ecx + 8]
// 00667ffc  50                   push eax
// 00667ffd  ffd2                 call edx
// 00667fff  892f                 mov dword ptr [edi], ebp
// 00668001  8b06                 mov eax, dword ptr [esi]
// 00668003  8b4808               mov ecx, dword ptr [eax + 8]
// 00668006  56                   push esi
// 00668007  ffd1                 call ecx
// 00668009  5d                   pop ebp
// 0066800a  8bc3                 mov eax, ebx
// 0066800c  5b                   pop ebx
// 0066800d  5f                   pop edi
// 0066800e  5e                   pop esi
// 0066800f  c20400               ret 4
// 00668012  8b07                 mov eax, dword ptr [edi]
// 00668014  85c0                 test eax, eax
// 00668016  740e                 je 0x668026
// 00668018  c70700000000         mov dword ptr [edi], 0
// 0066801e  8b08                 mov ecx, dword ptr [eax]
// 00668020  8b5108               mov edx, dword ptr [ecx + 8]
// 00668023  50                   push eax
// 00668024  ffd2                 call edx
// 00668026  5f                   pop edi
// 00668027  b802400080           mov eax, 0x80004002
// 0066802c  5e                   pop esi
// 0066802d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ??$_QueryInterface@V?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEJV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
