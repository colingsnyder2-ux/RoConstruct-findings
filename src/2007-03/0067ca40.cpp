// roc 2007-03 0067ca40  unit: seg_00670000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067ca40
//
// 0067ca40  56                   push esi
// 0067ca41  57                   push edi
// 0067ca42  33ff                 xor edi, edi
// 0067ca44  57                   push edi
// 0067ca45  8bf1                 mov esi, ecx
// 0067ca47  e8d4fcffff           call 0x67c720
// 0067ca4c  85c0                 test eax, eax
// 0067ca4e  7c16                 jl 0x67ca66
// 0067ca50  50                   push eax
// 0067ca51  8bce                 mov ecx, esi
// 0067ca53  e828fcffff           call 0x67c680
// 0067ca58  8d4830               lea ecx, [eax + 0x30]
// 0067ca5b  ff1520db7700         call dword ptr [0x77db20]
// 0067ca61  5f                   pop edi
// 0067ca62  5e                   pop esi
// 0067ca63  c20800               ret 8
// 0067ca66  8bc7                 mov eax, edi
// 0067ca68  5f                   pop edi
// 0067ca69  5e                   pop esi
// 0067ca6a  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp