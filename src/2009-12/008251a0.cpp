// roc 2009-12 008251a0  unit: CXTPReportControl  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008251a0
//
// 008251a0  56                   push esi
// 008251a1  6a00                 push 0
// 008251a3  8bf1                 mov esi, ecx
// 008251a5  e886f9ffff           call 0x824b30
// 008251aa  8b8644020000         mov eax, dword ptr [esi + 0x244]
// 008251b0  8b5058               mov edx, dword ptr [eax + 0x58]
// 008251b3  8d8e44020000         lea ecx, [esi + 0x244]
// 008251b9  6a01                 push 1
// 008251bb  ffd2                 call edx
// 008251bd  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 008251c4  740f                 je 0x8251d5
// 008251c6  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008251cc  8b01                 mov eax, dword ptr [ecx]
// 008251ce  8b5058               mov edx, dword ptr [eax + 0x58]
// 008251d1  6a01                 push 1
// 008251d3  ffd2                 call edx
// 008251d5  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 008251dc  740f                 je 0x8251ed
// 008251de  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008251e4  8b01                 mov eax, dword ptr [ecx]
// 008251e6  8b5058               mov edx, dword ptr [eax + 0x58]
// 008251e9  6a01                 push 1
// 008251eb  ffd2                 call edx
// 008251ed  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 008251f3  85c9                 test ecx, ecx
// 008251f5  7405                 je 0x8251fc
// 008251f7  e8a4920000           call 0x82e4a0
// 008251fc  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00825202  85c9                 test ecx, ecx
// 00825204  7405                 je 0x82520b
// 00825206  e845790000           call 0x82cb50
// 0082520b  837c240800           cmp dword ptr [esp + 8], 0
// 00825210  741a                 je 0x82522c
// 00825212  8bce                 mov ecx, esi
// 00825214  e87778ffff           call 0x81ca90
// 00825219  8b06                 mov eax, dword ptr [esi]
// 0082521b  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00825221  8bce                 mov ecx, esi
// 00825223  ffd2                 call edx
// 00825225  8bce                 mov ecx, esi
// 00825227  e854a2ffff           call 0x81f480
// 0082522c  5e                   pop esi
// 0082522d  c20400               ret 4
// copied from an identical function in another client (function ?ResetContent@CXTPReportControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp