// roc 2011-06 008c1a20  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1a20
//
// 008c1a20  83ec20               sub esp, 0x20
// 008c1a23  56                   push esi
// 008c1a24  8bf1                 mov esi, ecx
// 008c1a26  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008c1a2c  85c0                 test eax, eax
// 008c1a2e  0f84e6000000         je 0x8c1b1a
// 008c1a34  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 008c1a3b  0f85d9000000         jne 0x8c1b1a
// 008c1a41  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 008c1a48  8d4820               lea ecx, [eax + 0x20]
// 008c1a4b  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 008c1a55  8b01                 mov eax, dword ptr [ecx]
// 008c1a57  8b5014               mov edx, dword ptr [eax + 0x14]
// 008c1a5a  ffd2                 call edx
// 008c1a5c  85c0                 test eax, eax
// 008c1a5e  741f                 je 0x8c1a7f
// 008c1a60  6a00                 push 0
// 008c1a62  8bce                 mov ecx, esi
// 008c1a64  e8dd88f4ff           call 0x80a346
// 008c1a69  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008c1a70  0f8488000000         je 0x8c1afe
// 008c1a76  8bce                 mov ecx, esi
// 008c1a78  e8f3fdffff           call 0x8c1870
// 008c1a7d  eb7f                 jmp 0x8c1afe
// 008c1a7f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c1a82  8d442408             lea eax, [esp + 8]
// 008c1a86  50                   push eax
// 008c1a87  51                   push ecx
// 008c1a88  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008c1a90  ff157c1ca400         call dword ptr [0xa41c7c]
// 008c1a96  6a08                 push 8
// 008c1a98  ff15741aa400         call dword ptr [0xa41a74]
// 008c1a9e  8d542404             lea edx, [esp + 4]
// 008c1aa2  52                   push edx
// 008c1aa3  83ec10               sub esp, 0x10
// 008c1aa6  89442418             mov dword ptr [esp + 0x18], eax
// 008c1aaa  8bc4                 mov eax, esp
// 008c1aac  8d4c241c             lea ecx, [esp + 0x1c]
// 008c1ab0  51                   push ecx
// 008c1ab1  50                   push eax
// 008c1ab2  ff15681ca400         call dword ptr [0xa41c68]
// 008c1ab8  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008c1abe  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c1ac1  8d4820               lea ecx, [eax + 0x20]
// 008c1ac4  8b4224               mov eax, dword ptr [edx + 0x24]
// 008c1ac7  56                   push esi
// 008c1ac8  ffd0                 call eax
// 008c1aca  8b442404             mov eax, dword ptr [esp + 4]
// 008c1ace  85c0                 test eax, eax
// 008c1ad0  7407                 je 0x8c1ad9
// 008c1ad2  50                   push eax
// 008c1ad3  ff157c1aa400         call dword ptr [0xa41a7c]
// 008c1ad9  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008c1adf  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c1ae2  83c13c               add ecx, 0x3c
// 008c1ae5  51                   push ecx
// 008c1ae6  52                   push edx
// 008c1ae7  ff155c1ca400         call dword ptr [0xa41c5c]
// 008c1aed  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008c1af3  83c03c               add eax, 0x3c
// 008c1af6  50                   push eax
// 008c1af7  8bce                 mov ecx, esi
// 008c1af9  e80895f4ff           call 0x80b006
// 008c1afe  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008c1b04  e857020000           call 0x8c1d60
// 008c1b09  8bc8                 mov ecx, eax
// 008c1b0b  e8b0c8f8ff           call 0x84e3c0
// 008c1b10  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 008c1b1a  5e                   pop esi
// 008c1b1b  83c420               add esp, 0x20
// 008c1b1e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
