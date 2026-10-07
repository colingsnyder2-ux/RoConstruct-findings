// roc 2007-08 00671cc0  unit: CPropertyGridItemBrickColor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671cc0
//
// 00671cc0  56                   push esi
// 00671cc1  57                   push edi
// 00671cc2  8bf9                 mov edi, ecx
// 00671cc4  8b470c               mov eax, dword ptr [edi + 0xc]
// 00671cc7  85c0                 test eax, eax
// 00671cc9  7423                 je 0x671cee
// 00671ccb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671ccf  8b5104               mov edx, dword ptr [ecx + 4]
// 00671cd2  8b09                 mov ecx, dword ptr [ecx]
// 00671cd4  6a00                 push 0
// 00671cd6  52                   push edx
// 00671cd7  51                   push ecx
// 00671cd8  ffd0                 call eax
// 00671cda  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671cde  50                   push eax
// 00671cdf  56                   push esi
// 00671ce0  8bcf                 mov ecx, edi
// 00671ce2  e8c9fdffff           call 0x671ab0
// 00671ce7  5f                   pop edi
// 00671ce8  8bc6                 mov eax, esi
// 00671cea  5e                   pop esi
// 00671ceb  c20800               ret 8
// 00671cee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671cf2  33c0                 xor eax, eax
// 00671cf4  50                   push eax
// 00671cf5  56                   push esi
// 00671cf6  8bcf                 mov ecx, edi
// 00671cf8  e8b3fdffff           call 0x671ab0
// 00671cfd  5f                   pop edi
// 00671cfe  8bc6                 mov eax, esi
// 00671d00  5e                   pop esi
// 00671d01  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
