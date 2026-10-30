// roc 2009-12 00857560  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857560
//
// 00857560  56                   push esi
// 00857561  8bf1                 mov esi, ecx
// 00857563  e8e8f0ffff           call 0x856650
// 00857568  85c0                 test eax, eax
// 0085756a  750c                 jne 0x857578
// 0085756c  8b06                 mov eax, dword ptr [esi]
// 0085756e  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00857574  6aff                 push -1
// 00857576  ffd2                 call edx
// 00857578  8bce                 mov ecx, esi
// 0085757a  e8d1f0ffff           call 0x856650
// 0085757f  85c0                 test eax, eax
// 00857581  7504                 jne 0x857587
// 00857583  5e                   pop esi
// 00857584  c20400               ret 4
// 00857587  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0085758d  85c0                 test eax, eax
// 0085758f  7515                 jne 0x8575a6
// 00857591  e8baf0ffff           call 0x856650
// 00857596  83e801               sub eax, 1
// 00857599  7813                 js 0x8575ae
// 0085759b  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0085759e  7d0e                 jge 0x8575ae
// 008575a0  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008575a3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008575a6  5e                   pop esi
// 008575a7  8bc8                 mov ecx, eax
// 008575a9  e992e4ffff           jmp 0x855a40
// 008575ae  e859c5f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?AddItem@CXTPTabClientWnd@@MAEPAVCXTPTabManagerItem@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp