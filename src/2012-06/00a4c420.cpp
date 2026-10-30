// roc 2012-06 00a4c420  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c420
//
// 00a4c420  56                   push esi
// 00a4c421  57                   push edi
// 00a4c422  8bf9                 mov edi, ecx
// 00a4c424  33f6                 xor esi, esi
// 00a4c426  397774               cmp dword ptr [edi + 0x74], esi
// 00a4c429  7e26                 jle 0xa4c451
// 00a4c42b  eb03                 jmp 0xa4c430
// 00a4c42d  8d4900               lea ecx, [ecx]
// 00a4c430  85f6                 test esi, esi
// 00a4c432  7c2c                 jl 0xa4c460
// 00a4c434  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00a4c437  7d27                 jge 0xa4c460
// 00a4c439  8b4770               mov eax, dword ptr [edi + 0x70]
// 00a4c43c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a4c43f  85c9                 test ecx, ecx
// 00a4c441  7408                 je 0xa4c44b
// 00a4c443  8b11                 mov edx, dword ptr [ecx]
// 00a4c445  8b02                 mov eax, dword ptr [edx]
// 00a4c447  6a01                 push 1
// 00a4c449  ffd0                 call eax
// 00a4c44b  46                   inc esi
// 00a4c44c  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00a4c44f  7cdf                 jl 0xa4c430
// 00a4c451  6aff                 push -1
// 00a4c453  6a00                 push 0
// 00a4c455  8d4f6c               lea ecx, [edi + 0x6c]
// 00a4c458  e803bef4ff           call 0x998260
// 00a4c45d  5f                   pop edi
// 00a4c45e  5e                   pop esi
// 00a4c45f  c3                   ret 
// 00a4c460  e85b5ff3ff           call 0x9823c0
// copied from an identical function in another client (function ?OnRemoved@CXTPTabManagerItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp