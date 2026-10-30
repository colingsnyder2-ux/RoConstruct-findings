// roc 2009-12 008e57c0  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e57c0
//
// 008e57c0  56                   push esi
// 008e57c1  8bf1                 mov esi, ecx
// 008e57c3  8b06                 mov eax, dword ptr [esi]
// 008e57c5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e57cb  ffd2                 call edx
// 008e57cd  85c0                 test eax, eax
// 008e57cf  7445                 je 0x8e5816
// 008e57d1  8bce                 mov ecx, esi
// 008e57d3  e898c0ffff           call 0x8e1870
// 008e57d8  8bf0                 mov esi, eax
// 008e57da  837e0801             cmp dword ptr [esi + 8], 1
// 008e57de  7536                 jne 0x8e5816
// 008e57e0  8b06                 mov eax, dword ptr [esi]
// 008e57e2  8b5034               mov edx, dword ptr [eax + 0x34]
// 008e57e5  57                   push edi
// 008e57e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e57ea  57                   push edi
// 008e57eb  8bce                 mov ecx, esi
// 008e57ed  ffd2                 call edx
// 008e57ef  8b06                 mov eax, dword ptr [esi]
// 008e57f1  8b5038               mov edx, dword ptr [eax + 0x38]
// 008e57f4  57                   push edi
// 008e57f5  8bce                 mov ecx, esi
// 008e57f7  ffd2                 call edx
// 008e57f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e57fd  8b06                 mov eax, dword ptr [esi]
// 008e57ff  8b5070               mov edx, dword ptr [eax + 0x70]
// 008e5802  51                   push ecx
// 008e5803  8bce                 mov ecx, esi
// 008e5805  ffd2                 call edx
// 008e5807  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e580b  8b06                 mov eax, dword ptr [esi]
// 008e580d  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008e5810  51                   push ecx
// 008e5811  8bce                 mov ecx, esi
// 008e5813  ffd2                 call edx
// 008e5815  5f                   pop edi
// 008e5816  5e                   pop esi
// 008e5817  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetXPFlatColors@CXTButton@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp