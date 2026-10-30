// roc 2009-12 008042e0  unit: CXTPCommandBar  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008042e0
//
// 008042e0  56                   push esi
// 008042e1  8bf1                 mov esi, ecx
// 008042e3  83be6001000000       cmp dword ptr [esi + 0x160], 0
// 008042ea  7e0b                 jle 0x8042f7
// 008042ec  838ee800000002       or dword ptr [esi + 0xe8], 2
// 008042f3  5e                   pop esi
// 008042f4  c20800               ret 8
// 008042f7  57                   push edi
// 008042f8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008042fc  85ff                 test edi, edi
// 008042fe  7507                 jne 0x804307
// 00804300  83a6e8000000fd       and dword ptr [esi + 0xe8], 0xfffffffd
// 00804307  837e2000             cmp dword ptr [esi + 0x20], 0
// 0080430b  741f                 je 0x80432c
// 0080430d  8b06                 mov eax, dword ptr [esi]
// 0080430f  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00804315  ffd2                 call edx
// 00804317  85c0                 test eax, eax
// 00804319  7411                 je 0x80432c
// 0080431b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080431f  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00804325  50                   push eax
// 00804326  57                   push edi
// 00804327  e854950800           call 0x88d880
// 0080432c  5f                   pop edi
// 0080432d  5e                   pop esi
// 0080432e  c20800               ret 8
// copied from an identical function in another client (function ?Redraw@CXTPCommandBar@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp