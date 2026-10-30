// roc 2010-06 008831e0  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008831e0
//
// 008831e0  56                   push esi
// 008831e1  57                   push edi
// 008831e2  8bf9                 mov edi, ecx
// 008831e4  33f6                 xor esi, esi
// 008831e6  397774               cmp dword ptr [edi + 0x74], esi
// 008831e9  7e26                 jle 0x883211
// 008831eb  eb03                 jmp 0x8831f0
// 008831ed  8d4900               lea ecx, [ecx]
// 008831f0  85f6                 test esi, esi
// 008831f2  7c2c                 jl 0x883220
// 008831f4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008831f7  7d27                 jge 0x883220
// 008831f9  8b4770               mov eax, dword ptr [edi + 0x70]
// 008831fc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008831ff  85c9                 test ecx, ecx
// 00883201  7408                 je 0x88320b
// 00883203  8b11                 mov edx, dword ptr [ecx]
// 00883205  8b02                 mov eax, dword ptr [edx]
// 00883207  6a01                 push 1
// 00883209  ffd0                 call eax
// 0088320b  46                   inc esi
// 0088320c  3b7774               cmp esi, dword ptr [edi + 0x74]
// 0088320f  7cdf                 jl 0x8831f0
// 00883211  6aff                 push -1
// 00883213  6a00                 push 0
// 00883215  8d4f6c               lea ecx, [edi + 0x6c]
// 00883218  e8e3e0f5ff           call 0x7e1300
// 0088321d  5f                   pop edi
// 0088321e  5e                   pop esi
// 0088321f  c3                   ret 
// 00883220  e8274af2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnRemoved@CXTPTabManagerItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp