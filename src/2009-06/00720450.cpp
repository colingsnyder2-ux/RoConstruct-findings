// from server: 100% by tester
// roc 2008-06 006abd70  unit: CRobloxControlColorSelector  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006abd70
//
// 006abd70  57                   push edi
// 006abd71  8bf9                 mov edi, ecx
// 006abd73  8b07                 mov eax, dword ptr [edi]
// 006abd75  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 006abd7b  ffd2                 call edx
// 006abd7d  85c0                 test eax, eax
// 006abd7f  7451                 je 0x6abdd2
// 006abd81  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006abd85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006abd89  56                   push esi
// 006abd8a  50                   push eax
// 006abd8b  51                   push ecx
// 006abd8c  8db7c0000000         lea esi, [edi + 0xc0]
// 006abd92  56                   push esi
// 006abd93  ff152c2d8000         call dword ptr [0x802d2c]
// 006abd99  85c0                 test eax, eax
// 006abd9b  7434                 je 0x6abdd1
// 006abd9d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006abda1  8bd0                 mov edx, eax
// 006abda3  2b16                 sub edx, dword ptr [esi]
// 006abda5  83fa02               cmp edx, 2
// 006abda8  7e0d                 jle 0x6abdb7
// 006abdaa  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 006abdb0  2bc8                 sub ecx, eax
// 006abdb2  83f902               cmp ecx, 2
// 006abdb5  7f1a                 jg 0x6abdd1
// 006abdb7  e8843c0700           call 0x71fa40
// 006abdbc  8b10                 mov edx, dword ptr [eax]
// 006abdbe  8bc8                 mov ecx, eax
// 006abdc0  8b4218               mov eax, dword ptr [edx + 0x18]
// 006abdc3  68f4260000           push 0x26f4
// 006abdc8  ffd0                 call eax
// 006abdca  50                   push eax
// 006abdcb  ff15042d8000         call dword ptr [0x802d04]
// 006abdd1  5e                   pop esi
// 006abdd2  5f                   pop edi
// 006abdd3  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?OnCustomizeMouseMove@CXTPControl@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
