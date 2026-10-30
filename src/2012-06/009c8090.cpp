// from server: 100% by auto
// roc 2012-06 009c8090  unit: CXTPDockingPaneManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8090
//
// 009c8090  56                   push esi
// 009c8091  8bf1                 mov esi, ecx
// 009c8093  8b4608               mov eax, dword ptr [esi + 8]
// 009c8096  6a00                 push 0
// 009c8098  50                   push eax
// 009c8099  e802f5ffff           call 0x9c75a0
// 009c809e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009c80a2  8b11                 mov edx, dword ptr [ecx]
// 009c80a4  895008               mov dword ptr [eax + 8], edx
// 009c80a7  8b5104               mov edx, dword ptr [ecx + 4]
// 009c80aa  89500c               mov dword ptr [eax + 0xc], edx
// 009c80ad  8b5108               mov edx, dword ptr [ecx + 8]
// 009c80b0  895010               mov dword ptr [eax + 0x10], edx
// 009c80b3  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 009c80b6  894814               mov dword ptr [eax + 0x14], ecx
// 009c80b9  8b4e08               mov ecx, dword ptr [esi + 8]
// 009c80bc  85c9                 test ecx, ecx
// 009c80be  7409                 je 0x9c80c9
// 009c80c0  8901                 mov dword ptr [ecx], eax
// 009c80c2  894608               mov dword ptr [esi + 8], eax
// 009c80c5  5e                   pop esi
// 009c80c6  c20400               ret 4
// 009c80c9  894604               mov dword ptr [esi + 4], eax
// 009c80cc  894608               mov dword ptr [esi + 8], eax
// 009c80cf  5e                   pop esi
// 009c80d0  c20400               ret 4
// library xtp-15.2.1/Source\Controls\List\XTPListBase.cpp (function ?AddTail@?$CList@UROWCOLOR@CXTPListBase@@AAU12@@@QAEPAU__POSITION@@AAUROWCOLOR@CXTPListBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/List/XTPListBase.cpp
