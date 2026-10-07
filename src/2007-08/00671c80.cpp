// roc 2007-08 00671c80  unit: CPropertyGridItemBrickColor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671c80
//
// 00671c80  56                   push esi
// 00671c81  8bf1                 mov esi, ecx
// 00671c83  8b4604               mov eax, dword ptr [esi + 4]
// 00671c86  85c0                 test eax, eax
// 00671c88  57                   push edi
// 00671c89  741d                 je 0x671ca8
// 00671c8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671c8f  6a00                 push 0
// 00671c91  51                   push ecx
// 00671c92  ffd0                 call eax
// 00671c94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671c98  50                   push eax
// 00671c99  57                   push edi
// 00671c9a  8bce                 mov ecx, esi
// 00671c9c  e80ffeffff           call 0x671ab0
// 00671ca1  8bc7                 mov eax, edi
// 00671ca3  5f                   pop edi
// 00671ca4  5e                   pop esi
// 00671ca5  c20800               ret 8
// 00671ca8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671cac  33c0                 xor eax, eax
// 00671cae  50                   push eax
// 00671caf  57                   push edi
// 00671cb0  8bce                 mov ecx, esi
// 00671cb2  e8f9fdffff           call 0x671ab0
// 00671cb7  8bc7                 mov eax, edi
// 00671cb9  5f                   pop edi
// 00671cba  5e                   pop esi
// 00671cbb  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
