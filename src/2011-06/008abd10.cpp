// roc 2011-06 008abd10  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008abd10
//
// 008abd10  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 008abd16  83e1fb               and ecx, 0xfffffffb
// 008abd19  33c0                 xor eax, eax
// 008abd1b  83f908               cmp ecx, 8
// 008abd1e  771b                 ja 0x8abd3b
// 008abd20  ff248d3cbd8a00       jmp dword ptr [ecx*4 + 0x8abd3c]
// 008abd27  33c0                 xor eax, eax
// 008abd29  c3                   ret 
// 008abd2a  b801000000           mov eax, 1
// 008abd2f  c3                   ret 
// 008abd30  b802000000           mov eax, 2
// 008abd35  c3                   ret 
// 008abd36  b808000000           mov eax, 8
// 008abd3b  c3                   ret 
// 008abd3c  27                   daa 
// 008abd3d  bd8a002abd           mov ebp, 0xbd2a008a
// 008abd42  8a00                 mov al, byte ptr [eax]
// 008abd44  30bd8a003bbd         xor byte ptr [ebp - 0x42c4ff76], bh
// 008abd4a  8a00                 mov al, byte ptr [eax]
// 008abd4c  3bbd8a003bbd         cmp edi, dword ptr [ebp - 0x42c4ff76]
// 008abd52  8a00                 mov al, byte ptr [eax]
// 008abd54  3bbd8a003bbd         cmp edi, dword ptr [ebp - 0x42c4ff76]
// 008abd5a  8a00                 mov al, byte ptr [eax]
// copied from an identical function in another client (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp