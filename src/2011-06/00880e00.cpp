// from server: 100% by auto
// roc 2011-06 00880e00  unit: CXTPMouseManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880e00
//
// 00880e00  83791000             cmp dword ptr [ecx + 0x10], 0
// 00880e04  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00880e07  741a                 je 0x880e23
// 00880e09  83790800             cmp dword ptr [ecx + 8], 0
// 00880e0d  7411                 je 0x880e20
// 00880e0f  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00880e13  750b                 jne 0x880e20
// 00880e15  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00880e18  50                   push eax
// 00880e19  ff15f41ba400         call dword ptr [0xa41bf4]
// 00880e1f  c3                   ret 
// 00880e20  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00880e23  50                   push eax
// 00880e24  ff15f41ba400         call dword ptr [0xa41bf4]
// 00880e2a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCustomizeTools.cpp (function ?FreshenCursor@CXTPCustomizeDropSource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCustomizeTools.cpp
