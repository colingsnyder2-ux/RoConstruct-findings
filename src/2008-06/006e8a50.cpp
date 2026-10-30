// from server: 100% by auto
// roc 2008-06 006e8a50  unit: CPatchedControlComboBox  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8a50
//
// 006e8a50  56                   push esi
// 006e8a51  8bf1                 mov esi, ecx
// 006e8a53  8b4604               mov eax, dword ptr [esi + 4]
// 006e8a56  57                   push edi
// 006e8a57  85c0                 test eax, eax
// 006e8a59  741d                 je 0x6e8a78
// 006e8a5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8a5f  6a00                 push 0
// 006e8a61  51                   push ecx
// 006e8a62  ffd0                 call eax
// 006e8a64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8a68  50                   push eax
// 006e8a69  57                   push edi
// 006e8a6a  8bce                 mov ecx, esi
// 006e8a6c  e86fffffff           call 0x6e89e0
// 006e8a71  8bc7                 mov eax, edi
// 006e8a73  5f                   pop edi
// 006e8a74  5e                   pop esi
// 006e8a75  c20800               ret 8
// 006e8a78  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8a7c  33c0                 xor eax, eax
// 006e8a7e  50                   push eax
// 006e8a7f  57                   push edi
// 006e8a80  8bce                 mov ecx, esi
// 006e8a82  e859ffffff           call 0x6e89e0
// 006e8a87  8bc7                 mov eax, edi
// 006e8a89  5f                   pop edi
// 006e8a8a  5e                   pop esi
// 006e8a8b  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
