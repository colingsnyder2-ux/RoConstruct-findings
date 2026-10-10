// roc 2008-06 0070a0d0  unit: CXTPToolTipContext::CHTMLToolTip  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a0d0
//
// 0070a0d0  8b542404             mov edx, dword ptr [esp + 4]
// 0070a0d4  56                   push esi
// 0070a0d5  8bf1                 mov esi, ecx
// 0070a0d7  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0070a0da  8bc1                 mov eax, ecx
// 0070a0dc  0b44240c             or eax, dword ptr [esp + 0xc]
// 0070a0e0  f7d2                 not edx
// 0070a0e2  23c2                 and eax, edx
// 0070a0e4  3bc8                 cmp ecx, eax
// 0070a0e6  7428                 je 0x70a110
// 0070a0e8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0070a0eb  894640               mov dword ptr [esi + 0x40], eax
// 0070a0ee  85c9                 test ecx, ecx
// 0070a0f0  741e                 je 0x70a110
// 0070a0f2  8b01                 mov eax, dword ptr [ecx]
// 0070a0f4  8b5068               mov edx, dword ptr [eax + 0x68]
// 0070a0f7  ffd2                 call edx
// 0070a0f9  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0070a0fc  85c9                 test ecx, ecx
// 0070a0fe  7409                 je 0x70a109
// 0070a100  8b01                 mov eax, dword ptr [ecx]
// 0070a102  8b5004               mov edx, dword ptr [eax + 4]
// 0070a105  6a01                 push 1
// 0070a107  ffd2                 call edx
// 0070a109  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0070a110  5e                   pop esi
// 0070a111  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?ModifyToolTipStyle@CXTPToolTipContext@@QAEXKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
