// roc 2009-12 00406ff0  unit: VCApp::?$CComContainedObject  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406ff0
//
// 00406ff0  56                   push esi
// 00406ff1  8bf1                 mov esi, ecx
// 00406ff3  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406ff6  85c0                 test eax, eax
// 00406ff8  7408                 je 0x407002
// 00406ffa  8b08                 mov ecx, dword ptr [eax]
// 00406ffc  8b5108               mov edx, dword ptr [ecx + 8]
// 00406fff  50                   push eax
// 00407000  ffd2                 call edx
// 00407002  f644240801           test byte ptr [esp + 8], 1
// 00407007  7409                 je 0x407012
// 00407009  56                   push esi
// 0040700a  e84bc83e00           call 0x7f385a
// 0040700f  83c404               add esp, 4
// 00407012  8bc6                 mov eax, esi
// 00407014  5e                   pop esi
// 00407015  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComContainedObject@VCApp@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp