// roc 2012-06 00a6a9a0  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a9a0
//
// 00a6a9a0  56                   push esi
// 00a6a9a1  8bf1                 mov esi, ecx
// 00a6a9a3  8b06                 mov eax, dword ptr [esi]
// 00a6a9a5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a9ab  ffd2                 call edx
// 00a6a9ad  85c0                 test eax, eax
// 00a6a9af  7445                 je 0xa6a9f6
// 00a6a9b1  8bce                 mov ecx, esi
// 00a6a9b3  e8e8c0ffff           call 0xa66aa0
// 00a6a9b8  8bf0                 mov esi, eax
// 00a6a9ba  837e0801             cmp dword ptr [esi + 8], 1
// 00a6a9be  7536                 jne 0xa6a9f6
// 00a6a9c0  8b06                 mov eax, dword ptr [esi]
// 00a6a9c2  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a6a9c5  57                   push edi
// 00a6a9c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a6a9ca  57                   push edi
// 00a6a9cb  8bce                 mov ecx, esi
// 00a6a9cd  ffd2                 call edx
// 00a6a9cf  8b06                 mov eax, dword ptr [esi]
// 00a6a9d1  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a6a9d4  57                   push edi
// 00a6a9d5  8bce                 mov ecx, esi
// 00a6a9d7  ffd2                 call edx
// 00a6a9d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6a9dd  8b06                 mov eax, dword ptr [esi]
// 00a6a9df  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a6a9e2  51                   push ecx
// 00a6a9e3  8bce                 mov ecx, esi
// 00a6a9e5  ffd2                 call edx
// 00a6a9e7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6a9eb  8b06                 mov eax, dword ptr [esi]
// 00a6a9ed  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00a6a9f0  51                   push ecx
// 00a6a9f1  8bce                 mov ecx, esi
// 00a6a9f3  ffd2                 call edx
// 00a6a9f5  5f                   pop edi
// 00a6a9f6  5e                   pop esi
// 00a6a9f7  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetXPFlatColors@CXTButton@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp