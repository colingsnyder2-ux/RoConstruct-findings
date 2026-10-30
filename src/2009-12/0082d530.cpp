// roc 2009-12 0082d530  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d530
//
// 0082d530  56                   push esi
// 0082d531  57                   push edi
// 0082d532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082d536  8d7120               lea esi, [ecx + 0x20]
// 0082d539  85ff                 test edi, edi
// 0082d53b  7c1f                 jl 0x82d55c
// 0082d53d  3b7e08               cmp edi, dword ptr [esi + 8]
// 0082d540  7d1a                 jge 0x82d55c
// 0082d542  8b4604               mov eax, dword ptr [esi + 4]
// 0082d545  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0082d548  e88f68fcff           call 0x7f3ddc
// 0082d54d  6a01                 push 1
// 0082d54f  57                   push edi
// 0082d550  8bce                 mov ecx, esi
// 0082d552  e829fdffff           call 0x82d280
// 0082d557  5f                   pop edi
// 0082d558  5e                   pop esi
// 0082d559  c20400               ret 4
// 0082d55c  e8ab65fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp