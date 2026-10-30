// roc 2009-12 008a6800  unit: CXTPReportNavigator  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6800
//
// 008a6800  56                   push esi
// 008a6801  8bf1                 mov esi, ecx
// 008a6803  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6806  85c9                 test ecx, ecx
// 008a6808  0f84e8000000         je 0x8a68f6
// 008a680e  57                   push edi
// 008a680f  e84c7df7ff           call 0x81e560
// 008a6814  837e2400             cmp dword ptr [esi + 0x24], 0
// 008a6818  8bf8                 mov edi, eax
// 008a681a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a681d  743f                 je 0x8a685e
// 008a681f  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008a6825  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a682b  8b11                 mov edx, dword ptr [ecx]
// 008a682d  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a6830  50                   push eax
// 008a6831  57                   push edi
// 008a6832  ffd2                 call edx
// 008a6834  3bf8                 cmp edi, eax
// 008a6836  750e                 jne 0x8a6846
// 008a6838  6a00                 push 0
// 008a683a  8bce                 mov ecx, esi
// 008a683c  e88ffdffff           call 0x8a65d0
// 008a6841  5f                   pop edi
// 008a6842  5e                   pop esi
// 008a6843  c20800               ret 8
// 008a6846  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a684a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a684e  51                   push ecx
// 008a684f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6852  52                   push edx
// 008a6853  50                   push eax
// 008a6854  e8a7f2f7ff           call 0x825b00
// 008a6859  5f                   pop edi
// 008a685a  5e                   pop esi
// 008a685b  c20800               ret 8
// 008a685e  837e2800             cmp dword ptr [esi + 0x28], 0
// 008a6862  742d                 je 0x8a6891
// 008a6864  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6868  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008a686e  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a6874  52                   push edx
// 008a6875  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6879  52                   push edx
// 008a687a  8b11                 mov edx, dword ptr [ecx]
// 008a687c  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a687f  50                   push eax
// 008a6880  57                   push edi
// 008a6881  ffd2                 call edx
// 008a6883  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6886  50                   push eax
// 008a6887  e874f2f7ff           call 0x825b00
// 008a688c  5f                   pop edi
// 008a688d  5e                   pop esi
// 008a688e  c20800               ret 8
// 008a6891  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6897  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a689d  8b11                 mov edx, dword ptr [ecx]
// 008a689f  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a68a2  50                   push eax
// 008a68a3  57                   push edi
// 008a68a4  ffd2                 call edx
// 008a68a6  8bf8                 mov edi, eax
// 008a68a8  85ff                 test edi, edi
// 008a68aa  7449                 je 0x8a68f5
// 008a68ac  8b07                 mov eax, dword ptr [edi]
// 008a68ae  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008a68b1  53                   push ebx
// 008a68b2  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 008a68b5  8bcf                 mov ecx, edi
// 008a68b7  ffd2                 call edx
// 008a68b9  39831c010000         cmp dword ptr [ebx + 0x11c], eax
// 008a68bf  7521                 jne 0x8a68e2
// 008a68c1  83bbf801000000       cmp dword ptr [ebx + 0x1f8], 0
// 008a68c8  742a                 je 0x8a68f4
// 008a68ca  83bb0c02000000       cmp dword ptr [ebx + 0x20c], 0
// 008a68d1  7421                 je 0x8a68f4
// 008a68d3  6a02                 push 2
// 008a68d5  8bce                 mov ecx, esi
// 008a68d7  e8f4fcffff           call 0x8a65d0
// 008a68dc  5b                   pop ebx
// 008a68dd  5f                   pop edi
// 008a68de  5e                   pop esi
// 008a68df  c20800               ret 8
// 008a68e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a68e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a68ea  50                   push eax
// 008a68eb  51                   push ecx
// 008a68ec  57                   push edi
// 008a68ed  8bcb                 mov ecx, ebx
// 008a68ef  e80cf2f7ff           call 0x825b00
// 008a68f4  5b                   pop ebx
// 008a68f5  5f                   pop edi
// 008a68f6  5e                   pop esi
// 008a68f7  c20800               ret 8
// copied from an identical function in another client (function ?MoveDown@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportNavigator.cpp