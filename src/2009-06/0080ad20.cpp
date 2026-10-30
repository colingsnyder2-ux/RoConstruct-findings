// roc 2009-06 0080ad20  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ad20
//
// 0080ad20  56                   push esi
// 0080ad21  8bf1                 mov esi, ecx
// 0080ad23  8b06                 mov eax, dword ptr [esi]
// 0080ad25  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080ad2b  ffd2                 call edx
// 0080ad2d  85c0                 test eax, eax
// 0080ad2f  7445                 je 0x80ad76
// 0080ad31  8bce                 mov ecx, esi
// 0080ad33  e83864f8ff           call 0x791170
// 0080ad38  8bf0                 mov esi, eax
// 0080ad3a  837e0801             cmp dword ptr [esi + 8], 1
// 0080ad3e  7536                 jne 0x80ad76
// 0080ad40  8b06                 mov eax, dword ptr [esi]
// 0080ad42  8b5034               mov edx, dword ptr [eax + 0x34]
// 0080ad45  57                   push edi
// 0080ad46  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0080ad4a  57                   push edi
// 0080ad4b  8bce                 mov ecx, esi
// 0080ad4d  ffd2                 call edx
// 0080ad4f  8b06                 mov eax, dword ptr [esi]
// 0080ad51  8b5038               mov edx, dword ptr [eax + 0x38]
// 0080ad54  57                   push edi
// 0080ad55  8bce                 mov ecx, esi
// 0080ad57  ffd2                 call edx
// 0080ad59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080ad5d  8b06                 mov eax, dword ptr [esi]
// 0080ad5f  8b5070               mov edx, dword ptr [eax + 0x70]
// 0080ad62  51                   push ecx
// 0080ad63  8bce                 mov ecx, esi
// 0080ad65  ffd2                 call edx
// 0080ad67  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ad6b  8b06                 mov eax, dword ptr [esi]
// 0080ad6d  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0080ad70  51                   push ecx
// 0080ad71  8bce                 mov ecx, esi
// 0080ad73  ffd2                 call edx
// 0080ad75  5f                   pop edi
// 0080ad76  5e                   pop esi
// 0080ad77  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetXPFlatColors@CXTButton@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp