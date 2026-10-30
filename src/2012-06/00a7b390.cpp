// from server: 100% by auto
// roc 2012-06 00a7b390  unit: CXTButtonThemeOffice2003  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b390
//
// 00a7b390  56                   push esi
// 00a7b391  8bf1                 mov esi, ecx
// 00a7b393  8b4604               mov eax, dword ptr [esi + 4]
// 00a7b396  85c0                 test eax, eax
// 00a7b398  7414                 je 0xa7b3ae
// 00a7b39a  50                   push eax
// 00a7b39b  ff15983bb200         call dword ptr [0xb23b98]
// 00a7b3a1  8b442408             mov eax, dword ptr [esp + 8]
// 00a7b3a5  894604               mov dword ptr [esi + 4], eax
// 00a7b3a8  8bc6                 mov eax, esi
// 00a7b3aa  5e                   pop esi
// 00a7b3ab  c20400               ret 4
// 00a7b3ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a7b3b2  894e04               mov dword ptr [esi + 4], ecx
// 00a7b3b5  8bc6                 mov eax, esi
// 00a7b3b7  5e                   pop esi
// 00a7b3b8  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Util\XTPUtil.cpp (function ??4CXTPIconHandle@@QAEAAV0@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPUtil.cpp
