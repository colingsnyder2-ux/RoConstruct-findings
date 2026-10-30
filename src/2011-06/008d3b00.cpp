// from server: 100% by auto
// roc 2011-06 008d3b00  unit: CXTPTabManagerNavigateButton  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3b00
//
// 008d3b00  56                   push esi
// 008d3b01  57                   push edi
// 008d3b02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008d3b06  8bf1                 mov esi, ecx
// 008d3b08  397e04               cmp dword ptr [esi + 4], edi
// 008d3b0b  7435                 je 0x8d3b42
// 008d3b0d  8b06                 mov eax, dword ptr [esi]
// 008d3b0f  85c0                 test eax, eax
// 008d3b11  740f                 je 0x8d3b22
// 008d3b13  50                   push eax
// 008d3b14  e8eb67f3ff           call 0x80a304
// 008d3b19  83c404               add esp, 4
// 008d3b1c  c70600000000         mov dword ptr [esi], 0
// 008d3b22  33c9                 xor ecx, ecx
// 008d3b24  8bc7                 mov eax, edi
// 008d3b26  ba08000000           mov edx, 8
// 008d3b2b  f7e2                 mul edx
// 008d3b2d  0f90c1               seto cl
// 008d3b30  f7d9                 neg ecx
// 008d3b32  0bc8                 or ecx, eax
// 008d3b34  51                   push ecx
// 008d3b35  e80668f3ff           call 0x80a340
// 008d3b3a  83c404               add esp, 4
// 008d3b3d  8906                 mov dword ptr [esi], eax
// 008d3b3f  897e04               mov dword ptr [esi + 4], edi
// 008d3b42  8b06                 mov eax, dword ptr [esi]
// 008d3b44  85ff                 test edi, edi
// 008d3b46  7e14                 jle 0x8d3b5c
// 008d3b48  c70000000000         mov dword ptr [eax], 0
// 008d3b4e  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d3b51  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 008d3b54  8b06                 mov eax, dword ptr [esi]
// 008d3b56  4a                   dec edx
// 008d3b57  895004               mov dword ptr [eax + 4], edx
// 008d3b5a  8b06                 mov eax, dword ptr [esi]
// 008d3b5c  5f                   pop edi
// 008d3b5d  5e                   pop esi
// 008d3b5e  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?CreateIndexer@CRowIndexer@CXTPTabManager@@QAEPAUROW_ITEMS@2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
