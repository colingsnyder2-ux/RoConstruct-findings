// from server: 100% by auto
// roc 2011-06 00847250  unit: CXTTreeBase  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847250
//
// 00847250  53                   push ebx
// 00847251  56                   push esi
// 00847252  8bf1                 mov esi, ecx
// 00847254  57                   push edi
// 00847255  8b7e04               mov edi, dword ptr [esi + 4]
// 00847258  33db                 xor ebx, ebx
// 0084725a  3bfb                 cmp edi, ebx
// 0084725c  7421                 je 0x84727f
// 0084725e  395e08               cmp dword ptr [esi + 8], ebx
// 00847261  761c                 jbe 0x84727f
// 00847263  8b5608               mov edx, dword ptr [esi + 8]
// 00847266  8bcf                 mov ecx, edi
// 00847268  8b01                 mov eax, dword ptr [ecx]
// 0084726a  3bc3                 cmp eax, ebx
// 0084726c  7409                 je 0x847277
// 0084726e  8bff                 mov edi, edi
// 00847270  8b4048               mov eax, dword ptr [eax + 0x48]
// 00847273  3bc3                 cmp eax, ebx
// 00847275  75f9                 jne 0x847270
// 00847277  83c104               add ecx, 4
// 0084727a  83ea01               sub edx, 1
// 0084727d  75e9                 jne 0x847268
// 0084727f  57                   push edi
// 00847280  e87f30fcff           call 0x80a304
// 00847285  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00847288  83c404               add esp, 4
// 0084728b  895e04               mov dword ptr [esi + 4], ebx
// 0084728e  895e0c               mov dword ptr [esi + 0xc], ebx
// 00847291  895e10               mov dword ptr [esi + 0x10], ebx
// 00847294  e82f39fcff           call 0x80abc8
// 00847299  5f                   pop edi
// 0084729a  895e14               mov dword ptr [esi + 0x14], ebx
// 0084729d  5e                   pop esi
// 0084729e  5b                   pop ebx
// 0084729f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?RemoveAll@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
