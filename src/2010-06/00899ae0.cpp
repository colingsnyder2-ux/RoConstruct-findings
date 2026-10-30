// roc 2010-06 00899ae0  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899ae0
//
// 00899ae0  56                   push esi
// 00899ae1  8bf1                 mov esi, ecx
// 00899ae3  8b06                 mov eax, dword ptr [esi]
// 00899ae5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00899aeb  ffd2                 call edx
// 00899aed  85c0                 test eax, eax
// 00899aef  7445                 je 0x899b36
// 00899af1  8bce                 mov ecx, esi
// 00899af3  e86873f8ff           call 0x820e60
// 00899af8  8bf0                 mov esi, eax
// 00899afa  837e0801             cmp dword ptr [esi + 8], 1
// 00899afe  7536                 jne 0x899b36
// 00899b00  8b06                 mov eax, dword ptr [esi]
// 00899b02  8b5034               mov edx, dword ptr [eax + 0x34]
// 00899b05  57                   push edi
// 00899b06  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00899b0a  57                   push edi
// 00899b0b  8bce                 mov ecx, esi
// 00899b0d  ffd2                 call edx
// 00899b0f  8b06                 mov eax, dword ptr [esi]
// 00899b11  8b5038               mov edx, dword ptr [eax + 0x38]
// 00899b14  57                   push edi
// 00899b15  8bce                 mov ecx, esi
// 00899b17  ffd2                 call edx
// 00899b19  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00899b1d  8b06                 mov eax, dword ptr [esi]
// 00899b1f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00899b22  51                   push ecx
// 00899b23  8bce                 mov ecx, esi
// 00899b25  ffd2                 call edx
// 00899b27  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00899b2b  8b06                 mov eax, dword ptr [esi]
// 00899b2d  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00899b30  51                   push ecx
// 00899b31  8bce                 mov ecx, esi
// 00899b33  ffd2                 call edx
// 00899b35  5f                   pop edi
// 00899b36  5e                   pop esi
// 00899b37  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetXPFlatColors@CXTButton@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp