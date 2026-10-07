// roc 2008-06 006e8ac0  unit: CPatchedControlComboBox  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8ac0
//
// 006e8ac0  56                   push esi
// 006e8ac1  57                   push edi
// 006e8ac2  8bf9                 mov edi, ecx
// 006e8ac4  8b470c               mov eax, dword ptr [edi + 0xc]
// 006e8ac7  85c0                 test eax, eax
// 006e8ac9  7423                 je 0x6e8aee
// 006e8acb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8acf  8b5104               mov edx, dword ptr [ecx + 4]
// 006e8ad2  8b09                 mov ecx, dword ptr [ecx]
// 006e8ad4  6a00                 push 0
// 006e8ad6  52                   push edx
// 006e8ad7  51                   push ecx
// 006e8ad8  ffd0                 call eax
// 006e8ada  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8ade  50                   push eax
// 006e8adf  56                   push esi
// 006e8ae0  8bcf                 mov ecx, edi
// 006e8ae2  e8f9feffff           call 0x6e89e0
// 006e8ae7  5f                   pop edi
// 006e8ae8  8bc6                 mov eax, esi
// 006e8aea  5e                   pop esi
// 006e8aeb  c20800               ret 8
// 006e8aee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8af2  33c0                 xor eax, eax
// 006e8af4  50                   push eax
// 006e8af5  56                   push esi
// 006e8af6  8bcf                 mov ecx, edi
// 006e8af8  e8e3feffff           call 0x6e89e0
// 006e8afd  5f                   pop edi
// 006e8afe  8bc6                 mov eax, esi
// 006e8b00  5e                   pop esi
// 006e8b01  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
