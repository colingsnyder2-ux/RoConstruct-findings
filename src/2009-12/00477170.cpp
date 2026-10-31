// roc 2009-12 00477170  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00477170
//
// 00477170  56                   push esi
// 00477171  8bf1                 mov esi, ecx
// 00477173  c7066c1b9b00         mov dword ptr [esi], 0x9b1b6c
// 00477179  c74604481b9b00       mov dword ptr [esi + 4], 0x9b1b48
// 00477180  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00477187  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 0047718d  8b01                 mov eax, dword ptr [ecx]
// 0047718f  8b5008               mov edx, dword ptr [eax + 8]
// 00477192  ffd2                 call edx
// 00477194  8d4e0c               lea ecx, [esi + 0xc]
// 00477197  ff15b4b69800         call dword ptr [0x98b6b4]
// 0047719d  f644240801           test byte ptr [esp + 8], 1
// 004771a2  7409                 je 0x4771ad
// 004771a4  56                   push esi
// 004771a5  e8b0c63700           call 0x7f385a
// 004771aa  83c404               add esp, 4
// 004771ad  8bc6                 mov eax, esi
// 004771af  5e                   pop esi
// 004771b0  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp