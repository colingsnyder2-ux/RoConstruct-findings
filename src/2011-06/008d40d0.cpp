// roc 2011-06 008d40d0  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d40d0
//
// 008d40d0  56                   push esi
// 008d40d1  57                   push edi
// 008d40d2  8bf9                 mov edi, ecx
// 008d40d4  33f6                 xor esi, esi
// 008d40d6  397774               cmp dword ptr [edi + 0x74], esi
// 008d40d9  7e26                 jle 0x8d4101
// 008d40db  eb03                 jmp 0x8d40e0
// 008d40dd  8d4900               lea ecx, [ecx]
// 008d40e0  85f6                 test esi, esi
// 008d40e2  7c2c                 jl 0x8d4110
// 008d40e4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008d40e7  7d27                 jge 0x8d4110
// 008d40e9  8b4770               mov eax, dword ptr [edi + 0x70]
// 008d40ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008d40ef  85c9                 test ecx, ecx
// 008d40f1  7408                 je 0x8d40fb
// 008d40f3  8b11                 mov edx, dword ptr [ecx]
// 008d40f5  8b02                 mov eax, dword ptr [edx]
// 008d40f7  6a01                 push 1
// 008d40f9  ffd0                 call eax
// 008d40fb  46                   inc esi
// 008d40fc  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008d40ff  7cdf                 jl 0x8d40e0
// 008d4101  6aff                 push -1
// 008d4103  6a00                 push 0
// 008d4105  8d4f6c               lea ecx, [edi + 0x6c]
// 008d4108  e833aaf6ff           call 0x83eb40
// 008d410d  5f                   pop edi
// 008d410e  5e                   pop esi
// 008d410f  c3                   ret 
// 008d4110  e8f561f3ff           call 0x80a30a
// copied from an identical function in another client (function ?OnRemoved@CXTPTabManagerItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp