// from server: 100% by auto
// roc 2011-06 00851b50  unit: CSourceStream  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851b50
//
// 00851b50  56                   push esi
// 00851b51  57                   push edi
// 00851b52  8bf9                 mov edi, ecx
// 00851b54  8b470c               mov eax, dword ptr [edi + 0xc]
// 00851b57  85c0                 test eax, eax
// 00851b59  7423                 je 0x851b7e
// 00851b5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851b5f  8b5104               mov edx, dword ptr [ecx + 4]
// 00851b62  8b09                 mov ecx, dword ptr [ecx]
// 00851b64  6a00                 push 0
// 00851b66  52                   push edx
// 00851b67  51                   push ecx
// 00851b68  ffd0                 call eax
// 00851b6a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851b6e  50                   push eax
// 00851b6f  56                   push esi
// 00851b70  8bcf                 mov ecx, edi
// 00851b72  e8f9feffff           call 0x851a70
// 00851b77  5f                   pop edi
// 00851b78  8bc6                 mov eax, esi
// 00851b7a  5e                   pop esi
// 00851b7b  c20800               ret 8
// 00851b7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851b82  33c0                 xor eax, eax
// 00851b84  50                   push eax
// 00851b85  56                   push esi
// 00851b86  8bcf                 mov ecx, edi
// 00851b88  e8e3feffff           call 0x851a70
// 00851b8d  5f                   pop edi
// 00851b8e  8bc6                 mov eax, esi
// 00851b90  5e                   pop esi
// 00851b91  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
