// roc 2007-03 00686780  unit: seg_00680000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686780
//
// 00686780  56                   push esi
// 00686781  8bf1                 mov esi, ecx
// 00686783  8b4608               mov eax, dword ptr [esi + 8]
// 00686786  85c0                 test eax, eax
// 00686788  57                   push edi
// 00686789  741d                 je 0x6867a8
// 0068678b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068678f  6a00                 push 0
// 00686791  51                   push ecx
// 00686792  ffd0                 call eax
// 00686794  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00686798  50                   push eax
// 00686799  57                   push edi
// 0068679a  8bce                 mov ecx, esi
// 0068679c  e81fffffff           call 0x6866c0
// 006867a1  8bc7                 mov eax, edi
// 006867a3  5f                   pop edi
// 006867a4  5e                   pop esi
// 006867a5  c20800               ret 8
// 006867a8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006867ac  33c0                 xor eax, eax
// 006867ae  50                   push eax
// 006867af  57                   push edi
// 006867b0  8bce                 mov ecx, esi
// 006867b2  e809ffffff           call 0x6866c0
// 006867b7  8bc7                 mov eax, edi
// 006867b9  5f                   pop edi
// 006867ba  5e                   pop esi
// 006867bb  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
