// roc 2012-06 00a4be30  unit: CXTPTabManagerNavigateButton  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4be30
//
// 00a4be30  56                   push esi
// 00a4be31  57                   push edi
// 00a4be32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a4be36  8bf1                 mov esi, ecx
// 00a4be38  397e04               cmp dword ptr [esi + 4], edi
// 00a4be3b  7435                 je 0xa4be72
// 00a4be3d  8b06                 mov eax, dword ptr [esi]
// 00a4be3f  85c0                 test eax, eax
// 00a4be41  740f                 je 0xa4be52
// 00a4be43  50                   push eax
// 00a4be44  e87165f3ff           call 0x9823ba
// 00a4be49  83c404               add esp, 4
// 00a4be4c  c70600000000         mov dword ptr [esi], 0
// 00a4be52  33c9                 xor ecx, ecx
// 00a4be54  8bc7                 mov eax, edi
// 00a4be56  ba08000000           mov edx, 8
// 00a4be5b  f7e2                 mul edx
// 00a4be5d  0f90c1               seto cl
// 00a4be60  f7d9                 neg ecx
// 00a4be62  0bc8                 or ecx, eax
// 00a4be64  51                   push ecx
// 00a4be65  e88665f3ff           call 0x9823f0
// 00a4be6a  83c404               add esp, 4
// 00a4be6d  8906                 mov dword ptr [esi], eax
// 00a4be6f  897e04               mov dword ptr [esi + 4], edi
// 00a4be72  8b06                 mov eax, dword ptr [esi]
// 00a4be74  85ff                 test edi, edi
// 00a4be76  7e14                 jle 0xa4be8c
// 00a4be78  c70000000000         mov dword ptr [eax], 0
// 00a4be7e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a4be81  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00a4be84  8b06                 mov eax, dword ptr [esi]
// 00a4be86  4a                   dec edx
// 00a4be87  895004               mov dword ptr [eax + 4], edx
// 00a4be8a  8b06                 mov eax, dword ptr [esi]
// 00a4be8c  5f                   pop edi
// 00a4be8d  5e                   pop esi
// 00a4be8e  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?CreateIndexer@CRowIndexer@CXTPTabManager@@QAEPAUROW_ITEMS@2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
