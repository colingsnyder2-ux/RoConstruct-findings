// roc 2009-12 0082b2d0  unit: CInstanceRecord  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b2d0
//
// 0082b2d0  57                   push edi
// 0082b2d1  8bf9                 mov edi, ecx
// 0082b2d3  8d4704               lea eax, [edi + 4]
// 0082b2d6  50                   push eax
// 0082b2d7  ff150cb29800         call dword ptr [0x98b20c]
// 0082b2dd  8bcf                 mov ecx, edi
// 0082b2df  e83cfaffff           call 0x82ad20
// 0082b2e4  85c0                 test eax, eax
// 0082b2e6  7442                 je 0x82b32a
// 0082b2e8  56                   push esi
// 0082b2e9  8bcf                 mov ecx, edi
// 0082b2eb  33f6                 xor esi, esi
// 0082b2ed  e88efcffff           call 0x82af80
// 0082b2f2  8bc8                 mov ecx, eax
// 0082b2f4  e827190000           call 0x82cc20
// 0082b2f9  85c0                 test eax, eax
// 0082b2fb  7e2c                 jle 0x82b329
// 0082b2fd  8d4900               lea ecx, [ecx]
// 0082b300  56                   push esi
// 0082b301  8bcf                 mov ecx, edi
// 0082b303  e878fcffff           call 0x82af80
// 0082b308  8bc8                 mov ecx, eax
// 0082b30a  e821190000           call 0x82cc30
// 0082b30f  8bc8                 mov ecx, eax
// 0082b311  e8baffffff           call 0x82b2d0
// 0082b316  8bcf                 mov ecx, edi
// 0082b318  46                   inc esi
// 0082b319  e862fcffff           call 0x82af80
// 0082b31e  8bc8                 mov ecx, eax
// 0082b320  e8fb180000           call 0x82cc20
// 0082b325  3bf0                 cmp esi, eax
// 0082b327  7cd7                 jl 0x82b300
// 0082b329  5e                   pop esi
// 0082b32a  5f                   pop edi
// 0082b32b  c3                   ret 
// copied from an identical function in another client (function ?TreeAddRef@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp