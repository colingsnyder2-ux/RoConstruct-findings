// roc 2007-08 006d68a0  unit: CXTPReportHeaderDropWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d68a0
//
// 006d68a0  56                   push esi
// 006d68a1  8bf1                 mov esi, ecx
// 006d68a3  8d4e58               lea ecx, [esi + 0x58]
// 006d68a6  e88199f5ff           call 0x63022c
// 006d68ab  8bce                 mov ecx, esi
// 006d68ad  e83695f5ff           call 0x62fde8
// 006d68b2  85f6                 test esi, esi
// 006d68b4  740b                 je 0x6d68c1
// 006d68b6  8b06                 mov eax, dword ptr [esi]
// 006d68b8  8b5004               mov edx, dword ptr [eax + 4]
// 006d68bb  6a01                 push 1
// 006d68bd  8bce                 mov ecx, esi
// 006d68bf  ffd2                 call edx
// 006d68c1  5e                   pop esi
// 006d68c2  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportDragDrop.cpp (function ?PostNcDestroy@CXTPReportHeaderDropWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportDragDrop.cpp
