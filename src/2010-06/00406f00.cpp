// roc 2010-06 00406f00  unit: VCApp::?$CComContainedObject  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406f00
//
// 00406f00  56                   push esi
// 00406f01  8bf1                 mov esi, ecx
// 00406f03  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406f06  85c0                 test eax, eax
// 00406f08  7408                 je 0x406f12
// 00406f0a  8b08                 mov ecx, dword ptr [eax]
// 00406f0c  8b5108               mov edx, dword ptr [ecx + 8]
// 00406f0f  50                   push eax
// 00406f10  ffd2                 call edx
// 00406f12  f644240801           test byte ptr [esp + 8], 1
// 00406f17  7409                 je 0x406f22
// 00406f19  56                   push esi
// 00406f1a  e87b0a3a00           call 0x7a799a
// 00406f1f  83c404               add esp, 4
// 00406f22  8bc6                 mov eax, esi
// 00406f24  5e                   pop esi
// 00406f25  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComContainedObject@VCApp@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp