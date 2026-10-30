// roc 2012-06 00a6f100  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f100
//
// 00a6f100  8b442408             mov eax, dword ptr [esp + 8]
// 00a6f104  56                   push esi
// 00a6f105  57                   push edi
// 00a6f106  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a6f10a  50                   push eax
// 00a6f10b  57                   push edi
// 00a6f10c  8bf1                 mov esi, ecx
// 00a6f10e  e84da9faff           call 0xa19a60
// 00a6f113  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 00a6f11a  743f                 je 0xa6f15b
// 00a6f11c  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 00a6f123  7436                 je 0xa6f15b
// 00a6f125  53                   push ebx
// 00a6f126  8bcf                 mov ecx, edi
// 00a6f128  e833ffffff           call 0xa6f060
// 00a6f12d  8bce                 mov ecx, esi
// 00a6f12f  8bd8                 mov ebx, eax
// 00a6f131  e82affffff           call 0xa6f060
// 00a6f136  3bc3                 cmp eax, ebx
// 00a6f138  5b                   pop ebx
// 00a6f139  7420                 je 0xa6f15b
// 00a6f13b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00a6f141  50                   push eax
// 00a6f142  8bce                 mov ecx, esi
// 00a6f144  e817ffffff           call 0xa6f060
// 00a6f149  8bc8                 mov ecx, eax
// 00a6f14b  e8702ffbff           call 0xa220c0
// 00a6f150  5f                   pop edi
// 00a6f151  898684010000         mov dword ptr [esi + 0x184], eax
// 00a6f157  5e                   pop esi
// 00a6f158  c20800               ret 8
// 00a6f15b  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 00a6f161  5f                   pop edi
// 00a6f162  898e84010000         mov dword ptr [esi + 0x184], ecx
// 00a6f168  5e                   pop esi
// 00a6f169  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
