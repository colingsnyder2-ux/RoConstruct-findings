// roc 2009-06 00741660  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741660
//
// 00741660  56                   push esi
// 00741661  57                   push edi
// 00741662  8bf9                 mov edi, ecx
// 00741664  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0074166a  85f6                 test esi, esi
// 0074166c  741a                 je 0x741688
// 0074166e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00741671  85c9                 test ecx, ecx
// 00741673  7413                 je 0x741688
// 00741675  e80692cdff           call 0x41a880
// 0074167a  3bc7                 cmp eax, edi
// 0074167c  750a                 jne 0x741688
// 0074167e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00741681  5f                   pop edi
// 00741682  5e                   pop esi
// 00741683  e938720800           jmp 0x7c88c0
// 00741688  5f                   pop edi
// 00741689  5e                   pop esi
// 0074168a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
