// roc 2011-06 008f6db0  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6db0
//
// 008f6db0  8b442408             mov eax, dword ptr [esp + 8]
// 008f6db4  56                   push esi
// 008f6db5  57                   push edi
// 008f6db6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f6dba  50                   push eax
// 008f6dbb  57                   push edi
// 008f6dbc  8bf1                 mov esi, ecx
// 008f6dbe  e84da8faff           call 0x8a1610
// 008f6dc3  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 008f6dca  743f                 je 0x8f6e0b
// 008f6dcc  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 008f6dd3  7436                 je 0x8f6e0b
// 008f6dd5  53                   push ebx
// 008f6dd6  8bcf                 mov ecx, edi
// 008f6dd8  e833ffffff           call 0x8f6d10
// 008f6ddd  8bce                 mov ecx, esi
// 008f6ddf  8bd8                 mov ebx, eax
// 008f6de1  e82affffff           call 0x8f6d10
// 008f6de6  3bc3                 cmp eax, ebx
// 008f6de8  5b                   pop ebx
// 008f6de9  7420                 je 0x8f6e0b
// 008f6deb  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 008f6df1  50                   push eax
// 008f6df2  8bce                 mov ecx, esi
// 008f6df4  e817ffffff           call 0x8f6d10
// 008f6df9  8bc8                 mov ecx, eax
// 008f6dfb  e8102efbff           call 0x8a9c10
// 008f6e00  5f                   pop edi
// 008f6e01  898684010000         mov dword ptr [esi + 0x184], eax
// 008f6e07  5e                   pop esi
// 008f6e08  c20800               ret 8
// 008f6e0b  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 008f6e11  5f                   pop edi
// 008f6e12  898e84010000         mov dword ptr [esi + 0x184], ecx
// 008f6e18  5e                   pop esi
// 008f6e19  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
