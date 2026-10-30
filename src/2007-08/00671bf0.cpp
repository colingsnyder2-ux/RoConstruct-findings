// from server: 100% by auto
// roc 2007-08 00671bf0  unit: CPropertyGridItemBrickColor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671bf0
//
// 00671bf0  56                   push esi
// 00671bf1  57                   push edi
// 00671bf2  8bf9                 mov edi, ecx
// 00671bf4  8b470c               mov eax, dword ptr [edi + 0xc]
// 00671bf7  85c0                 test eax, eax
// 00671bf9  7423                 je 0x671c1e
// 00671bfb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671bff  8b5104               mov edx, dword ptr [ecx + 4]
// 00671c02  8b09                 mov ecx, dword ptr [ecx]
// 00671c04  6a00                 push 0
// 00671c06  52                   push edx
// 00671c07  51                   push ecx
// 00671c08  ffd0                 call eax
// 00671c0a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671c0e  50                   push eax
// 00671c0f  56                   push esi
// 00671c10  8bcf                 mov ecx, edi
// 00671c12  e8f9feffff           call 0x671b10
// 00671c17  5f                   pop edi
// 00671c18  8bc6                 mov eax, esi
// 00671c1a  5e                   pop esi
// 00671c1b  c20800               ret 8
// 00671c1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671c22  33c0                 xor eax, eax
// 00671c24  50                   push eax
// 00671c25  56                   push esi
// 00671c26  8bcf                 mov ecx, edi
// 00671c28  e8e3feffff           call 0x671b10
// 00671c2d  5f                   pop edi
// 00671c2e  8bc6                 mov eax, esi
// 00671c30  5e                   pop esi
// 00671c31  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
