// roc 2009-12 0089a830  unit: CXTPReportPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a830
//
// 0089a830  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089a834  8b542408             mov edx, dword ptr [esp + 8]
// 0089a838  56                   push esi
// 0089a839  57                   push edi
// 0089a83a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089a83e  8bf1                 mov esi, ecx
// 0089a840  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089a844  6a00                 push 0
// 0089a846  2bc8                 sub ecx, eax
// 0089a848  51                   push ecx
// 0089a849  50                   push eax
// 0089a84a  52                   push edx
// 0089a84b  57                   push edi
// 0089a84c  8bce                 mov ecx, esi
// 0089a84e  e81dffffff           call 0x89a770
// 0089a853  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089a857  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089a85b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089a85f  6a00                 push 0
// 0089a861  2bc8                 sub ecx, eax
// 0089a863  51                   push ecx
// 0089a864  52                   push edx
// 0089a865  50                   push eax
// 0089a866  57                   push edi
// 0089a867  8bce                 mov ecx, esi
// 0089a869  e8d2feffff           call 0x89a740
// 0089a86e  5f                   pop edi
// 0089a86f  5e                   pop esi
// 0089a870  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawConnector@CXTPReportPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp