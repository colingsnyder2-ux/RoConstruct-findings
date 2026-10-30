// roc 2009-12 008233e0  unit: CXTPReportControl  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008233e0
//
// 008233e0  56                   push esi
// 008233e1  57                   push edi
// 008233e2  8bf9                 mov edi, ecx
// 008233e4  e81791ffff           call 0x81c500
// 008233e9  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008233ef  e82c980000           call 0x82cc20
// 008233f4  8bf0                 mov esi, eax
// 008233f6  83ee01               sub esi, 1
// 008233f9  7823                 js 0x82341e
// 008233fb  eb03                 jmp 0x823400
// 008233fd  8d4900               lea ecx, [ecx]
// 00823400  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00823406  8b01                 mov eax, dword ptr [ecx]
// 00823408  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082340b  56                   push esi
// 0082340c  ffd2                 call edx
// 0082340e  8b10                 mov edx, dword ptr [eax]
// 00823410  8bc8                 mov ecx, eax
// 00823412  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00823415  6a01                 push 1
// 00823417  ffd0                 call eax
// 00823419  83ee01               sub esi, 1
// 0082341c  79e2                 jns 0x823400
// 0082341e  8bcf                 mov ecx, edi
// 00823420  e8cbf9ffff           call 0x822df0
// 00823425  8bcf                 mov ecx, edi
// 00823427  e834b1ffff           call 0x81e560
// 0082342c  50                   push eax
// 0082342d  8bcf                 mov ecx, edi
// 0082342f  e85cc7ffff           call 0x81fb90
// 00823434  5f                   pop edi
// 00823435  5e                   pop esi
// 00823436  c3                   ret 
// copied from an identical function in another client (function ?ExpandAll@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp