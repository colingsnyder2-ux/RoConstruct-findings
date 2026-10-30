// roc 2007-03 006e5940  unit: seg_006e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e5940
//
// 006e5940  56                   push esi
// 006e5941  57                   push edi
// 006e5942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e5946  8bf1                 mov esi, ecx
// 006e5948  8b06                 mov eax, dword ptr [esi]
// 006e594a  8b5064               mov edx, dword ptr [eax + 0x64]
// 006e594d  57                   push edi
// 006e594e  ffd2                 call edx
// 006e5950  85c0                 test eax, eax
// 006e5952  740e                 je 0x6e5962
// 006e5954  85ff                 test edi, edi
// 006e5956  740a                 je 0x6e5962
// 006e5958  8b06                 mov eax, dword ptr [esi]
// 006e595a  8b5060               mov edx, dword ptr [eax + 0x60]
// 006e595d  57                   push edi
// 006e595e  8bce                 mov ecx, esi
// 006e5960  ffd2                 call edx
// 006e5962  5f                   pop edi
// 006e5963  5e                   pop esi
// 006e5964  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
