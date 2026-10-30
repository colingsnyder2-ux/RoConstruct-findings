// roc 2011-06 008f2640  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2640
//
// 008f2640  56                   push esi
// 008f2641  8bf1                 mov esi, ecx
// 008f2643  8b06                 mov eax, dword ptr [esi]
// 008f2645  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f264b  ffd2                 call edx
// 008f264d  85c0                 test eax, eax
// 008f264f  7445                 je 0x8f2696
// 008f2651  8bce                 mov ecx, esi
// 008f2653  e8b8fbffff           call 0x8f2210
// 008f2658  8bf0                 mov esi, eax
// 008f265a  837e0801             cmp dword ptr [esi + 8], 1
// 008f265e  7536                 jne 0x8f2696
// 008f2660  8b06                 mov eax, dword ptr [esi]
// 008f2662  8b5034               mov edx, dword ptr [eax + 0x34]
// 008f2665  57                   push edi
// 008f2666  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f266a  57                   push edi
// 008f266b  8bce                 mov ecx, esi
// 008f266d  ffd2                 call edx
// 008f266f  8b06                 mov eax, dword ptr [esi]
// 008f2671  8b5038               mov edx, dword ptr [eax + 0x38]
// 008f2674  57                   push edi
// 008f2675  8bce                 mov ecx, esi
// 008f2677  ffd2                 call edx
// 008f2679  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f267d  8b06                 mov eax, dword ptr [esi]
// 008f267f  8b5070               mov edx, dword ptr [eax + 0x70]
// 008f2682  51                   push ecx
// 008f2683  8bce                 mov ecx, esi
// 008f2685  ffd2                 call edx
// 008f2687  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f268b  8b06                 mov eax, dword ptr [esi]
// 008f268d  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008f2690  51                   push ecx
// 008f2691  8bce                 mov ecx, esi
// 008f2693  ffd2                 call edx
// 008f2695  5f                   pop edi
// 008f2696  5e                   pop esi
// 008f2697  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetXPFlatColors@CXTButton@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp