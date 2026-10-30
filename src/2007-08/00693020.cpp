// roc 2007-08 00693020  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693020
//
// 00693020  56                   push esi
// 00693021  57                   push edi
// 00693022  33ff                 xor edi, edi
// 00693024  57                   push edi
// 00693025  8bf1                 mov esi, ecx
// 00693027  e8d4fcffff           call 0x692d00
// 0069302c  85c0                 test eax, eax
// 0069302e  7c16                 jl 0x693046
// 00693030  50                   push eax
// 00693031  8bce                 mov ecx, esi
// 00693033  e828fcffff           call 0x692c60
// 00693038  8d4830               lea ecx, [eax + 0x30]
// 0069303b  ff15c8dc7700         call dword ptr [0x77dcc8]
// 00693041  5f                   pop edi
// 00693042  5e                   pop esi
// 00693043  c20800               ret 8
// 00693046  8bc7                 mov eax, edi
// 00693048  5f                   pop edi
// 00693049  5e                   pop esi
// 0069304a  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp