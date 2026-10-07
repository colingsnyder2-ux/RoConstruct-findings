// roc 2007-08 00722390  unit: CXTButtonThemeOffice2003  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00722390
//
// 00722390  56                   push esi
// 00722391  8bf1                 mov esi, ecx
// 00722393  8b4604               mov eax, dword ptr [esi + 4]
// 00722396  85c0                 test eax, eax
// 00722398  7414                 je 0x7223ae
// 0072239a  50                   push eax
// 0072239b  ff1538ed7700         call dword ptr [0x77ed38]
// 007223a1  8b442408             mov eax, dword ptr [esp + 8]
// 007223a5  894604               mov dword ptr [esi + 4], eax
// 007223a8  8bc6                 mov eax, esi
// 007223aa  5e                   pop esi
// 007223ab  c20400               ret 4
// 007223ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007223b2  894e04               mov dword ptr [esi + 4], ecx
// 007223b5  8bc6                 mov eax, esi
// 007223b7  5e                   pop esi
// 007223b8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTUtil.cpp (function ??4CXTIconHandle@@QAEAAV0@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTUtil.cpp
