// roc 2008-06 0074dd20  unit: CXTPReportInplaceEdit  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074dd20
//
// 0074dd20  8b442404             mov eax, dword ptr [esp + 4]
// 0074dd24  56                   push esi
// 0074dd25  8bf1                 mov esi, ecx
// 0074dd27  83f826               cmp eax, 0x26
// 0074dd2a  7405                 je 0x74dd31
// 0074dd2c  83f828               cmp eax, 0x28
// 0074dd2f  752e                 jne 0x74dd5f
// 0074dd31  8b4658               mov eax, dword ptr [esi + 0x58]
// 0074dd34  85c0                 test eax, eax
// 0074dd36  7427                 je 0x74dd5f
// 0074dd38  8b8028020000         mov eax, dword ptr [eax + 0x228]
// 0074dd3e  83780800             cmp dword ptr [eax + 8], 0
// 0074dd42  7e1b                 jle 0x74dd5f
// 0074dd44  8b4004               mov eax, dword ptr [eax + 4]
// 0074dd47  8b00                 mov eax, dword ptr [eax]
// 0074dd49  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0074dd4c  3b4e64               cmp ecx, dword ptr [esi + 0x64]
// 0074dd4f  750e                 jne 0x74dd5f
// 0074dd51  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0074dd54  8b11                 mov edx, dword ptr [ecx]
// 0074dd56  50                   push eax
// 0074dd57  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 0074dd5d  ffd0                 call eax
// 0074dd5f  8bce                 mov ecx, esi
// 0074dd61  e8022ff5ff           call 0x6a0c68
// 0074dd66  5e                   pop esi
// 0074dd67  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnSysKeyDown@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
