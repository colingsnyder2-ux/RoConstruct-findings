// roc 2009-12 008210c0  unit: CXTPReportControl  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008210c0
//
// 008210c0  83ec38               sub esp, 0x38
// 008210c3  f644244008           test byte ptr [esp + 0x40], 8
// 008210c8  53                   push ebx
// 008210c9  56                   push esi
// 008210ca  8bf1                 mov esi, ecx
// 008210cc  bb02000000           mov ebx, 2
// 008210d1  7405                 je 0x8210d8
// 008210d3  bb01000000           mov ebx, 1
// 008210d8  83beb002000000       cmp dword ptr [esi + 0x2b0], 0
// 008210df  7531                 jne 0x821112
// 008210e1  0fb78690020000       movzx eax, word ptr [esi + 0x290]
// 008210e8  6685c0               test ax, ax
// 008210eb  7502                 jne 0x8210ef
// 008210ed  33db                 xor ebx, ebx
// 008210ef  f6869c02000001       test byte ptr [esi + 0x29c], 1
// 008210f6  7418                 je 0x821110
// 008210f8  85db                 test ebx, ebx
// 008210fa  7416                 je 0x821112
// 008210fc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00821100  85c9                 test ecx, ecx
// 00821102  740c                 je 0x821110
// 00821104  6a00                 push 0
// 00821106  50                   push eax
// 00821107  e8e835fdff           call 0x7f46f4
// 0082110c  85c0                 test eax, eax
// 0082110e  7502                 jne 0x821112
// 00821110  33db                 xor ebx, ebx
// 00821112  55                   push ebp
// 00821113  8baea0020000         mov ebp, dword ptr [esi + 0x2a0]
// 00821119  c786a0020000ffffffff mov dword ptr [esi + 0x2a0], 0xffffffff
// 00821123  85db                 test ebx, ebx
// 00821125  0f84c9000000         je 0x8211f4
// 0082112b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0082112f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00821133  8b06                 mov eax, dword ptr [esi]
// 00821135  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 0082113b  51                   push ecx
// 0082113c  8b8e3c020000         mov ecx, dword ptr [esi + 0x23c]
// 00821142  52                   push edx
// 00821143  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 00821149  51                   push ecx
// 0082114a  52                   push edx
// 0082114b  8bce                 mov ecx, esi
// 0082114d  ffd0                 call eax
// 0082114f  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00821155  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00821158  e81347cbff           call 0x4d5870
// 0082115d  85c0                 test eax, eax
// 0082115f  0f858f000000         jne 0x8211f4
// 00821165  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0082116b  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0082116e  e8fd46cbff           call 0x4d5870
// 00821173  85c0                 test eax, eax
// 00821175  757d                 jne 0x8211f4
// 00821177  8b442454             mov eax, dword ptr [esp + 0x54]
// 0082117b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0082117f  57                   push edi
// 00821180  50                   push eax
// 00821181  51                   push ecx
// 00821182  8bce                 mov ecx, esi
// 00821184  e857c4ffff           call 0x81d5e0
// 00821189  8bf8                 mov edi, eax
// 0082118b  85ff                 test edi, edi
// 0082118d  7464                 je 0x8211f3
// 0082118f  8b17                 mov edx, dword ptr [edi]
// 00821191  8b4260               mov eax, dword ptr [edx + 0x60]
// 00821194  8bcf                 mov ecx, edi
// 00821196  ffd0                 call eax
// 00821198  85c0                 test eax, eax
// 0082119a  7457                 je 0x8211f3
// 0082119c  8b17                 mov edx, dword ptr [edi]
// 0082119e  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 008211a4  8d4c2410             lea ecx, [esp + 0x10]
// 008211a8  51                   push ecx
// 008211a9  8d44241c             lea eax, [esp + 0x1c]
// 008211ad  50                   push eax
// 008211ae  8bcf                 mov ecx, edi
// 008211b0  ffd2                 call edx
// 008211b2  8bc8                 mov ecx, eax
// 008211b4  e847b8bfff           call 0x41ca00
// 008211b9  8b4004               mov eax, dword ptr [eax + 4]
// 008211bc  3b442458             cmp eax, dword ptr [esp + 0x58]
// 008211c0  7d16                 jge 0x8211d8
// 008211c2  8b17                 mov edx, dword ptr [edi]
// 008211c4  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 008211ca  8d442428             lea eax, [esp + 0x28]
// 008211ce  50                   push eax
// 008211cf  8bcf                 mov ecx, edi
// 008211d1  ffd2                 call edx
// 008211d3  8b400c               mov eax, dword ptr [eax + 0xc]
// 008211d6  eb14                 jmp 0x8211ec
// 008211d8  8b07                 mov eax, dword ptr [edi]
// 008211da  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 008211e0  8d4c2438             lea ecx, [esp + 0x38]
// 008211e4  51                   push ecx
// 008211e5  8bcf                 mov ecx, edi
// 008211e7  ffd2                 call edx
// 008211e9  8b4004               mov eax, dword ptr [eax + 4]
// 008211ec  48                   dec eax
// 008211ed  8986a0020000         mov dword ptr [esi + 0x2a0], eax
// 008211f3  5f                   pop edi
// 008211f4  39aea0020000         cmp dword ptr [esi + 0x2a0], ebp
// 008211fa  5d                   pop ebp
// 008211fb  7407                 je 0x821204
// 008211fd  8bce                 mov ecx, esi
// 008211ff  e87ce2ffff           call 0x81f480
// 00821204  5e                   pop esi
// 00821205  8bc3                 mov eax, ebx
// 00821207  5b                   pop ebx
// 00821208  83c438               add esp, 0x38
// 0082120b  c21000               ret 0x10
// copied from an identical function in another client (function ?OnDragOver@CXTPReportControl@@MAEKPAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp