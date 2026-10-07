// roc 2008-06 006e8b90  unit: CPatchedControlComboBox  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8b90
//
// 006e8b90  56                   push esi
// 006e8b91  57                   push edi
// 006e8b92  8bf9                 mov edi, ecx
// 006e8b94  8b470c               mov eax, dword ptr [edi + 0xc]
// 006e8b97  85c0                 test eax, eax
// 006e8b99  7423                 je 0x6e8bbe
// 006e8b9b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8b9f  8b5104               mov edx, dword ptr [ecx + 4]
// 006e8ba2  8b09                 mov ecx, dword ptr [ecx]
// 006e8ba4  6a00                 push 0
// 006e8ba6  52                   push edx
// 006e8ba7  51                   push ecx
// 006e8ba8  ffd0                 call eax
// 006e8baa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8bae  50                   push eax
// 006e8baf  56                   push esi
// 006e8bb0  8bcf                 mov ecx, edi
// 006e8bb2  e8c9fdffff           call 0x6e8980
// 006e8bb7  5f                   pop edi
// 006e8bb8  8bc6                 mov eax, esi
// 006e8bba  5e                   pop esi
// 006e8bbb  c20800               ret 8
// 006e8bbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8bc2  33c0                 xor eax, eax
// 006e8bc4  50                   push eax
// 006e8bc5  56                   push esi
// 006e8bc6  8bcf                 mov ecx, edi
// 006e8bc8  e8b3fdffff           call 0x6e8980
// 006e8bcd  5f                   pop edi
// 006e8bce  8bc6                 mov eax, esi
// 006e8bd0  5e                   pop esi
// 006e8bd1  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
