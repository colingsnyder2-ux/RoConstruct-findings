// roc 2009-06 0080e940  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e940
//
// 0080e940  8b442408             mov eax, dword ptr [esp + 8]
// 0080e944  56                   push esi
// 0080e945  57                   push edi
// 0080e946  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0080e94a  50                   push eax
// 0080e94b  57                   push edi
// 0080e94c  8bf1                 mov esi, ecx
// 0080e94e  e82d01fbff           call 0x7bea80
// 0080e953  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0080e95a  743f                 je 0x80e99b
// 0080e95c  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 0080e963  7436                 je 0x80e99b
// 0080e965  53                   push ebx
// 0080e966  8bcf                 mov ecx, edi
// 0080e968  e833ffffff           call 0x80e8a0
// 0080e96d  8bce                 mov ecx, esi
// 0080e96f  8bd8                 mov ebx, eax
// 0080e971  e82affffff           call 0x80e8a0
// 0080e976  3bc3                 cmp eax, ebx
// 0080e978  5b                   pop ebx
// 0080e979  7420                 je 0x80e99b
// 0080e97b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0080e981  50                   push eax
// 0080e982  8bce                 mov ecx, esi
// 0080e984  e817ffffff           call 0x80e8a0
// 0080e989  8bc8                 mov ecx, eax
// 0080e98b  e890cdfaff           call 0x7bb720
// 0080e990  5f                   pop edi
// 0080e991  898684010000         mov dword ptr [esi + 0x184], eax
// 0080e997  5e                   pop esi
// 0080e998  c20800               ret 8
// 0080e99b  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 0080e9a1  5f                   pop edi
// 0080e9a2  898e84010000         mov dword ptr [esi + 0x184], ecx
// 0080e9a8  5e                   pop esi
// 0080e9a9  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
