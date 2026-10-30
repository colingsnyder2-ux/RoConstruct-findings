// roc 2009-12 00865710  unit: CXTPPropertyGridItem  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865710
//
// 00865710  6aff                 push -1
// 00865712  686eee9500           push 0x95ee6e
// 00865717  64a100000000         mov eax, dword ptr fs:[0]
// 0086571d  50                   push eax
// 0086571e  a10052b600           mov eax, dword ptr [0xb65200]
// 00865723  33c4                 xor eax, esp
// 00865725  50                   push eax
// 00865726  8d442404             lea eax, [esp + 4]
// 0086572a  64a300000000         mov dword ptr fs:[0], eax
// 00865730  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00865736  85c0                 test eax, eax
// 00865738  741c                 je 0x865756
// 0086573a  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00865740  8b8060010000         mov eax, dword ptr [eax + 0x160]
// 00865746  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086574a  64890d00000000       mov dword ptr fs:[0], ecx
// 00865751  59                   pop ecx
// 00865752  83c40c               add esp, 0xc
// 00865755  c3                   ret 
// 00865756  b801000000           mov eax, 1
// 0086575b  840594b8b900         test byte ptr [0xb9b894], al
// 00865761  7525                 jne 0x865788
// 00865763  090594b8b900         or dword ptr [0xb9b894], eax
// 00865769  b9d8b7b900           mov ecx, 0xb9b7d8
// 0086576e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00865776  e8f5210600           call 0x8c7970
// 0086577b  68f0a69800           push 0x98a6f0
// 00865780  e8a4f1f8ff           call 0x7f4929
// 00865785  83c404               add esp, 4
// 00865788  b8d8b7b900           mov eax, 0xb9b7d8
// 0086578d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00865791  64890d00000000       mov dword ptr fs:[0], ecx
// 00865798  59                   pop ecx
// 00865799  83c40c               add esp, 0xc
// 0086579c  c3                   ret 
// copied from an identical function in another client (function ?GetInplaceEdit@CXTPPropertyGridItem@@UAEAAVCXTPPropertyGridInplaceEdit@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp