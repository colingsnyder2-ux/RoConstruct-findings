// roc 2009-12 008e9420  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9420
//
// 008e9420  8b442408             mov eax, dword ptr [esp + 8]
// 008e9424  56                   push esi
// 008e9425  57                   push edi
// 008e9426  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e942a  50                   push eax
// 008e942b  57                   push edi
// 008e942c  8bf1                 mov esi, ecx
// 008e942e  e80d6efaff           call 0x890240
// 008e9433  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 008e943a  743f                 je 0x8e947b
// 008e943c  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 008e9443  7436                 je 0x8e947b
// 008e9445  53                   push ebx
// 008e9446  8bcf                 mov ecx, edi
// 008e9448  e833ffffff           call 0x8e9380
// 008e944d  8bce                 mov ecx, esi
// 008e944f  8bd8                 mov ebx, eax
// 008e9451  e82affffff           call 0x8e9380
// 008e9456  3bc3                 cmp eax, ebx
// 008e9458  5b                   pop ebx
// 008e9459  7420                 je 0x8e947b
// 008e945b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 008e9461  50                   push eax
// 008e9462  8bce                 mov ecx, esi
// 008e9464  e817ffffff           call 0x8e9380
// 008e9469  8bc8                 mov ecx, eax
// 008e946b  e8d0f4faff           call 0x898940
// 008e9470  5f                   pop edi
// 008e9471  898684010000         mov dword ptr [esi + 0x184], eax
// 008e9477  5e                   pop esi
// 008e9478  c20800               ret 8
// 008e947b  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 008e9481  5f                   pop edi
// 008e9482  898e84010000         mov dword ptr [esi + 0x184], ecx
// 008e9488  5e                   pop esi
// 008e9489  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
