// roc 2009-12 0086b6a0  unit: CXTPPropertyGridItemEnum  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b6a0
//
// 0086b6a0  6aff                 push -1
// 0086b6a2  68ccf59500           push 0x95f5cc
// 0086b6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0086b6ad  50                   push eax
// 0086b6ae  a10052b600           mov eax, dword ptr [0xb65200]
// 0086b6b3  33c4                 xor eax, esp
// 0086b6b5  50                   push eax
// 0086b6b6  8d442404             lea eax, [esp + 4]
// 0086b6ba  64a300000000         mov dword ptr fs:[0], eax
// 0086b6c0  83790800             cmp dword ptr [ecx + 8], 0
// 0086b6c4  753a                 jne 0x86b700
// 0086b6c6  b801000000           mov eax, 1
// 0086b6cb  8405b0bab900         test byte ptr [0xb9bab0], al
// 0086b6d1  7518                 jne 0x86b6eb
// 0086b6d3  0905b0bab900         or dword ptr [0xb9bab0], eax
// 0086b6d9  b9d8b9b900           mov ecx, 0xb9b9d8
// 0086b6de  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0086b6e6  e875ffffff           call 0x86b660
// 0086b6eb  b8d8b9b900           mov eax, 0xb9b9d8
// 0086b6f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086b6f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0086b6fb  59                   pop ecx
// 0086b6fc  83c40c               add esp, 0xc
// 0086b6ff  c3                   ret 
// 0086b700  b802000000           mov eax, 2
// 0086b705  8405b0bab900         test byte ptr [0xb9bab0], al
// 0086b70b  7518                 jne 0x86b725
// 0086b70d  0905b0bab900         or dword ptr [0xb9bab0], eax
// 0086b713  b900b9b900           mov ecx, 0xb9b900
// 0086b718  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0086b720  e83bffffff           call 0x86b660
// 0086b725  b800b9b900           mov eax, 0xb9b900
// 0086b72a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086b72e  64890d00000000       mov dword ptr fs:[0], ecx
// 0086b735  59                   pop ecx
// 0086b736  83c40c               add esp, 0xc
// 0086b739  c3                   ret 
// copied from an identical function in another client (function ?GetSharedData@CXTPWinThemeWrapper@@ABEAAVCSharedData@1@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPWinThemeWrapper.cpp