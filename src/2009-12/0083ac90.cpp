// roc 2009-12 0083ac90  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ac90
//
// 0083ac90  53                   push ebx
// 0083ac91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0083ac95  56                   push esi
// 0083ac96  53                   push ebx
// 0083ac97  8bf1                 mov esi, ecx
// 0083ac99  e8a2d4fbff           call 0x7f8140
// 0083ac9e  85c0                 test eax, eax
// 0083aca0  7505                 jne 0x83aca7
// 0083aca2  5e                   pop esi
// 0083aca3  5b                   pop ebx
// 0083aca4  c20400               ret 4
// 0083aca7  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083acae  0f84e2000000         je 0x83ad96
// 0083acb4  57                   push edi
// 0083acb5  bf02000000           mov edi, 2
// 0083acba  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 0083acc0  7459                 je 0x83ad1b
// 0083acc2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0083acc8  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 0083acce  744b                 je 0x83ad1b
// 0083acd0  8bce                 mov ecx, esi
// 0083acd2  e8f979c1ff           call 0x4526d0
// 0083acd7  85c0                 test eax, eax
// 0083acd9  0f84b6000000         je 0x83ad95
// 0083acdf  53                   push ebx
// 0083ace0  e84badfbff           call 0x7f5a30
// 0083ace5  83c404               add esp, 4
// 0083ace8  85c0                 test eax, eax
// 0083acea  0f84a5000000         je 0x83ad95
// 0083acf0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083acf6  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 0083acfc  0f8593000000         jne 0x83ad95
// 0083ad02  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0083ad08  6a00                 push 0
// 0083ad0a  52                   push edx
// 0083ad0b  e890b8fcff           call 0x8065a0
// 0083ad10  5f                   pop edi
// 0083ad11  5e                   pop esi
// 0083ad12  b801000000           mov eax, 1
// 0083ad17  5b                   pop ebx
// 0083ad18  c20400               ret 4
// 0083ad1b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083ad21  83f8ff               cmp eax, -1
// 0083ad24  750f                 jne 0x83ad35
// 0083ad26  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083ad2c  85c9                 test ecx, ecx
// 0083ad2e  7405                 je 0x83ad35
// 0083ad30  e87bb8fbff           call 0x7f65b0
// 0083ad35  ba05000000           mov edx, 5
// 0083ad3a  85c0                 test eax, eax
// 0083ad3c  7433                 je 0x83ad71
// 0083ad3e  85db                 test ebx, ebx
// 0083ad40  7433                 je 0x83ad75
// 0083ad42  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083ad48  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 0083ad4e  7521                 jne 0x83ad71
// 0083ad50  399100010000         cmp dword ptr [ecx + 0x100], edx
// 0083ad56  7419                 je 0x83ad71
// 0083ad58  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0083ad5e  6a00                 push 0
// 0083ad60  50                   push eax
// 0083ad61  e83ab8fcff           call 0x8065a0
// 0083ad66  5f                   pop edi
// 0083ad67  5e                   pop esi
// 0083ad68  b801000000           mov eax, 1
// 0083ad6d  5b                   pop ebx
// 0083ad6e  c20400               ret 4
// 0083ad71  85db                 test ebx, ebx
// 0083ad73  7520                 jne 0x83ad95
// 0083ad75  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083ad7c  7417                 je 0x83ad95
// 0083ad7e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083ad84  399100010000         cmp dword ptr [ecx + 0x100], edx
// 0083ad8a  7409                 je 0x83ad95
// 0083ad8c  6a00                 push 0
// 0083ad8e  6aff                 push -1
// 0083ad90  e80bb8fcff           call 0x8065a0
// 0083ad95  5f                   pop edi
// 0083ad96  5e                   pop esi
// 0083ad97  b801000000           mov eax, 1
// 0083ad9c  5b                   pop ebx
// 0083ad9d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
