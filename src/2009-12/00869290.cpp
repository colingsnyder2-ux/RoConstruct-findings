// roc 2009-12 00869290  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869290
//
// 00869290  56                   push esi
// 00869291  57                   push edi
// 00869292  8bf9                 mov edi, ecx
// 00869294  e8a7faffff           call 0x868d40
// 00869299  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0086929f  8bf0                 mov esi, eax
// 008692a1  85c9                 test ecx, ecx
// 008692a3  740a                 je 0x8692af
// 008692a5  8b01                 mov eax, dword ptr [ecx]
// 008692a7  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 008692ad  ffd2                 call edx
// 008692af  85f6                 test esi, esi
// 008692b1  740c                 je 0x8692bf
// 008692b3  8b06                 mov eax, dword ptr [esi]
// 008692b5  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 008692bb  8bce                 mov ecx, esi
// 008692bd  ffd2                 call edx
// 008692bf  89b7e0000000         mov dword ptr [edi + 0xe0], esi
// 008692c5  85f6                 test esi, esi
// 008692c7  7411                 je 0x8692da
// 008692c9  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 008692cf  8b01                 mov eax, dword ptr [ecx]
// 008692d1  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008692d7  56                   push esi
// 008692d8  ffd2                 call edx
// 008692da  5f                   pop edi
// 008692db  5e                   pop esi
// 008692dc  c3                   ret 
// copied from an identical function in another client (function ?OnSelectionChanged@CXTPPropertyGridView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp