// from server: 100% by auto
// roc 2011-06 00851c70  unit: CSourceStream  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851c70
//
// 00851c70  56                   push esi
// 00851c71  8bf1                 mov esi, ecx
// 00851c73  8b4608               mov eax, dword ptr [esi + 8]
// 00851c76  57                   push edi
// 00851c77  85c0                 test eax, eax
// 00851c79  741d                 je 0x851c98
// 00851c7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851c7f  6a00                 push 0
// 00851c81  51                   push ecx
// 00851c82  ffd0                 call eax
// 00851c84  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851c88  50                   push eax
// 00851c89  57                   push edi
// 00851c8a  8bce                 mov ecx, esi
// 00851c8c  e87ffdffff           call 0x851a10
// 00851c91  8bc7                 mov eax, edi
// 00851c93  5f                   pop edi
// 00851c94  5e                   pop esi
// 00851c95  c20800               ret 8
// 00851c98  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851c9c  33c0                 xor eax, eax
// 00851c9e  50                   push eax
// 00851c9f  57                   push edi
// 00851ca0  8bce                 mov ecx, esi
// 00851ca2  e869fdffff           call 0x851a10
// 00851ca7  8bc7                 mov eax, edi
// 00851ca9  5f                   pop edi
// 00851caa  5e                   pop esi
// 00851cab  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
