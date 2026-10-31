// roc 2012-06 004b1990  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b1990
//
// 004b1990  56                   push esi
// 004b1991  8bf1                 mov esi, ecx
// 004b1993  c7062c3ab600         mov dword ptr [esi], 0xb63a2c
// 004b1999  c74604083ab600       mov dword ptr [esi + 4], 0xb63a08
// 004b19a0  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 004b19a7  8b0dc463e100         mov ecx, dword ptr [0xe163c4]
// 004b19ad  8b01                 mov eax, dword ptr [ecx]
// 004b19af  8b5008               mov edx, dword ptr [eax + 8]
// 004b19b2  ffd2                 call edx
// 004b19b4  8d4e0c               lea ecx, [esi + 0xc]
// 004b19b7  ff15d826b200         call dword ptr [0xb226d8]
// 004b19bd  f644240801           test byte ptr [esp + 8], 1
// 004b19c2  7409                 je 0x4b19cd
// 004b19c4  56                   push esi
// 004b19c5  e84a074d00           call 0x982114
// 004b19ca  83c404               add esp, 4
// 004b19cd  8bc6                 mov eax, esi
// 004b19cf  5e                   pop esi
// 004b19d0  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp