// from server: 100% by auto
// roc 2012-06 009ca0e0  unit: ATL::CRegObject  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca0e0
//
// 009ca0e0  56                   push esi
// 009ca0e1  57                   push edi
// 009ca0e2  8bf9                 mov edi, ecx
// 009ca0e4  8b470c               mov eax, dword ptr [edi + 0xc]
// 009ca0e7  85c0                 test eax, eax
// 009ca0e9  7423                 je 0x9ca10e
// 009ca0eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ca0ef  8b5104               mov edx, dword ptr [ecx + 4]
// 009ca0f2  8b09                 mov ecx, dword ptr [ecx]
// 009ca0f4  6a00                 push 0
// 009ca0f6  52                   push edx
// 009ca0f7  51                   push ecx
// 009ca0f8  ffd0                 call eax
// 009ca0fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ca0fe  50                   push eax
// 009ca0ff  56                   push esi
// 009ca100  8bcf                 mov ecx, edi
// 009ca102  e8c9fdffff           call 0x9c9ed0
// 009ca107  5f                   pop edi
// 009ca108  8bc6                 mov eax, esi
// 009ca10a  5e                   pop esi
// 009ca10b  c20800               ret 8
// 009ca10e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ca112  33c0                 xor eax, eax
// 009ca114  50                   push eax
// 009ca115  56                   push esi
// 009ca116  8bcf                 mov ecx, edi
// 009ca118  e8b3fdffff           call 0x9c9ed0
// 009ca11d  5f                   pop edi
// 009ca11e  8bc6                 mov eax, esi
// 009ca120  5e                   pop esi
// 009ca121  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
