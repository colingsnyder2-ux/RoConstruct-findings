// roc 2007-08 00671b80  unit: CPropertyGridItemBrickColor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671b80
//
// 00671b80  56                   push esi
// 00671b81  8bf1                 mov esi, ecx
// 00671b83  8b4604               mov eax, dword ptr [esi + 4]
// 00671b86  85c0                 test eax, eax
// 00671b88  57                   push edi
// 00671b89  741d                 je 0x671ba8
// 00671b8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671b8f  6a00                 push 0
// 00671b91  51                   push ecx
// 00671b92  ffd0                 call eax
// 00671b94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671b98  50                   push eax
// 00671b99  57                   push edi
// 00671b9a  8bce                 mov ecx, esi
// 00671b9c  e86fffffff           call 0x671b10
// 00671ba1  8bc7                 mov eax, edi
// 00671ba3  5f                   pop edi
// 00671ba4  5e                   pop esi
// 00671ba5  c20800               ret 8
// 00671ba8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671bac  33c0                 xor eax, eax
// 00671bae  50                   push eax
// 00671baf  57                   push edi
// 00671bb0  8bce                 mov ecx, esi
// 00671bb2  e859ffffff           call 0x671b10
// 00671bb7  8bc7                 mov eax, edi
// 00671bb9  5f                   pop edi
// 00671bba  5e                   pop esi
// 00671bbb  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
