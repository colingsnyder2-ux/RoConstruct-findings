// roc 2008-06 006e8160  unit: CXTPToolBar::CControlButtonExpand  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8160
//
// 006e8160  56                   push esi
// 006e8161  8bf1                 mov esi, ecx
// 006e8163  8b4608               mov eax, dword ptr [esi + 8]
// 006e8166  57                   push edi
// 006e8167  bf01000000           mov edi, 1
// 006e816c  85c0                 test eax, eax
// 006e816e  740f                 je 0x6e817f
// 006e8170  837e0c02             cmp dword ptr [esi + 0xc], 2
// 006e8174  7509                 jne 0x6e817f
// 006e8176  50                   push eax
// 006e8177  ff15a0218000         call dword ptr [0x8021a0]
// 006e817d  8bf8                 mov edi, eax
// 006e817f  8d4e04               lea ecx, [esi + 4]
// 006e8182  c7460800000000       mov dword ptr [esi + 8], 0
// 006e8189  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006e8190  ff15843e8000         call dword ptr [0x803e84]
// 006e8196  8bc7                 mov eax, edi
// 006e8198  5f                   pop edi
// 006e8199  5e                   pop esi
// 006e819a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ?FreeLibrary@CXTPModuleHandle@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp
