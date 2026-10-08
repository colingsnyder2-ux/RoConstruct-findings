// from server: 100% by auto
// roc 2007-08 00716520  unit: CXTPRibbonTab  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716520
//
// 00716520  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00716526  56                   push esi
// 00716527  8b7128               mov esi, dword ptr [ecx + 0x28]
// 0071652a  33c0                 xor eax, eax
// 0071652c  85f6                 test esi, esi
// 0071652e  57                   push edi
// 0071652f  7e22                 jle 0x716553
// 00716531  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00716535  85c0                 test eax, eax
// 00716537  7c0c                 jl 0x716545
// 00716539  3bc6                 cmp eax, esi
// 0071653b  7d08                 jge 0x716545
// 0071653d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00716540  8b1482               mov edx, dword ptr [edx + eax*4]
// 00716543  eb02                 jmp 0x716547
// 00716545  33d2                 xor edx, edx
// 00716547  397a60               cmp dword ptr [edx + 0x60], edi
// 0071654a  740e                 je 0x71655a
// 0071654c  83c001               add eax, 1
// 0071654f  3bc6                 cmp eax, esi
// 00716551  7ce2                 jl 0x716535
// 00716553  5f                   pop edi
// 00716554  33c0                 xor eax, eax
// 00716556  5e                   pop esi
// 00716557  c20400               ret 4
// 0071655a  85c0                 test eax, eax
// 0071655c  7cf5                 jl 0x716553
// 0071655e  3bc6                 cmp eax, esi
// 00716560  7df1                 jge 0x716553
// 00716562  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00716565  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00716568  5f                   pop edi
// 00716569  5e                   pop esi
// 0071656a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTab.cpp
