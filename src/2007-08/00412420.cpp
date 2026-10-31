// roc 2007-08 00412420  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412420
//
// 00412420  56                   push esi
// 00412421  8bf1                 mov esi, ecx
// 00412423  c706b06e7800         mov dword ptr [esi], 0x786eb0
// 00412429  c746048c6e7800       mov dword ptr [esi + 4], 0x786e8c
// 00412430  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00412437  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0041243d  8b01                 mov eax, dword ptr [ecx]
// 0041243f  8b5008               mov edx, dword ptr [eax + 8]
// 00412442  ffd2                 call edx
// 00412444  8d4e0c               lea ecx, [esi + 0xc]
// 00412447  ff1578e67700         call dword ptr [0x77e678]
// 0041244d  f644240801           test byte ptr [esp + 8], 1
// 00412452  7409                 je 0x41245d
// 00412454  56                   push esi
// 00412455  e808d82100           call 0x62fc62
// 0041245a  83c404               add esp, 4
// 0041245d  8bc6                 mov eax, esi
// 0041245f  5e                   pop esi
// 00412460  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp