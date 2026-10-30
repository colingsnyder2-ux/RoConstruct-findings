// roc 2011-06 008de500  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de500
//
// 008de500  56                   push esi
// 008de501  57                   push edi
// 008de502  8bf9                 mov edi, ecx
// 008de504  33f6                 xor esi, esi
// 008de506  397728               cmp dword ptr [edi + 0x28], esi
// 008de509  7e1f                 jle 0x8de52a
// 008de50b  eb03                 jmp 0x8de510
// 008de50d  8d4900               lea ecx, [ecx]
// 008de510  85f6                 test esi, esi
// 008de512  7c25                 jl 0x8de539
// 008de514  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008de517  7d20                 jge 0x8de539
// 008de519  8b4724               mov eax, dword ptr [edi + 0x24]
// 008de51c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008de51f  e8b6c0f2ff           call 0x80a5da
// 008de524  46                   inc esi
// 008de525  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008de528  7ce6                 jl 0x8de510
// 008de52a  6aff                 push -1
// 008de52c  6a00                 push 0
// 008de52e  8d4f20               lea ecx, [edi + 0x20]
// 008de531  e80a06f6ff           call 0x83eb40
// 008de536  5f                   pop edi
// 008de537  5e                   pop esi
// 008de538  c3                   ret 
// 008de539  e8ccbdf2ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp