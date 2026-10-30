// roc 2009-12 00823380  unit: CXTPReportControl  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00823380
//
// 00823380  56                   push esi
// 00823381  57                   push edi
// 00823382  8bf9                 mov edi, ecx
// 00823384  e87791ffff           call 0x81c500
// 00823389  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0082338f  e88c980000           call 0x82cc20
// 00823394  8bf0                 mov esi, eax
// 00823396  83ee01               sub esi, 1
// 00823399  7823                 js 0x8233be
// 0082339b  eb03                 jmp 0x8233a0
// 0082339d  8d4900               lea ecx, [ecx]
// 008233a0  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008233a6  8b01                 mov eax, dword ptr [ecx]
// 008233a8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008233ab  56                   push esi
// 008233ac  ffd2                 call edx
// 008233ae  8b10                 mov edx, dword ptr [eax]
// 008233b0  8bc8                 mov ecx, eax
// 008233b2  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008233b5  6a00                 push 0
// 008233b7  ffd0                 call eax
// 008233b9  83ee01               sub esi, 1
// 008233bc  79e2                 jns 0x8233a0
// 008233be  8bcf                 mov ecx, edi
// 008233c0  e82bfaffff           call 0x822df0
// 008233c5  8bcf                 mov ecx, edi
// 008233c7  e894b1ffff           call 0x81e560
// 008233cc  50                   push eax
// 008233cd  8bcf                 mov ecx, edi
// 008233cf  e8bcc7ffff           call 0x81fb90
// 008233d4  5f                   pop edi
// 008233d5  5e                   pop esi
// 008233d6  c3                   ret 
// copied from an identical function in another client (function ?CollapseAll@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp