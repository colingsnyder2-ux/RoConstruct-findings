// roc 2007-03 006867c0  unit: seg_00680000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006867c0
//
// 006867c0  56                   push esi
// 006867c1  8bf1                 mov esi, ecx
// 006867c3  8b4604               mov eax, dword ptr [esi + 4]
// 006867c6  85c0                 test eax, eax
// 006867c8  57                   push edi
// 006867c9  741d                 je 0x6867e8
// 006867cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006867cf  6a00                 push 0
// 006867d1  51                   push ecx
// 006867d2  ffd0                 call eax
// 006867d4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006867d8  50                   push eax
// 006867d9  57                   push edi
// 006867da  8bce                 mov ecx, esi
// 006867dc  e87ffeffff           call 0x686660
// 006867e1  8bc7                 mov eax, edi
// 006867e3  5f                   pop edi
// 006867e4  5e                   pop esi
// 006867e5  c20800               ret 8
// 006867e8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006867ec  33c0                 xor eax, eax
// 006867ee  50                   push eax
// 006867ef  57                   push edi
// 006867f0  8bce                 mov ecx, esi
// 006867f2  e869feffff           call 0x686660
// 006867f7  8bc7                 mov eax, edi
// 006867f9  5f                   pop edi
// 006867fa  5e                   pop esi
// 006867fb  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
