// roc 2009-06 0075fec0  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075fec0
//
// 0075fec0  53                   push ebx
// 0075fec1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0075fec5  56                   push esi
// 0075fec6  53                   push ebx
// 0075fec7  8bf1                 mov esi, ecx
// 0075fec9  e8321bfcff           call 0x721a00
// 0075fece  85c0                 test eax, eax
// 0075fed0  7505                 jne 0x75fed7
// 0075fed2  5e                   pop esi
// 0075fed3  5b                   pop ebx
// 0075fed4  c20400               ret 4
// 0075fed7  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0075fede  0f84e2000000         je 0x75ffc6
// 0075fee4  57                   push edi
// 0075fee5  bf02000000           mov edi, 2
// 0075feea  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 0075fef0  7459                 je 0x75ff4b
// 0075fef2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0075fef8  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 0075fefe  744b                 je 0x75ff4b
// 0075ff00  8bce                 mov ecx, esi
// 0075ff02  e8a9c1ceff           call 0x44c0b0
// 0075ff07  85c0                 test eax, eax
// 0075ff09  0f84b6000000         je 0x75ffc5
// 0075ff0f  53                   push ebx
// 0075ff10  e82bf5fbff           call 0x71f440
// 0075ff15  83c404               add esp, 4
// 0075ff18  85c0                 test eax, eax
// 0075ff1a  0f84a5000000         je 0x75ffc5
// 0075ff20  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0075ff26  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 0075ff2c  0f8593000000         jne 0x75ffc5
// 0075ff32  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0075ff38  6a00                 push 0
// 0075ff3a  52                   push edx
// 0075ff3b  e800f5fcff           call 0x72f440
// 0075ff40  5f                   pop edi
// 0075ff41  5e                   pop esi
// 0075ff42  b801000000           mov eax, 1
// 0075ff47  5b                   pop ebx
// 0075ff48  c20400               ret 4
// 0075ff4b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0075ff51  83f8ff               cmp eax, -1
// 0075ff54  750f                 jne 0x75ff65
// 0075ff56  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0075ff5c  85c9                 test ecx, ecx
// 0075ff5e  7405                 je 0x75ff65
// 0075ff60  e83bfffbff           call 0x71fea0
// 0075ff65  ba05000000           mov edx, 5
// 0075ff6a  85c0                 test eax, eax
// 0075ff6c  7433                 je 0x75ffa1
// 0075ff6e  85db                 test ebx, ebx
// 0075ff70  7433                 je 0x75ffa5
// 0075ff72  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0075ff78  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 0075ff7e  7521                 jne 0x75ffa1
// 0075ff80  399100010000         cmp dword ptr [ecx + 0x100], edx
// 0075ff86  7419                 je 0x75ffa1
// 0075ff88  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0075ff8e  6a00                 push 0
// 0075ff90  50                   push eax
// 0075ff91  e8aaf4fcff           call 0x72f440
// 0075ff96  5f                   pop edi
// 0075ff97  5e                   pop esi
// 0075ff98  b801000000           mov eax, 1
// 0075ff9d  5b                   pop ebx
// 0075ff9e  c20400               ret 4
// 0075ffa1  85db                 test ebx, ebx
// 0075ffa3  7520                 jne 0x75ffc5
// 0075ffa5  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0075ffac  7417                 je 0x75ffc5
// 0075ffae  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0075ffb4  399100010000         cmp dword ptr [ecx + 0x100], edx
// 0075ffba  7409                 je 0x75ffc5
// 0075ffbc  6a00                 push 0
// 0075ffbe  6aff                 push -1
// 0075ffc0  e87bf4fcff           call 0x72f440
// 0075ffc5  5f                   pop edi
// 0075ffc6  5e                   pop esi
// 0075ffc7  b801000000           mov eax, 1
// 0075ffcc  5b                   pop ebx
// 0075ffcd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
