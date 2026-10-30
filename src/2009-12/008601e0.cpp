// roc 2009-12 008601e0  unit: CXTPToolTipContext::CHTMLToolTip  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008601e0
//
// 008601e0  8b542404             mov edx, dword ptr [esp + 4]
// 008601e4  56                   push esi
// 008601e5  8bf1                 mov esi, ecx
// 008601e7  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 008601ea  8bc1                 mov eax, ecx
// 008601ec  0b44240c             or eax, dword ptr [esp + 0xc]
// 008601f0  f7d2                 not edx
// 008601f2  23c2                 and eax, edx
// 008601f4  3bc8                 cmp ecx, eax
// 008601f6  7428                 je 0x860220
// 008601f8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008601fb  894640               mov dword ptr [esi + 0x40], eax
// 008601fe  85c9                 test ecx, ecx
// 00860200  741e                 je 0x860220
// 00860202  8b01                 mov eax, dword ptr [ecx]
// 00860204  8b5068               mov edx, dword ptr [eax + 0x68]
// 00860207  ffd2                 call edx
// 00860209  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0086020c  85c9                 test ecx, ecx
// 0086020e  7409                 je 0x860219
// 00860210  8b01                 mov eax, dword ptr [ecx]
// 00860212  8b5004               mov edx, dword ptr [eax + 4]
// 00860215  6a01                 push 1
// 00860217  ffd2                 call edx
// 00860219  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00860220  5e                   pop esi
// 00860221  c20800               ret 8
// copied from an identical function in another client (function ?ModifyToolTipStyle@CXTPToolTipContext@@QAEXKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp