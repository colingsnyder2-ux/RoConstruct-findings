// from server: 100% by auto
// roc 2012-06 00470b80  unit: XVCMainFrame::XV?$mf0::V?$bind_t::?$thread_data  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00470b80
//
// 00470b80  56                   push esi
// 00470b81  57                   push edi
// 00470b82  8bf9                 mov edi, ecx
// 00470b84  8b37                 mov esi, dword ptr [edi]
// 00470b86  85f6                 test esi, esi
// 00470b88  743e                 je 0x470bc8
// 00470b8a  8d4608               lea eax, [esi + 8]
// 00470b8d  50                   push eax
// 00470b8e  ff159421b200         call dword ptr [0xb22194]
// 00470b94  85c0                 test eax, eax
// 00470b96  752a                 jne 0x470bc2
// 00470b98  85f6                 test esi, esi
// 00470b9a  7426                 je 0x470bc2
// 00470b9c  8b06                 mov eax, dword ptr [esi]
// 00470b9e  85c0                 test eax, eax
// 00470ba0  7407                 je 0x470ba9
// 00470ba2  50                   push eax
// 00470ba3  ff15042bb200         call dword ptr [0xb22b04]
// 00470ba9  8b4604               mov eax, dword ptr [esi + 4]
// 00470bac  85c0                 test eax, eax
// 00470bae  7409                 je 0x470bb9
// 00470bb0  50                   push eax
// 00470bb1  e804185100           call 0x9823ba
// 00470bb6  83c404               add esp, 4
// 00470bb9  56                   push esi
// 00470bba  e855155100           call 0x982114
// 00470bbf  83c404               add esp, 4
// 00470bc2  c70700000000         mov dword ptr [edi], 0
// 00470bc8  5f                   pop edi
// 00470bc9  5e                   pop esi
// 00470bca  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ?_Free@_bstr_t@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
