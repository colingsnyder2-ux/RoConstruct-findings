// from server: 100% by auto
// roc 2012-06 009ca130  unit: ATL::CRegObject  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca130
//
// 009ca130  56                   push esi
// 009ca131  8bf1                 mov esi, ecx
// 009ca133  8b4608               mov eax, dword ptr [esi + 8]
// 009ca136  57                   push edi
// 009ca137  85c0                 test eax, eax
// 009ca139  741d                 je 0x9ca158
// 009ca13b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ca13f  6a00                 push 0
// 009ca141  51                   push ecx
// 009ca142  ffd0                 call eax
// 009ca144  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca148  50                   push eax
// 009ca149  57                   push edi
// 009ca14a  8bce                 mov ecx, esi
// 009ca14c  e87ffdffff           call 0x9c9ed0
// 009ca151  8bc7                 mov eax, edi
// 009ca153  5f                   pop edi
// 009ca154  5e                   pop esi
// 009ca155  c20800               ret 8
// 009ca158  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca15c  33c0                 xor eax, eax
// 009ca15e  50                   push eax
// 009ca15f  57                   push edi
// 009ca160  8bce                 mov ecx, esi
// 009ca162  e869fdffff           call 0x9c9ed0
// 009ca167  8bc7                 mov eax, edi
// 009ca169  5f                   pop edi
// 009ca16a  5e                   pop esi
// 009ca16b  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
