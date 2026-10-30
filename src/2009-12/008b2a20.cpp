// roc 2009-12 008b2a20  unit: CXTPDockingPaneTabbedContainer  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2a20
//
// 008b2a20  8b442408             mov eax, dword ptr [esp + 8]
// 008b2a24  56                   push esi
// 008b2a25  8bf1                 mov esi, ecx
// 008b2a27  0fbfc8               movsx ecx, ax
// 008b2a2a  c1e810               shr eax, 0x10
// 008b2a2d  57                   push edi
// 008b2a2e  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 008b2a34  98                   cwde 
// 008b2a35  50                   push eax
// 008b2a36  51                   push ecx
// 008b2a37  8bce                 mov ecx, esi
// 008b2a39  e8a2eeffff           call 0x8b18e0
// 008b2a3e  85c0                 test eax, eax
// 008b2a40  7c0a                 jl 0x8b2a4c
// 008b2a42  50                   push eax
// 008b2a43  8bce                 mov ecx, esi
// 008b2a45  e896f9ffff           call 0x8b23e0
// 008b2a4a  8bf8                 mov edi, eax
// 008b2a4c  85ff                 test edi, edi
// 008b2a4e  7507                 jne 0x8b2a57
// 008b2a50  5f                   pop edi
// 008b2a51  33c0                 xor eax, eax
// 008b2a53  5e                   pop esi
// 008b2a54  c20800               ret 8
// 008b2a57  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008b2a5d  85c0                 test eax, eax
// 008b2a5f  7517                 jne 0x8b2a78
// 008b2a61  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 008b2a67  85c0                 test eax, eax
// 008b2a69  7407                 je 0x8b2a72
// 008b2a6b  50                   push eax
// 008b2a6c  ff15e8ca9800         call dword ptr [0x98cae8]
// 008b2a72  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008b2a78  5f                   pop edi
// 008b2a79  0500000200           add eax, 0x20000
// 008b2a7e  5e                   pop esi
// 008b2a7f  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp