// roc 2008-06 0077b710  unit: CXTPTabManagerNavigateButton  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b710
//
// 0077b710  56                   push esi
// 0077b711  57                   push edi
// 0077b712  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077b716  8bf1                 mov esi, ecx
// 0077b718  397e04               cmp dword ptr [esi + 4], edi
// 0077b71b  7435                 je 0x77b752
// 0077b71d  8b06                 mov eax, dword ptr [esi]
// 0077b71f  85c0                 test eax, eax
// 0077b721  740f                 je 0x77b732
// 0077b723  50                   push eax
// 0077b724  e82152f2ff           call 0x6a094a
// 0077b729  83c404               add esp, 4
// 0077b72c  c70600000000         mov dword ptr [esi], 0
// 0077b732  33c9                 xor ecx, ecx
// 0077b734  8bc7                 mov eax, edi
// 0077b736  ba08000000           mov edx, 8
// 0077b73b  f7e2                 mul edx
// 0077b73d  0f90c1               seto cl
// 0077b740  f7d9                 neg ecx
// 0077b742  0bc8                 or ecx, eax
// 0077b744  51                   push ecx
// 0077b745  e80c52f2ff           call 0x6a0956
// 0077b74a  83c404               add esp, 4
// 0077b74d  8906                 mov dword ptr [esi], eax
// 0077b74f  897e04               mov dword ptr [esi + 4], edi
// 0077b752  8b06                 mov eax, dword ptr [esi]
// 0077b754  85ff                 test edi, edi
// 0077b756  7e14                 jle 0x77b76c
// 0077b758  c70000000000         mov dword ptr [eax], 0
// 0077b75e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077b761  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0077b764  8b06                 mov eax, dword ptr [esi]
// 0077b766  4a                   dec edx
// 0077b767  895004               mov dword ptr [eax + 4], edx
// 0077b76a  8b06                 mov eax, dword ptr [esi]
// 0077b76c  5f                   pop edi
// 0077b76d  5e                   pop esi
// 0077b76e  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?CreateIndexer@CRowIndexer@CXTPTabManager@@QAEPAUROW_ITEMS@2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
