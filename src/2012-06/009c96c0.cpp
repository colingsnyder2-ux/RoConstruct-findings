// roc 2012-06 009c96c0  unit: CXTPToolBar::CControlButtonExpand  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c96c0
//
// 009c96c0  56                   push esi
// 009c96c1  8bf1                 mov esi, ecx
// 009c96c3  8b4608               mov eax, dword ptr [esi + 8]
// 009c96c6  57                   push edi
// 009c96c7  bf01000000           mov edi, 1
// 009c96cc  85c0                 test eax, eax
// 009c96ce  740f                 je 0x9c96df
// 009c96d0  837e0c02             cmp dword ptr [esi + 0xc], 2
// 009c96d4  7509                 jne 0x9c96df
// 009c96d6  50                   push eax
// 009c96d7  ff158c21b200         call dword ptr [0xb2218c]
// 009c96dd  8bf8                 mov edi, eax
// 009c96df  8d4e04               lea ecx, [esi + 4]
// 009c96e2  c7460800000000       mov dword ptr [esi + 8], 0
// 009c96e9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009c96f0  ff150448b200         call dword ptr [0xb24804]
// 009c96f6  8bc7                 mov eax, edi
// 009c96f8  5f                   pop edi
// 009c96f9  5e                   pop esi
// 009c96fa  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ?FreeLibrary@CXTPModuleHandle@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPSystemHelpers.cpp
