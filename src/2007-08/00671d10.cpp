// roc 2007-08 00671d10  unit: CPropertyGridItemBrickColor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671d10
//
// 00671d10  56                   push esi
// 00671d11  8bf1                 mov esi, ecx
// 00671d13  8b4608               mov eax, dword ptr [esi + 8]
// 00671d16  85c0                 test eax, eax
// 00671d18  57                   push edi
// 00671d19  741d                 je 0x671d38
// 00671d1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671d1f  6a00                 push 0
// 00671d21  51                   push ecx
// 00671d22  ffd0                 call eax
// 00671d24  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671d28  50                   push eax
// 00671d29  57                   push edi
// 00671d2a  8bce                 mov ecx, esi
// 00671d2c  e87ffdffff           call 0x671ab0
// 00671d31  8bc7                 mov eax, edi
// 00671d33  5f                   pop edi
// 00671d34  5e                   pop esi
// 00671d35  c20800               ret 8
// 00671d38  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671d3c  33c0                 xor eax, eax
// 00671d3e  50                   push eax
// 00671d3f  57                   push edi
// 00671d40  8bce                 mov ecx, esi
// 00671d42  e869fdffff           call 0x671ab0
// 00671d47  8bc7                 mov eax, edi
// 00671d49  5f                   pop edi
// 00671d4a  5e                   pop esi
// 00671d4b  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
