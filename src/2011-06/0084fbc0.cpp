// roc 2011-06 0084fbc0  unit: CXTPDockingPaneManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084fbc0
//
// 0084fbc0  56                   push esi
// 0084fbc1  8bf1                 mov esi, ecx
// 0084fbc3  8b4608               mov eax, dword ptr [esi + 8]
// 0084fbc6  6a00                 push 0
// 0084fbc8  50                   push eax
// 0084fbc9  e802f5ffff           call 0x84f0d0
// 0084fbce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084fbd2  8b11                 mov edx, dword ptr [ecx]
// 0084fbd4  895008               mov dword ptr [eax + 8], edx
// 0084fbd7  8b5104               mov edx, dword ptr [ecx + 4]
// 0084fbda  89500c               mov dword ptr [eax + 0xc], edx
// 0084fbdd  8b5108               mov edx, dword ptr [ecx + 8]
// 0084fbe0  895010               mov dword ptr [eax + 0x10], edx
// 0084fbe3  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0084fbe6  894814               mov dword ptr [eax + 0x14], ecx
// 0084fbe9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084fbec  85c9                 test ecx, ecx
// 0084fbee  7409                 je 0x84fbf9
// 0084fbf0  8901                 mov dword ptr [ecx], eax
// 0084fbf2  894608               mov dword ptr [esi + 8], eax
// 0084fbf5  5e                   pop esi
// 0084fbf6  c20400               ret 4
// 0084fbf9  894604               mov dword ptr [esi + 4], eax
// 0084fbfc  894608               mov dword ptr [esi + 8], eax
// 0084fbff  5e                   pop esi
// 0084fc00  c20400               ret 4
// library xtp-15.2.1/Source\Controls\List\XTPListBase.cpp (function ?AddTail@?$CList@UROWCOLOR@CXTPListBase@@AAU12@@@QAEPAU__POSITION@@AAUROWCOLOR@CXTPListBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/List/XTPListBase.cpp
