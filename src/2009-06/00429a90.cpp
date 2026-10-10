// from server: 100% by tester
// roc 2008-06 004309a0  unit: CSelectionPropGrid  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004309a0
//
// 004309a0  56                   push esi
// 004309a1  8bf1                 mov esi, ecx
// 004309a3  8d4e54               lea ecx, [esi + 0x54]
// 004309a6  ff15143f8000         call dword ptr [0x803f14]
// 004309ac  8d4e50               lea ecx, [esi + 0x50]
// 004309af  ff15143f8000         call dword ptr [0x803f14]
// 004309b5  8b464c               mov eax, dword ptr [esi + 0x4c]
// 004309b8  85c0                 test eax, eax
// 004309ba  7408                 je 0x4309c4
// 004309bc  8b08                 mov ecx, dword ptr [eax]
// 004309be  8b5108               mov edx, dword ptr [ecx + 8]
// 004309c1  50                   push eax
// 004309c2  ffd2                 call edx
// 004309c4  8b4648               mov eax, dword ptr [esi + 0x48]
// 004309c7  85c0                 test eax, eax
// 004309c9  7408                 je 0x4309d3
// 004309cb  8b08                 mov ecx, dword ptr [eax]
// 004309cd  8b5108               mov edx, dword ptr [ecx + 8]
// 004309d0  50                   push eax
// 004309d1  ffd2                 call edx
// 004309d3  8b4644               mov eax, dword ptr [esi + 0x44]
// 004309d6  85c0                 test eax, eax
// 004309d8  7408                 je 0x4309e2
// 004309da  8b08                 mov ecx, dword ptr [eax]
// 004309dc  8b5108               mov edx, dword ptr [ecx + 8]
// 004309df  50                   push eax
// 004309e0  ffd2                 call edx
// 004309e2  8bce                 mov ecx, esi
// 004309e4  5e                   pop esi
// 004309e5  e9b6bf2c00           jmp 0x6fc9a0
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarCustomProperties.cpp (function ??1CXTPPropExchangeXMLNode@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarCustomProperties.cpp
