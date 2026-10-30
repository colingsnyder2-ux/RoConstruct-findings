// roc 2009-12 008268b0  unit: CXTPReportControl  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008268b0
//
// 008268b0  6aff                 push -1
// 008268b2  6828b59500           push 0x95b528
// 008268b7  64a100000000         mov eax, dword ptr fs:[0]
// 008268bd  50                   push eax
// 008268be  83ec3c               sub esp, 0x3c
// 008268c1  53                   push ebx
// 008268c2  56                   push esi
// 008268c3  57                   push edi
// 008268c4  a10052b600           mov eax, dword ptr [0xb65200]
// 008268c9  33c4                 xor eax, esp
// 008268cb  50                   push eax
// 008268cc  8d44244c             lea eax, [esp + 0x4c]
// 008268d0  64a300000000         mov dword ptr fs:[0], eax
// 008268d6  8bf1                 mov esi, ecx
// 008268d8  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 008268dc  33c0                 xor eax, eax
// 008268de  8944241c             mov dword ptr [esp + 0x1c], eax
// 008268e2  89442410             mov dword ptr [esp + 0x10], eax
// 008268e6  89442414             mov dword ptr [esp + 0x14], eax
// 008268ea  89442418             mov dword ptr [esp + 0x18], eax
// 008268ee  89442420             mov dword ptr [esp + 0x20], eax
// 008268f2  89442424             mov dword ptr [esp + 0x24], eax
// 008268f6  8d442410             lea eax, [esp + 0x10]
// 008268fa  50                   push eax
// 008268fb  6aee                 push -0x12
// 008268fd  895c2424             mov dword ptr [esp + 0x24], ebx
// 00826901  e86ac9ffff           call 0x823270
// 00826906  8bce                 mov ecx, esi
// 00826908  e8537cffff           call 0x81e560
// 0082690d  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 00826914  8bf8                 mov edi, eax
// 00826916  7449                 je 0x826961
// 00826918  85ff                 test edi, edi
// 0082691a  7445                 je 0x826961
// 0082691c  83fb09               cmp ebx, 9
// 0082691f  7540                 jne 0x826961
// 00826921  6a00                 push 0
// 00826923  8bce                 mov ecx, esi
// 00826925  e806e2ffff           call 0x824b30
// 0082692a  6a10                 push 0x10
// 0082692c  ff1530cc9800         call dword ptr [0x98cc30]
// 00826932  33c9                 xor ecx, ecx
// 00826934  6685c0               test ax, ax
// 00826937  0f9cc1               setl cl
// 0082693a  6a00                 push 0
// 0082693c  6a00                 push 0
// 0082693e  8bc1                 mov eax, ecx
// 00826940  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00826946  50                   push eax
// 00826947  e8a4020800           call 0x8a6bf0
// 0082694c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00826950  64890d00000000       mov dword ptr fs:[0], ecx
// 00826957  59                   pop ecx
// 00826958  5f                   pop edi
// 00826959  5e                   pop esi
// 0082695a  5b                   pop ebx
// 0082695b  83c448               add esp, 0x48
// 0082695e  c20c00               ret 0xc
// 00826961  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 00826968  0f848c000000         je 0x8269fa
// 0082696e  85ff                 test edi, edi
// 00826970  0f8484000000         je 0x8269fa
// 00826976  8b17                 mov edx, dword ptr [edi]
// 00826978  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082697b  8bcf                 mov ecx, edi
// 0082697d  ffd0                 call eax
// 0082697f  85c0                 test eax, eax
// 00826981  7477                 je 0x8269fa
// 00826983  83fb0d               cmp ebx, 0xd
// 00826986  7472                 je 0x8269fa
// 00826988  83fb1b               cmp ebx, 0x1b
// 0082698b  746d                 je 0x8269fa
// 0082698d  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00826993  51                   push ecx
// 00826994  57                   push edi
// 00826995  56                   push esi
// 00826996  8d4c2434             lea ecx, [esp + 0x34]
// 0082699a  e8113dffff           call 0x81a6b0
// 0082699f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008269a3  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008269ab  85c9                 test ecx, ecx
// 008269ad  743a                 je 0x8269e9
// 008269af  8b11                 mov edx, dword ptr [ecx]
// 008269b1  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 008269b7  53                   push ebx
// 008269b8  8d44242c             lea eax, [esp + 0x2c]
// 008269bc  50                   push eax
// 008269bd  ffd2                 call edx
// 008269bf  85c0                 test eax, eax
// 008269c1  7426                 je 0x8269e9
// 008269c3  8d4c2428             lea ecx, [esp + 0x28]
// 008269c7  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008269cf  e8cc36ffff           call 0x81a0a0
// 008269d4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008269d8  64890d00000000       mov dword ptr fs:[0], ecx
// 008269df  59                   pop ecx
// 008269e0  5f                   pop edi
// 008269e1  5e                   pop esi
// 008269e2  5b                   pop ebx
// 008269e3  83c448               add esp, 0x48
// 008269e6  c20c00               ret 0xc
// 008269e9  8d4c2428             lea ecx, [esp + 0x28]
// 008269ed  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008269f5  e8a636ffff           call 0x81a0a0
// 008269fa  8bce                 mov ecx, esi
// 008269fc  e82fd4fcff           call 0x7f3e30
// 00826a01  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00826a05  64890d00000000       mov dword ptr fs:[0], ecx
// 00826a0c  59                   pop ecx
// 00826a0d  5f                   pop edi
// 00826a0e  5e                   pop esi
// 00826a0f  5b                   pop ebx
// 00826a10  83c448               add esp, 0x48
// 00826a13  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportControl@@IAEXIII@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp