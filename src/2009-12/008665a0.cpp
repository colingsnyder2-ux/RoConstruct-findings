// roc 2009-12 008665a0  unit: CXTPPropertyGridItemConstraints  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008665a0
//
// 008665a0  56                   push esi
// 008665a1  57                   push edi
// 008665a2  8bf9                 mov edi, ecx
// 008665a4  33f6                 xor esi, esi
// 008665a6  397728               cmp dword ptr [edi + 0x28], esi
// 008665a9  7e1f                 jle 0x8665ca
// 008665ab  eb03                 jmp 0x8665b0
// 008665ad  8d4900               lea ecx, [ecx]
// 008665b0  85f6                 test esi, esi
// 008665b2  7c37                 jl 0x8665eb
// 008665b4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008665b7  7d32                 jge 0x8665eb
// 008665b9  8b4724               mov eax, dword ptr [edi + 0x24]
// 008665bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008665bf  e818d8f8ff           call 0x7f3ddc
// 008665c4  46                   inc esi
// 008665c5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008665c8  7ce6                 jl 0x8665b0
// 008665ca  6aff                 push -1
// 008665cc  6a00                 push 0
// 008665ce  8d4f20               lea ecx, [edi + 0x20]
// 008665d1  e8caedfeff           call 0x8553a0
// 008665d6  837f3800             cmp dword ptr [edi + 0x38], 0
// 008665da  7414                 je 0x8665f0
// 008665dc  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008665df  8b11                 mov edx, dword ptr [ecx]
// 008665e1  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008665e7  5f                   pop edi
// 008665e8  5e                   pop esi
// 008665e9  ffe0                 jmp eax
// 008665eb  e81cd5f8ff           call 0x7f3b0c
// 008665f0  5f                   pop edi
// 008665f1  5e                   pop esi
// 008665f2  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridItemConstraints@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp