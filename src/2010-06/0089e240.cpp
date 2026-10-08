// roc 2010-06 0089e240  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e240
//
// 0089e240  8b442408             mov eax, dword ptr [esp + 8]
// 0089e244  56                   push esi
// 0089e245  57                   push edi
// 0089e246  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089e24a  50                   push eax
// 0089e24b  57                   push edi
// 0089e24c  8bf1                 mov esi, ecx
// 0089e24e  e8ed61faff           call 0x844440
// 0089e253  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0089e25a  743f                 je 0x89e29b
// 0089e25c  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 0089e263  7436                 je 0x89e29b
// 0089e265  53                   push ebx
// 0089e266  8bcf                 mov ecx, edi
// 0089e268  e833ffffff           call 0x89e1a0
// 0089e26d  8bce                 mov ecx, esi
// 0089e26f  8bd8                 mov ebx, eax
// 0089e271  e82affffff           call 0x89e1a0
// 0089e276  3bc3                 cmp eax, ebx
// 0089e278  5b                   pop ebx
// 0089e279  7420                 je 0x89e29b
// 0089e27b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0089e281  50                   push eax
// 0089e282  8bce                 mov ecx, esi
// 0089e284  e817ffffff           call 0x89e1a0
// 0089e289  8bc8                 mov ecx, eax
// 0089e28b  e840e8faff           call 0x84cad0
// 0089e290  5f                   pop edi
// 0089e291  898684010000         mov dword ptr [esi + 0x184], eax
// 0089e297  5e                   pop esi
// 0089e298  c20800               ret 8
// 0089e29b  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 0089e2a1  5f                   pop edi
// 0089e2a2  898e84010000         mov dword ptr [esi + 0x184], ecx
// 0089e2a8  5e                   pop esi
// 0089e2a9  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
