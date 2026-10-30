// roc 2009-12 0042a850  unit: CSelectionPropGrid  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042a850
//
// 0042a850  56                   push esi
// 0042a851  8bf1                 mov esi, ecx
// 0042a853  8d4e54               lea ecx, [esi + 0x54]
// 0042a856  ff15c0de9800         call dword ptr [0x98dec0]
// 0042a85c  8d4e50               lea ecx, [esi + 0x50]
// 0042a85f  ff15c0de9800         call dword ptr [0x98dec0]
// 0042a865  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0042a868  85c0                 test eax, eax
// 0042a86a  7408                 je 0x42a874
// 0042a86c  8b08                 mov ecx, dword ptr [eax]
// 0042a86e  8b5108               mov edx, dword ptr [ecx + 8]
// 0042a871  50                   push eax
// 0042a872  ffd2                 call edx
// 0042a874  8b4648               mov eax, dword ptr [esi + 0x48]
// 0042a877  85c0                 test eax, eax
// 0042a879  7408                 je 0x42a883
// 0042a87b  8b08                 mov ecx, dword ptr [eax]
// 0042a87d  8b5108               mov edx, dword ptr [ecx + 8]
// 0042a880  50                   push eax
// 0042a881  ffd2                 call edx
// 0042a883  8b4644               mov eax, dword ptr [esi + 0x44]
// 0042a886  85c0                 test eax, eax
// 0042a888  7408                 je 0x42a892
// 0042a88a  8b08                 mov ecx, dword ptr [eax]
// 0042a88c  8b5108               mov edx, dword ptr [ecx + 8]
// 0042a88f  50                   push eax
// 0042a890  ffd2                 call edx
// 0042a892  8bce                 mov ecx, esi
// 0042a894  5e                   pop esi
// 0042a895  e9d6574200           jmp 0x850070
// copied from an identical function in another client (function ??1CXTPPropExchangeXMLNode@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp