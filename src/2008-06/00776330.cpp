// roc 2008-06 00776330  unit: CXTPPropertyGridPaintManager  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776330
//
// 00776330  56                   push esi
// 00776331  8b742408             mov esi, dword ptr [esp + 8]
// 00776335  57                   push edi
// 00776336  8bf9                 mov edi, ecx
// 00776338  85f6                 test esi, esi
// 0077633a  7454                 je 0x776390
// 0077633c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00776340  6a00                 push 0
// 00776342  50                   push eax
// 00776343  8bce                 mov ecx, esi
// 00776345  e8f6b3f9ff           call 0x711740
// 0077634a  85c0                 test eax, eax
// 0077634c  741c                 je 0x77636a
// 0077634e  837860ff             cmp dword ptr [eax + 0x60], -1
// 00776352  7506                 jne 0x77635a
// 00776354  83785cff             cmp dword ptr [eax + 0x5c], -1
// 00776358  7410                 je 0x77636a
// 0077635a  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0077635d  83f9ff               cmp ecx, -1
// 00776360  7544                 jne 0x7763a6
// 00776362  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00776365  5f                   pop edi
// 00776366  5e                   pop esi
// 00776367  c20800               ret 8
// 0077636a  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00776371  7408                 je 0x77637b
// 00776373  8b4774               mov eax, dword ptr [edi + 0x74]
// 00776376  83c064               add eax, 0x64
// 00776379  eb1b                 jmp 0x776396
// 0077637b  8b16                 mov edx, dword ptr [esi]
// 0077637d  8b4258               mov eax, dword ptr [edx + 0x58]
// 00776380  8bce                 mov ecx, esi
// 00776382  ffd0                 call eax
// 00776384  85c0                 test eax, eax
// 00776386  7408                 je 0x776390
// 00776388  8b4774               mov eax, dword ptr [edi + 0x74]
// 0077638b  83c07c               add eax, 0x7c
// 0077638e  eb06                 jmp 0x776396
// 00776390  8b4774               mov eax, dword ptr [edi + 0x74]
// 00776393  83c058               add eax, 0x58
// 00776396  8b4808               mov ecx, dword ptr [eax + 8]
// 00776399  83f9ff               cmp ecx, -1
// 0077639c  7508                 jne 0x7763a6
// 0077639e  8b4004               mov eax, dword ptr [eax + 4]
// 007763a1  5f                   pop edi
// 007763a2  5e                   pop esi
// 007763a3  c20800               ret 8
// 007763a6  5f                   pop edi
// 007763a7  8bc1                 mov eax, ecx
// 007763a9  5e                   pop esi
// 007763aa  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemTextColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
