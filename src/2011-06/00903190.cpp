// from server: 100% by auto
// roc 2011-06 00903190  unit: CXTButtonThemeOffice2003  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903190
//
// 00903190  56                   push esi
// 00903191  8bf1                 mov esi, ecx
// 00903193  8b4604               mov eax, dword ptr [esi + 4]
// 00903196  85c0                 test eax, eax
// 00903198  7414                 je 0x9031ae
// 0090319a  50                   push eax
// 0090319b  ff15c81aa400         call dword ptr [0xa41ac8]
// 009031a1  8b442408             mov eax, dword ptr [esp + 8]
// 009031a5  894604               mov dword ptr [esi + 4], eax
// 009031a8  8bc6                 mov eax, esi
// 009031aa  5e                   pop esi
// 009031ab  c20400               ret 4
// 009031ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009031b2  894e04               mov dword ptr [esi + 4], ecx
// 009031b5  8bc6                 mov eax, esi
// 009031b7  5e                   pop esi
// 009031b8  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Util\XTPUtil.cpp (function ??4CXTPIconHandle@@QAEAAV0@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPUtil.cpp
