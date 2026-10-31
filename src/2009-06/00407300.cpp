// roc 2009-06 00407300  unit: VCApp::?$CComContainedObject  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407300
//
// 00407300  56                   push esi
// 00407301  8bf1                 mov esi, ecx
// 00407303  8b4610               mov eax, dword ptr [esi + 0x10]
// 00407306  85c0                 test eax, eax
// 00407308  7408                 je 0x407312
// 0040730a  8b08                 mov ecx, dword ptr [eax]
// 0040730c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040730f  50                   push eax
// 00407310  ffd2                 call edx
// 00407312  f644240801           test byte ptr [esp + 8], 1
// 00407317  7409                 je 0x407322
// 00407319  56                   push esi
// 0040731a  e813173100           call 0x718a32
// 0040731f  83c404               add esp, 4
// 00407322  8bc6                 mov eax, esi
// 00407324  5e                   pop esi
// 00407325  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComContainedObject@VCApp@@@ATL@@UAEPAXI@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp