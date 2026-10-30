// roc 2009-12 0083b850  unit: CXTPToolBar::CControlButtonExpand  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b850
//
// 0083b850  56                   push esi
// 0083b851  8bf1                 mov esi, ecx
// 0083b853  8b4608               mov eax, dword ptr [esi + 8]
// 0083b856  57                   push edi
// 0083b857  bf01000000           mov edi, 1
// 0083b85c  85c0                 test eax, eax
// 0083b85e  740f                 je 0x83b86f
// 0083b860  837e0c02             cmp dword ptr [esi + 0xc], 2
// 0083b864  7509                 jne 0x83b86f
// 0083b866  50                   push eax
// 0083b867  ff15f8b19800         call dword ptr [0x98b1f8]
// 0083b86d  8bf8                 mov edi, eax
// 0083b86f  8d4e04               lea ecx, [esi + 4]
// 0083b872  c7460800000000       mov dword ptr [esi + 8], 0
// 0083b879  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0083b880  ff1590d69800         call dword ptr [0x98d690]
// 0083b886  8bc7                 mov eax, edi
// 0083b888  5f                   pop edi
// 0083b889  5e                   pop esi
// 0083b88a  c3                   ret 
// copied from an identical function in another client (function ?FreeLibrary@CXTPModuleHandle@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp