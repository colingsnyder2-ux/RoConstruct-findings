// roc 2009-12 0082aba0  unit: CXTPReportHeader  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082aba0
//
// 0082aba0  56                   push esi
// 0082aba1  8bf1                 mov esi, ecx
// 0082aba3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082aba6  8b4020               mov eax, dword ptr [eax + 0x20]
// 0082aba9  57                   push edi
// 0082abaa  50                   push eax
// 0082abab  ff152ccc9800         call dword ptr [0x98cc2c]
// 0082abb1  50                   push eax
// 0082abb2  e8738ffcff           call 0x7f3b2a
// 0082abb7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082abba  83b9c001000001       cmp dword ptr [ecx + 0x1c0], 1
// 0082abc1  7568                 jne 0x82ac2b
// 0082abc3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082abc7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082abcb  52                   push edx
// 0082abcc  50                   push eax
// 0082abcd  8bce                 mov ecx, esi
// 0082abcf  e83cf7ffff           call 0x82a310
// 0082abd4  8bf8                 mov edi, eax
// 0082abd6  85ff                 test edi, edi
// 0082abd8  7451                 je 0x82ac2b
// 0082abda  837f6800             cmp dword ptr [edi + 0x68], 0
// 0082abde  744b                 je 0x82ac2b
// 0082abe0  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 0082abe7  7442                 je 0x82ac2b
// 0082abe9  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0082abf0  7418                 je 0x82ac0a
// 0082abf2  57                   push edi
// 0082abf3  8bce                 mov ecx, esi
// 0082abf5  e896eeffff           call 0x829a90
// 0082abfa  85c0                 test eax, eax
// 0082abfc  752d                 jne 0x82ac2b
// 0082abfe  57                   push edi
// 0082abff  8bce                 mov ecx, esi
// 0082ac01  e82aeeffff           call 0x829a30
// 0082ac06  85c0                 test eax, eax
// 0082ac08  7521                 jne 0x82ac2b
// 0082ac0a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082ac0d  6a00                 push 0
// 0082ac0f  e87c38ffff           call 0x81e490
// 0082ac14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082ac18  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0082ac1c  51                   push ecx
// 0082ac1d  52                   push edx
// 0082ac1e  57                   push edi
// 0082ac1f  8bce                 mov ecx, esi
// 0082ac21  e81afdffff           call 0x82a940
// 0082ac26  5f                   pop edi
// 0082ac27  5e                   pop esi
// 0082ac28  c20800               ret 8
// 0082ac2b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082ac2e  83b8c001000000       cmp dword ptr [eax + 0x1c0], 0
// 0082ac35  0f85b9000000         jne 0x82acf4
// 0082ac3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082ac3f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0082ac43  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 0082ac49  53                   push ebx
// 0082ac4a  51                   push ecx
// 0082ac4b  52                   push edx
// 0082ac4c  8d4660               lea eax, [esi + 0x60]
// 0082ac4f  50                   push eax
// 0082ac50  33db                 xor ebx, ebx
// 0082ac52  ffd7                 call edi
// 0082ac54  85c0                 test eax, eax
// 0082ac56  7436                 je 0x82ac8e
// 0082ac58  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082ac5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082ac60  8b16                 mov edx, dword ptr [esi]
// 0082ac62  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 0082ac68  50                   push eax
// 0082ac69  51                   push ecx
// 0082ac6a  8bce                 mov ecx, esi
// 0082ac6c  ffd2                 call edx
// 0082ac6e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082ac71  85c0                 test eax, eax
// 0082ac73  7c12                 jl 0x82ac87
// 0082ac75  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0082ac78  7d0d                 jge 0x82ac87
// 0082ac7a  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0082ac7d  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0082ac80  bb01000000           mov ebx, 1
// 0082ac85  eb3f                 jmp 0x82acc6
// 0082ac87  33c0                 xor eax, eax
// 0082ac89  8d5801               lea ebx, [eax + 1]
// 0082ac8c  eb38                 jmp 0x82acc6
// 0082ac8e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082ac92  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082ac96  52                   push edx
// 0082ac97  50                   push eax
// 0082ac98  8d4e50               lea ecx, [esi + 0x50]
// 0082ac9b  51                   push ecx
// 0082ac9c  ffd7                 call edi
// 0082ac9e  85c0                 test eax, eax
// 0082aca0  7451                 je 0x82acf3
// 0082aca2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082aca6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082acaa  8b16                 mov edx, dword ptr [esi]
// 0082acac  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 0082acb2  6a01                 push 1
// 0082acb4  50                   push eax
// 0082acb5  51                   push ecx
// 0082acb6  8bce                 mov ecx, esi
// 0082acb8  ffd2                 call edx
// 0082acba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082acbd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0082acc0  50                   push eax
// 0082acc1  e8ea280400           call 0x86d5b0
// 0082acc6  85c0                 test eax, eax
// 0082acc8  7429                 je 0x82acf3
// 0082acca  53                   push ebx
// 0082accb  50                   push eax
// 0082accc  8bce                 mov ecx, esi
// 0082acce  e89dd6ffff           call 0x828370
// 0082acd3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082acd7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082acdb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082acde  6a02                 push 2
// 0082ace0  895670               mov dword ptr [esi + 0x70], edx
// 0082ace3  894674               mov dword ptr [esi + 0x74], eax
// 0082ace6  e8a537ffff           call 0x81e490
// 0082aceb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082acee  e88d47ffff           call 0x81f480
// 0082acf3  5b                   pop ebx
// 0082acf4  5f                   pop edi
// 0082acf5  5e                   pop esi
// 0082acf6  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonDown@CXTPReportHeader@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp