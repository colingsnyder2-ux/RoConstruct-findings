// roc 2008-06 00719c00  unit: CXTCaption  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719c00
//
// 00719c00  83791000             cmp dword ptr [ecx + 0x10], 0
// 00719c04  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00719c07  741a                 je 0x719c23
// 00719c09  83790800             cmp dword ptr [ecx + 8], 0
// 00719c0d  7411                 je 0x719c20
// 00719c0f  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00719c13  750b                 jne 0x719c20
// 00719c15  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00719c18  50                   push eax
// 00719c19  ff15042d8000         call dword ptr [0x802d04]
// 00719c1f  c3                   ret 
// 00719c20  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00719c23  50                   push eax
// 00719c24  ff15042d8000         call dword ptr [0x802d04]
// 00719c2a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeTools.cpp (function ?FreshenCursor@CXTPCustomizeDropSource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeTools.cpp
