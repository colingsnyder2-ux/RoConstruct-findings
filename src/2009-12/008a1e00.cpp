// roc 2009-12 008a1e00  unit: CXTPReportInplaceEdit  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1e00
//
// 008a1e00  8b442404             mov eax, dword ptr [esp + 4]
// 008a1e04  56                   push esi
// 008a1e05  8bf1                 mov esi, ecx
// 008a1e07  83f826               cmp eax, 0x26
// 008a1e0a  7405                 je 0x8a1e11
// 008a1e0c  83f828               cmp eax, 0x28
// 008a1e0f  752e                 jne 0x8a1e3f
// 008a1e11  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a1e14  85c0                 test eax, eax
// 008a1e16  7427                 je 0x8a1e3f
// 008a1e18  8b8028020000         mov eax, dword ptr [eax + 0x228]
// 008a1e1e  83780800             cmp dword ptr [eax + 8], 0
// 008a1e22  7e1b                 jle 0x8a1e3f
// 008a1e24  8b4004               mov eax, dword ptr [eax + 4]
// 008a1e27  8b00                 mov eax, dword ptr [eax]
// 008a1e29  8b4864               mov ecx, dword ptr [eax + 0x64]
// 008a1e2c  3b4e64               cmp ecx, dword ptr [esi + 0x64]
// 008a1e2f  750e                 jne 0x8a1e3f
// 008a1e31  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a1e34  8b11                 mov edx, dword ptr [ecx]
// 008a1e36  50                   push eax
// 008a1e37  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 008a1e3d  ffd0                 call eax
// 008a1e3f  8bce                 mov ecx, esi
// 008a1e41  e8ea1ff5ff           call 0x7f3e30
// 008a1e46  5e                   pop esi
// 008a1e47  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSysKeyDown@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp