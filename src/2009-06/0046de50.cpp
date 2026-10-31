// roc 2009-06 0046de50  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046de50
//
// 0046de50  56                   push esi
// 0046de51  8bf1                 mov esi, ecx
// 0046de53  c706ecd48b00         mov dword ptr [esi], 0x8bd4ec
// 0046de59  c74604c8d48b00       mov dword ptr [esi + 4], 0x8bd4c8
// 0046de60  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 0046de67  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 0046de6d  8b01                 mov eax, dword ptr [ecx]
// 0046de6f  8b5008               mov edx, dword ptr [eax + 8]
// 0046de72  ffd2                 call edx
// 0046de74  8d4e0c               lea ecx, [esi + 0xc]
// 0046de77  ff157ce48900         call dword ptr [0x89e47c]
// 0046de7d  f644240801           test byte ptr [esp + 8], 1
// 0046de82  7409                 je 0x46de8d
// 0046de84  56                   push esi
// 0046de85  e8a8ab2a00           call 0x718a32
// 0046de8a  83c404               add esp, 4
// 0046de8d  8bc6                 mov eax, esi
// 0046de8f  5e                   pop esi
// 0046de90  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp