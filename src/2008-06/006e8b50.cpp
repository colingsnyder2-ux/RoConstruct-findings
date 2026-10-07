// roc 2008-06 006e8b50  unit: CPatchedControlComboBox  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8b50
//
// 006e8b50  56                   push esi
// 006e8b51  8bf1                 mov esi, ecx
// 006e8b53  8b4604               mov eax, dword ptr [esi + 4]
// 006e8b56  57                   push edi
// 006e8b57  85c0                 test eax, eax
// 006e8b59  741d                 je 0x6e8b78
// 006e8b5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8b5f  6a00                 push 0
// 006e8b61  51                   push ecx
// 006e8b62  ffd0                 call eax
// 006e8b64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8b68  50                   push eax
// 006e8b69  57                   push edi
// 006e8b6a  8bce                 mov ecx, esi
// 006e8b6c  e80ffeffff           call 0x6e8980
// 006e8b71  8bc7                 mov eax, edi
// 006e8b73  5f                   pop edi
// 006e8b74  5e                   pop esi
// 006e8b75  c20800               ret 8
// 006e8b78  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8b7c  33c0                 xor eax, eax
// 006e8b7e  50                   push eax
// 006e8b7f  57                   push edi
// 006e8b80  8bce                 mov ecx, esi
// 006e8b82  e8f9fdffff           call 0x6e8980
// 006e8b87  8bc7                 mov eax, edi
// 006e8b89  5f                   pop edi
// 006e8b8a  5e                   pop esi
// 006e8b8b  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
